import java.awt.Container;
import java.awt.RenderingHints.Key;
import java.awt.event.ActionEvent;
import java.awt.event.KeyAdapter;
import java.awt.event.KeyEvent;

import javax.swing.JLabel;

class ActionListener extends KeyAdapter{
	JLabel bear, fish;
	Thread th;
	Container c;
	public ActionListener(JLabel bear, JLabel fish, Thread th, Container c) {
		this.bear = bear; this.fish = fish; this.th = th; this.c = c;
	}
	
	public void keyPressed(KeyEvent e) {
		int key = e.getKeyCode();
		System.out.println("test");
		switch(key) {
		case KeyEvent.VK_UP:
			if(bear.getY() - 20 >= 0)
				bear.setLocation(bear.getX(), bear.getY() - 20);
			break;
		case KeyEvent.VK_DOWN:
			if(bear.getY() + 20 <= 400)
				bear.setLocation(bear.getX(), bear.getY() + 20);
			break;
		case KeyEvent.VK_LEFT:
			if(bear.getX() - 20 >= 0)
				bear.setLocation(bear.getX() - 20, bear.getY());
			break;
		case KeyEvent.VK_RIGHT:
			if(bear.getX() + 20 <= 400)
				bear.setLocation(bear.getX() + 20, bear.getY());
			break;
		}
		if(bear.getLocation().equals(fish.getLocation())) {
			JLabel finish = new JLabel("Bear가 Fish를 잡아먹었습니다~!");
			th.interrupt();
			c.add(finish);
			finish.setLocation(120,100);
			finish.setSize(200,30);
			finish.setVisible(true);
		}
	}
}
