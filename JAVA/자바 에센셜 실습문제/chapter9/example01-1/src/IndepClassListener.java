import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

public class IndepClassListener extends JFrame{
	public IndepClassListener() {
		setTitle("9�忹�� 01��");
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		Container c = getContentPane();
		
		c.setLayout(new FlowLayout());
		JButton btn = new JButton("��ư");
		btn.addActionListener(new MyActionListener());
		c.add(btn);
		JButton btn2 = new JButton("2");
		c.add(btn2);
		
		setSize(250,120);
		setVisible(true);
	}
	public static void main(String[] args) {
		new IndepClassListener();
	}
}

class MyActionListener implements ActionListener{
	public void actionPerformed(ActionEvent e) {
		JButton b = (JButton)e.getSource();
		if(b.getText().equals("��ư"))
			b.setText("Button");
		else
			b.setText("��ư");
	}
}