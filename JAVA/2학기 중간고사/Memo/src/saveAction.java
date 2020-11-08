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
		JButton b = (JButton)e.getSource();	// 버튼이 동작할 때
		FileWriter fout = null;		// 파일에 저장
		
		try {
			fout = new FileWriter(tf.getText());	// tf에 있는 주소에 저장하겠다.
			fout.write(ta.getText());		// ta에 있는 text내용을
			fout.close();
		}
		catch(IOException er) {
			ta.append("입출력 오류");
		}
	}
}
