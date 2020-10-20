
import java.awt.BorderLayout;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.JFrame;
import javax.swing.JTextArea;
import javax.swing.JTextField;

public class ClientGUI extends JFrame implements ActionListener {

	private JTextArea jta = new JTextArea(40, 25);
	private JTextField jtf = new JTextField(25);
	private ClientBackground client = new ClientBackground();

	public ClientGUI() {

		add(jta, BorderLayout.CENTER);
		add(jtf, BorderLayout.SOUTH);
		jtf.addActionListener(this);

		setDefaultCloseOperation(EXIT_ON_CLOSE);
		setVisible(true);
		setBounds(800, 100, 400, 600);
		setTitle("클라이언트 부분");

		client.setGui(this);
		client.connet();
	}

	public static void main(String[] args) {
		new ClientGUI();
	}

	@Override
	//메세지 내용 입력하면 보내는 부분.
	public void actionPerformed(ActionEvent e) { // 메세지를 입력 할 수 있는 액션 부분.
		String msg = jtf.getText() + "\n";
		jta.append("클라이언트의 메세지 : " + msg);
		System.out.print(msg);
		client.sendMessage(msg);
		jtf.setText("");
	}

	public void appendMsg(String msg) {
		jta.append("서버의 메세지 : " + msg);
		
	}
}
