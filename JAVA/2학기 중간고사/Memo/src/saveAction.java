import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.io.FileWriter;
import java.io.IOException;

import javax.swing.*;

class saveAction implements ActionListener {
	JTextField tf;
	JTextArea ta;
	public saveAction(JTextField tf, JTextArea ta) {
		this.tf = tf;
		this.ta = ta;
	}
	public void actionPerformed(ActionEvent e) {
		JButton b = (JButton)e.getSource();	// ��ư�� ������ ��
		FileWriter fout = null;		// ���Ͽ� ����
		
		try {
			fout = new FileWriter(tf.getText());	// tf�� �ִ� �ּҿ� �����ϰڴ�.
			fout.write(ta.getText());		// ta�� �ִ� text������
			fout.close();
		}
		catch(IOException er) {
			ta.append("����� ����");
		}
	}
}
