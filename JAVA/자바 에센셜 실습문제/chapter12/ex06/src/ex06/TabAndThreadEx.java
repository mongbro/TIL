package ex06;

import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

class MyLabel extends JLabel{
	private int barSize = 0;												// 바의 크기
	private int maxBarSize;
	
	public MyLabel(int maxBarSize) {
		this.maxBarSize = maxBarSize;
	}
	
	public void paintComponent(Graphics g) {
		super.paintComponent(g);											// 67번 라인의 bar.setBackground()에 의해 배경을 오랜지색으로 칠한다.
		g.setColor(Color.MAGENTA);
		int width = (int)(((double)(getWidth()))/maxBarSize*barSize);
		if(width == 0)
			return;												// 크기가 0이므로 바를 그릴 필요가 없음
		g.fillRect(0, 0, width, this.getHeight());							// width만큼 MAGENTA색으로 칠함
	}
	
	synchronized void fill() {
		System.out.println("barSize >>"+barSize);
		System.out.println("maxBarSize >>"+maxBarSize);
		if(barSize == maxBarSize) {
			try {
				wait();														// 바의 크기가 최대이면, consumerthread에 의해 바의 크기가 줄어들때까지 대기
			}
			catch(InterruptedException e) {
				return;
			}
													// 기다리는 consumerthread 스레드 깨우기
		}
		barSize++;
		repaint();														// 바 다시 그리기
		notify();	
		
	}
	synchronized void consume() {
		if(barSize == 0) {
			try {
				wait();														// 바의 크기가 0이면 0보다 커질 때까지 대기
			}
			catch(InterruptedException e) {
				return;
			}
		}
		barSize--;
		repaint();														// 바 다시 그리기
		notify();														// 기다리는 consumerthread 스레드 깨우기
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
				sleep(100);												// 0.1초 자기
				bar.consume();											// 0.1초마다 바를 1씩 줄임
			}
			catch(InterruptedException e) {return;}
		}
	}
}

public class TabAndThreadEx extends JFrame {
	private MyLabel bar = new MyLabel(100);								// 바의 최대 크기를 100으로 설정
	
	public TabAndThreadEx(String title) {
		super(title);
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		Container c = getContentPane();
		c.setLayout(null);
		bar.setBackground(Color.ORANGE);
		bar.setOpaque(true);
		bar.setLocation(20,50);
		bar.setSize(300,20);											// 300 x 20크기의 바
		c.add(bar);
																		// 컨텐트팬에 키 이벤트 핸들러 등록
		c.addKeyListener(new KeyAdapter() {
			public void keyPressed(KeyEvent e) {
				
				bar.fill();												// 키를 누를 때 마다 바가 1씩 증가
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
		new TabAndThreadEx("아무 키나 빨리 눌러 바 채우기");
	}
}
