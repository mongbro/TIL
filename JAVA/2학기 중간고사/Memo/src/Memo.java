import java.awt.*;
import javax.swing.*;

public class Memo extends JFrame {
	public Memo() {
		setTitle("메모장");
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		Container c = getContentPane();		
		JTextArea ta = new JTextArea(30,50);		// 메모의 내용을 표시할 텍스트 에리어
		JTextField tf = new JTextField(28);			// 메모를 저장하거나 불러올 주소를 표시할 텍스트필드
		JButton open = new JButton("열기");			// 열기 버튼
		JButton save = new JButton("저장");			// 저장 버튼
		JButton create = new JButton("새로 만들기");	// 새로 만들기 버튼
		
		c.setLayout(new FlowLayout());
		c.add(new JScrollPane(ta));		// 텍스트 에리어에 스크롤기능 삽입후 컨테이너에 ta삽입
		c.add(tf);		// 컨테이너에 tf삽입
		c.add(open);	// 컨테이너에 열기버튼 삽입
		c.add(save);	// 컨테이너에 저장버튼 삽입
		c.add(create);	// 컨테이너에 새로만들기버튼 삽입
		
		open.addActionListener(new openAction(tf, ta));		// 열기 버튼에 이벤트처리기능 삽입
		save.addActionListener(new saveAction(tf, ta));		// 저장 버튼에 이벤트처리기능 삽입
		create.addActionListener(new createAction(tf, ta));	// 새로만들기 버튼에 이벤트처리기능 삽입
		
		setSize(580,650);
		setVisible(true);
	}
	public static void main(String[] args) {
		new Memo();
	}
}