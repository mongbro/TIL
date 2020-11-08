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
		JButton b = (JButton)e.getSource();		// 버튼이 동작할 때
		try {
			Scanner fs = new Scanner(new FileReader(tf.getText()));	// 파일에 있는 내용을 fs에 받아온다.
			while(fs.hasNext()) {			// 내용이 존재할 경우에만 반복문 수행
				ta.append(fs.nextLine());	// fs에 있는 내용을 한줄씩 받아와서 ta에 삽입
				ta.append("\n");			// ta에 엔터
			}
		}
		catch(IOException er) {
			ta.append("입출력 오류");
		}
	}
}
