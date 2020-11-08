import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.*;

public class createAction implements ActionListener {
	JTextField tf;
	JTextArea ta;
	public createAction(JTextField tf, JTextArea ta) {
		this.tf = tf;
		this.ta = ta;
	}
	
	public void actionPerformed(ActionEvent e) {
		JButton b = (JButton)e.getSource();	// 버튼이 동작할때
		tf.setText("");		// tf에 있는 내용 전부 날리기
		ta.setText("");		// ta에 있는 내용 전부 날리기
	}
}
