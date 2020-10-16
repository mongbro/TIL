package ex04;

import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
import java.util.Random;

public class VibratingFrame extends JFrame implements Runnable{
	private Thread th;											// �����ϴ� ������
	public VibratingFrame() {
		setTitle("�����ϴ� ������");
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		setSize(200,200);
		setLocation(300,300);									// �������� ��ġ�� ��ũ���� 300, 300�� ����
		setVisible(true);
		
		getContentPane().addMouseListener(new MouseAdapter() {
			public void mousePressed(MouseEvent e) {
				if(!th.isAlive()) return;						// �̹� �����尡 ����Ǿ����� �׳� ����
				th.interrupt();									// ���� �����忡�� ���ܸ� ������ ��������
			}
		});
		
		th = new Thread(this);									// ���� ������ ��ü ����
		th.start();												// ���� ����
	}
	@Override
	public void run() {											// �������� ������ ���� 20ms���� ��������n ��ġ�� �����ϰ� �̵�
		Random r = new Random();								// ������ ��ġ ������ü
		while(true) {
			try {
				Thread.sleep(20);
			}
			catch(InterruptedException e) {
				return;
			}
			int x = getX() + r.nextInt()%5;						// ������ ��ġ x
			int y = getY() + r.nextInt()%5;						// ������ ��ġ y
			setLocation(x, y);									// ����ȿ��
		}
	}
	public static void main(String[] args) {
		new VibratingFrame();
	}
}
