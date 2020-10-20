
import java.awt.BorderLayout;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.JFrame;
import javax.swing.JTextArea;
import javax.swing.JTextField;

public class ServerGUI extends JFrame implements ActionListener {

	private JTextArea jta = new JTextArea(40, 25);
	private JTextField jtf = new JTextField(25);
	//  연동
	private ServerBackground server = new ServerBackground();
	
	public ServerGUI() {

		add(jta, BorderLayout.CENTER);
		add(jtf, BorderLayout.SOUTH);
		jtf.addActionListener(this);

		setDefaultCloseOperation(EXIT_ON_CLOSE);
		setVisible(true);
		setBounds(200, 100, 400, 600);
		setTitle("서버부분");

		server.setGui(this); //GUI 연동
		server.setting();
	}

	public static void main(String[] args) {
		new ServerGUI();
	}

	@Override
	public void actionPerformed(ActionEvent e) { // 메세지를 입력 할 수 있는 액션 부분.
		String msg = jtf.getText() + "\n";
		jta.append("서버의 메세지 : " +msg);
		System.out.print(msg);
		server.sendMessage(msg);
		jtf.setText("");
	}
	public void appendMsg(String msg) {
		jta.append("클라이언트의 메세지 : " + msg);
	}
}
