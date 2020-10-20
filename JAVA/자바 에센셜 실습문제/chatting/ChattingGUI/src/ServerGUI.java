import java.awt.*;
import java.awt.event.*;
import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.net.ServerSocket;
import java.net.Socket;
import javax.swing.*;

/**************** GUI �κ� ���� *******************/

public class ServerGUI extends JFrame {
	private JTextField tf = new JTextField(25);		// �Է��ϴ� �޼����� �����ִ� �ؽ�Ʈ�ʵ�
	public JTextArea ta = new JTextArea(25,25);		// ���� �޼����� �����ִ� �ؽ�Ʈ������
	private Server server =  new Server();			// GUI�� ������ �� ����
	
	public ServerGUI() {
		server.setGUI(this);							// GUI setter
		setTitle("���� ä�� â");
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		Container c = getContentPane();
		c.setLayout(new BorderLayout());				// �������̾ƿ����� ���� north�� �ؽ�Ʈ������, center�� �ؽ�Ʈ�ʵ�, east�� ������ ��ư
		c.add(new JScrollPane(ta), BorderLayout.NORTH);	// �ؽ�Ʈ������ ta�� north�� ����
		c.add(tf, BorderLayout.CENTER);					// �ؽ�Ʈ�ʵ� tf�� center�� ����
		JButton sendbtn = new JButton("send");				//===== ��ư ���� ======
		sendbtn.addActionListener(new MyActionListener());	// ��ư ��� ����
		c.add(sendbtn, BorderLayout.EAST);					//===== ������� ��ư =====
		
		
		tf.addActionListener(new ActionListener() {		// ����Ű�� �Է��������� ���
			@Override									// ** ��ư ��ɰ� ���� **
			public void actionPerformed(ActionEvent e) {
				String inputMessage = tf.getText();			// �Է¹��� ���ڿ��� tf�� ����
				ta.append("���� : " + inputMessage + "\n");	// ta�� "���� : ���ڿ�"�� ����
				System.out.println(inputMessage);			// �ֿܼ��� Ȯ���ϴ� �κ�
				server.wm.send(inputMessage);				// client���� ���ڿ��� ����
				tf.setText("");								// �� ������ ��� ��ģ �� tf�� �ʱ�ȭ
			}
		});
		setSize(500,520);
		setVisible(true);
		server.connet();									// GUI�� ���� ������ ���� �����ؾ� ������ �����ϱ� ������ GUI�� ȭ�鿡 ���´�
	}
	private class MyActionListener implements ActionListener{	// ** ��ư ��� ** �� ����Ű�� ������ ���
		public void actionPerformed(ActionEvent e) {
			JButton b = (JButton)e.getSource();
			String inputMessage = tf.getText();
			ta.append("���� : " + inputMessage + "\n");
			System.out.println(inputMessage);
			server.wm.send(inputMessage);
			tf.setText("");
		}
	}
	
	public void appendMessage(String m) {				// ������ �޼����� ���� ���� ta�� �����ϴ� �޼ҵ�
		ta.append("Ŭ���̾�Ʈ : " + m + "\n");
	}
	
	public static void main(String[] args) {
		new ServerGUI();
	}
}

/**************** GUI �κ� �� *******************/
/**************** ���� �κ� ���� *******************/

class Server{
	public sreadMessage rm = null;							// �޾ƿ��� ������
	public swriteMessage wm = null;							// ������ ������
	private ServerGUI gui;
	public void setGUI(ServerGUI g) {						// GUI setter
		this.gui = g;
	}
	class sreadMessage extends Thread{						// Ŭ���̾�Ʈ���Լ� �޼����� �޾ƿ��� ������
		BufferedReader in = null;
		String m;											// �޾ƿ��� �޼���
		Socket s;											// �����ϴ� ����
		public sreadMessage(Socket s) {						// ������
			this.s = s;
		}
		@Override
		public void run() {
			try {
				in = new BufferedReader(new InputStreamReader(s.getInputStream()));
				while(true) {
					m = in.readLine();					// Ŭ���̾�Ʈ�� �ѱ� �޼����� m�� ����
					gui.appendMessage(m);				// �޼����� ���� ���� ������ ta�� "Ŭ���̾�Ʈ : m"�� ����
					if(m.equalsIgnoreCase("bye")) {		// ������ "bye"���Է��ؼ� ��ȭ�� �����ϸ�
						gui.ta.append("=====������ ��ȭ�� �����߽��ϴ�.=====");	// ������ GUI�� ta�� "=====������ ��ȭ�� �����߽��ϴ�.=====" ����
						rm.stop();						// ������ ����
						wm.stop();						// ������ ����
						break;
					}
					System.out.println("Ŭ���̾�Ʈ �޼��� >>"+m);	// �ֿܼ��� Ȯ���ϴ� �κ�
				}
			}catch(IOException e) {
				System.out.println(e.getMessage());
				return;
			}
		}
	}	
	class swriteMessage extends Thread{				// Ŭ���̾�Ʈ���� �޼����� ������ ������
		BufferedWriter out = null;	
		Socket s;									// �����ϴ� ����
		public swriteMessage(Socket s) {			// ������
			this.s = s;
		}
		@Override
		public void run() {
			try {
				out = new BufferedWriter(new OutputStreamWriter(s.getOutputStream()));
				while(true) {}						// �����尡 ������ �ʵ��� ��� �ݺ����ش�.
			}catch(IOException e) {
				System.out.println(e.getMessage());
				return;
			}
		}
	
		public void send(String message) {						//	������ �޼����� �����ִ� �޼ҵ�
			try {
			out.write(message + "\n");							// Ű���忡�� ���� ���ڿ� ����
			if(message.equalsIgnoreCase("bye")) {				// ������ "bye"�� �Է��� ��ȭ�� �����ϸ�
				gui.appendMessage("\n=====��ȭ�� �����մϴ�.=====");	// ���� GUI�� ta�� "=====��ȭ�� �����մϴ�.=====" ����
			}
			out.flush();										// out ��Ʈ�� ���ۿ� �ִ� ��� ���ڿ� ����
			}catch(IOException e) {
				System.out.println(e.getMessage());
				return;
			}
		}
	}
	
	public void connet() {									// Ŭ���̾�Ʈ�� ���� ������ �����ϴ� �޼ҵ�
		ServerSocket listener = null;						// ���� ����
		Socket socket = null;								// ��� ����
		try {
			listener = new ServerSocket(9999);				// ���� ���� ����
			System.out.println("������ ��ٸ��� �ֽ��ϴ�...");		// �ֿܼ��� Ȯ���ϴ� �κ�
			socket = listener.accept();						// Ŭ���̾�Ʈ�κ��� ���� ��û ���
			System.out.println("����Ǿ����ϴ�.");
			rm = new sreadMessage(socket);					// �޾ƿ��� ������ ��ü ����
			wm = new swriteMessage(socket);					// ������ ������ ��ü ����
			rm.start();										// �޾ƿ��� ������ ����
			wm.start();										// ������ ������ ����
			while(rm.isAlive()&&wm.isAlive()) {}			// ���� �ϳ��� ���������� �ݺ�
															// �ݺ��� �����ָ� finally���� �ִ� socket.close()������ ������ �ٷ� ������.
		}
		catch(IOException e) {
			System.out.println(e.getMessage());
		}
		finally {
			try{
				socket.close();								// ��ſ� ���� �ݱ�
				listener.close();							// ���� ���� �ݱ�
			}
			catch(IOException e) {
				System.out.println("Ŭ���̾�Ʈ�� ä�� �� ������ �߻��߽��ϴ�.");
			}
		}
	}
}

/**************** ���� �κ� �� *******************/