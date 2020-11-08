import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.io.FileReader;
import java.io.IOException;
import java.util.Scanner;
import javax.swing.*;

class openAction implements ActionListener {
	JTextField tf;
	JTextArea ta;
	public openAction(JTextField tf, JTextArea ta) {
		this.tf = tf;
		this.ta = ta;
	}
	
	public void actionPerformed(ActionEvent e) {
		JButton b = (JButton)e.getSource();		// ��ư�� ������ ��
		try {
			Scanner fs = new Scanner(new FileReader(tf.getText()));	// ���Ͽ� �ִ� ������ fs�� �޾ƿ´�.
			while(fs.hasNext()) {			// ������ ������ ��쿡�� �ݺ��� ����
				ta.append(fs.nextLine());	// fs�� �ִ� ������ ���پ� �޾ƿͼ� ta�� ����
				ta.append("\n");			// ta�� ����
			}
		}
		catch(IOException er) {
			ta.append("����� ����");
		}
	}
}
