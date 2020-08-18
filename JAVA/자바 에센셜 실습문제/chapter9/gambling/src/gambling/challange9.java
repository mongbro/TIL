package gambling;
import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

public class challange9 extends JFrame{
	private JLabel la = new JLabel("");
	public challange9() {
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		Container c = getContentPane();
		c.setLayout(new FlowLayout());
		c.add(la);
		c.addKeyListener(new MyKeyListener());
		setSize(400, 200);
		setVisible(true);
		
		c.setFocusable(true);
		c.requestFocus();
	}
	class MyKeyListener extends KeyAdapter{
		public void enterPress(KeyEvent e) {
			int x = (int)(Math.random()*5);
			int y = (int)(Math.random()*5);
			int z = (int)(Math.random()*5);
			if(e.getKeyChar() == '\n')
				la.setText("x" + x + ", Y " + y + ", Z " + z);
			
		}
	}
	public static void main(String[] args) {
		new challange9();
	}
}
