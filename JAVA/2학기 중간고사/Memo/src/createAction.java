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
		JButton b = (JButton)e.getSource();	// ��ư�� �����Ҷ�
		tf.setText("");		// tf�� �ִ� ���� ���� ������
		ta.setText("");		// ta�� �ִ� ���� ���� ������
	}
}
