import java.awt.Container;

import javax.swing.*;

class GUI extends JFrame {
	JLabel bear = new JLabel("B");
	JLabel fish = new JLabel("@");
	Thread th;
	
	public GUI() {
		th = new Thread(new FishMove(fish));
		setTitle("BNF2");
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		Container c = getContentPane();
		c.setLayout(null);
		setSize(430,460);
		setVisible(true);
		c.addKeyListener(new ActionListener(bear, fish, th, c));
		
		th.start();
		bear.setLocation(0,0);
		fish.setLocation(200,200);
		bear.setSize(20,20);
		fish.setSize(20,20);
		c.add(bear);
		c.add(fish);
		c.requestFocus();
	}
}
