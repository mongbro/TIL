
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
		setTitle("Ŭ���̾�Ʈ �κ�");

		client.setGui(this);
		client.connet();
	}

	public static void main(String[] args) {
		new ClientGUI();
	}

	@Override
	//�޼��� ���� �Է��ϸ� ������ �κ�.
	public void actionPerformed(ActionEvent e) { // �޼����� �Է� �� �� �ִ� �׼� �κ�.
		String msg = jtf.getText() + "\n";
		jta.append("Ŭ���̾�Ʈ�� �޼��� : " + msg);
		System.out.print(msg);
		client.sendMessage(msg);
		jtf.setText("");
	}

	public void appendMsg(String msg) {
		jta.append("������ �޼��� : " + msg);
		
	}
}
