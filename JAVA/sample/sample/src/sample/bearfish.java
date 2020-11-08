package sample;

import java.awt.event.KeyEvent;
import java.util.Scanner;
import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

public class bearfish extends JFrame{
	Bear b = new Bear();
	Fish f = new Fish();
	
	public bearfish() {
		setTitle("Bear And Fish Game");
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		Container mainC = getContentPane();
		mainC.setLayout(null);
		b.BearText.setLocation(0,0);
		f.FishText.setLocation(200,200);
		
		mainC.add(b.BearText);
		mainC.add(f.FishText);
		
		setSize(400,400);
		setVisible(true);
	}
	public boolean collide(Bear b, Fish f) {
		if(b.BearText.getX() == f.FishText.getX() && b.BearText.getY() == f.FishText.getY())
			return true;
		else
			return false;
	}
	public static void main(String [] args) {
		new bearfish();
	}
}
/******************** BEAR ***********************/
class Bear {
	Scanner sc = new Scanner(System.in);
	public JLabel BearText = new JLabel("B");
	
	public void move() {
/*		int key = getKeyCode();
		switch(key) {
		case KeyEvent.VK_UP:
			if(BearText.getY() - 20 >= 0)
				BearText.setLocation(BearText.getX(), BearText.getY() - 20);
			break;
		case KeyEvent.VK_DOWN:
			if(BearText.getY() + 20 < 400)
				BearText.setLocation(BearText.getX(), BearText.getY() + 20);
			break;
		case KeyEvent.VK_LEFT:
			if(BearText.getX() - 20 >= 0)
				BearText.setLocation(BearText.getX() - 20, BearText.getY());
			break;
		case KeyEvent.VK_RIGHT:
			if(BearText.getX() + 20 < 400)
				BearText.setLocation(BearText.getX() + 20, BearText.getY());
			break;
		}*/
	}
}
/******************** BEAR ***********************/
/******************** FISH ***********************/
class Fish {
	Scanner sc = new Scanner(System.in);
	public JLabel FishText = new JLabel("@");
	
	public void move() {
		
	}
}
/******************** FISH ***********************/