import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

public class IndepClassListener extends JFrame{
	public IndepClassListener() {
		setTitle("9장예제 01번");
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		Container c = getContentPane();
		
		c.setLayout(new FlowLayout());
		JButton btn = new JButton("버튼");
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
		if(b.getText().equals("버튼"))
			b.setText("Button");
		else
			b.setText("버튼");
	}
}