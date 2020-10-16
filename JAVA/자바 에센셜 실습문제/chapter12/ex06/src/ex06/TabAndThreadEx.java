package ex06;

import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

class MyLabel extends JLabel{
	private int barSize = 0;												// ���� ũ��
	private int maxBarSize;
	
	public MyLabel(int maxBarSize) {
		this.maxBarSize = maxBarSize;
	}
	
	public void paintComponent(Graphics g) {
		super.paintComponent(g);											// 67�� ������ bar.setBackground()�� ���� ����� ������������ ĥ�Ѵ�.
		g.setColor(Color.MAGENTA);
		int width = (int)(((double)(getWidth()))/maxBarSize*barSize);
		if(width == 0)
			return;												// ũ�Ⱑ 0�̹Ƿ� �ٸ� �׸� �ʿ䰡 ����
		g.fillRect(0, 0, width, this.getHeight());							// width��ŭ MAGENTA������ ĥ��
	}
	
	synchronized void fill() {
		System.out.println("barSize >>"+barSize);
		System.out.println("maxBarSize >>"+maxBarSize);
		if(barSize == maxBarSize) {
			try {
				wait();														// ���� ũ�Ⱑ �ִ��̸�, consumerthread�� ���� ���� ũ�Ⱑ �پ�鶧���� ���
			}
			catch(InterruptedException e) {
				return;
			}
													// ��ٸ��� consumerthread ������ �����
		}
		barSize++;
		repaint();														// �� �ٽ� �׸���
		notify();	
		
	}
	synchronized void consume() {
		if(barSize == 0) {
			try {
				wait();														// ���� ũ�Ⱑ 0�̸� 0���� Ŀ�� ������ ���
			}
			catch(InterruptedException e) {
				return;
			}
		}
		barSize--;
		repaint();														// �� �ٽ� �׸���
		notify();														// ��ٸ��� consumerthread ������ �����
	}
}

class ConsumerThread extends Thread{
	private MyLabel bar;
	
	public ConsumerThread(MyLabel bar) {
		this.bar = bar;
	}
	@Override
	public void run() {
		while(true) {
			try {
				sleep(100);												// 0.1�� �ڱ�
				bar.consume();											// 0.1�ʸ��� �ٸ� 1�� ����
			}
			catch(InterruptedException e) {return;}
		}
	}
}

public class TabAndThreadEx extends JFrame {
	private MyLabel bar = new MyLabel(100);								// ���� �ִ� ũ�⸦ 100���� ����
	
	public TabAndThreadEx(String title) {
		super(title);
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		Container c = getContentPane();
		c.setLayout(null);
		bar.setBackground(Color.ORANGE);
		bar.setOpaque(true);
		bar.setLocation(20,50);
		bar.setSize(300,20);											// 300 x 20ũ���� ��
		c.add(bar);
																		// ����Ʈ�ҿ� Ű �̺�Ʈ �ڵ鷯 ���
		c.addKeyListener(new KeyAdapter() {
			public void keyPressed(KeyEvent e) {
				
				bar.fill();												// Ű�� ���� �� ���� �ٰ� 1�� ����
			}
		});
		setSize(350,200);
		setVisible(true);
		
		c.setFocusable(true);
		c.requestFocus();
		ConsumerThread th = new ConsumerThread(bar);
		th.start();
	}
	public static void main(String[] args) {
		new TabAndThreadEx("�ƹ� Ű�� ���� ���� �� ä���");
	}
}
