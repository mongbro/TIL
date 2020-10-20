import java.awt.*;
import java.awt.event.*;
import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.net.Socket;
import javax.swing.*;

/**************** GUI 부분 시작 *******************/

public class ClientGUI extends JFrame {
	private JTextField tf = new JTextField(25);			// 입력하는 메세지를 보여주는 텍스트필드
	public JTextArea ta = new JTextArea(25,25);			// 오고간 메세지를 보여주는 텍스트에리어
	private Client client = new Client();				// GUI에 연결해 줄 서버
	
	public ClientGUI() {
		client.setGUI(this);							// GUI setter
		setTitle("클라이언트 채팅 창");
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		Container c = getContentPane();
		c.setLayout(new BorderLayout());				// 보더레이아웃으로 만들어서 north에 텍스트에리어, center에 텍스트필드, east에 보내기 버튼
		c.add(new JScrollPane(ta), BorderLayout.NORTH);	// 텍스트에리어 ta를 north에 삽입
		c.add(tf, BorderLayout.CENTER);					// 텍스트필드 tf를 center에 삽입
		JButton sendbtn = new JButton("send");				// ===== 버튼 생성 =====
		sendbtn.addActionListener(new SendActionListener());	// 버튼 기능 삽입
		c.add(sendbtn, BorderLayout.EAST);					// ===== 여기까지 버튼 =====
		JButton closebtn = new JButton("close");
		
		
		
		tf.addActionListener(new ActionListener() {		// 엔터키를 입력했을 때의 기능
			@Override									//  ** 버튼 기능과 동일 **
			public void actionPerformed(ActionEvent e) {
				String inputMessage = tf.getText();				// 입력받은 문자열을 tf에 삽입
				ta.append("클라이언트 : " + inputMessage + "\n");	// ta에 "서버 : 문자열"을 삽입
				System.out.println(inputMessage);				// 콘솔에서 확인하는 부분
				client.wm.send(inputMessage);					// server에게 문자열을 전탈
				tf.setText("");									// 위 과정을 모두 마친 후 tf는 초기화
			}
		});
		setSize(500,520);	
		setVisible(true);
		client.connect();										// GUI를 먼저 실행한 다음 연결해야 상대방과 연결되기 전에도 GUI가 화면에 나온다.
	}
	private class SendActionListener implements ActionListener{	// ** 버튼 기능 ** 위 엔터키와 동일한 기능
		public void actionPerformed(ActionEvent e) {
			JButton b = (JButton)e.getSource();
			String inputMessage = tf.getText();
			ta.append("클라이언트 : " + inputMessage + "\n");
			System.out.println(inputMessage);
			tf.setText("");
		}
	}
	private class CloseActionListener implements ActionListener{
		public void actionPerformed(ActionEvent e) {
			JButton b = (JButton)e.getSource();
			String inputMessage = tf.getText();
			ta.append("클라이언트 : " + inputMessage + "\n");
			System.out.println(inputMessage);
			tf.setText("");
		}
	}
	
	public void appendMessage(String m) {				// 상대방의 메세지를 받은 다음 ta에 삽입하는 메소드
		ta.append("서버 : " + m + "\n");
	}
	
	public static void main(String[] args) {
		new ClientGUI();
	}
}

/**************** GUI 부분 끝 *******************/
/**************** 연결 부분 시작 *******************/

class Client {
	public creadMessage rm = null;			// 받아오는 스레드
	public cwriteMessage wm = null;			// 보내는 스레드
	private ClientGUI gui;		
	public void setGUI(ClientGUI g) {		// GUI setter
		this.gui = g;
	}
	class creadMessage extends Thread {		// 서버에게서 메세지를 받아오는 스레드
		BufferedReader in = null;
		String m;							// 받아오는 메세지
		Socket s;							// 연결하는 소켓
		public creadMessage(Socket s) {		// 생성자
			this.s = s;
		}
		@Override
		public void run() {
			try {
				in = new BufferedReader(new InputStreamReader(s.getInputStream()));
				while(true) {
					m = in.readLine();						// 서버가 넘긴 메세지를 m에 저장
					gui.appendMessage(m);					// 메세지를 받은 다음 클라이언트의 ta에 "서버 : m"을 삽입
					if(m.equalsIgnoreCase("bye")) {			// 상대방이 "bye"를 입력해서 대화를 종료하면
						gui.ta.append("=====상대방이 대화를 종료했습니다.=====");	// 본인의 GUI의 ta에 "=====상대방이 대화를 종료했습니다.=====" 삽입
						rm.stop();							// 스레드 종료
						wm.stop();							// 스레드 종료
						break;
					}
					System.out.println("서버 메세지 >>" + m); 	// 콘솔에서 확인하는 부분
				}
			}catch(IOException e) {
				System.out.println(e.getMessage());
				return;
			}
		}
	}

	class cwriteMessage extends Thread{				// 서버에세 메세지를 보내는 스레드
		BufferedWriter out = null;
		Socket s;									// 연결하는 소켓
		public cwriteMessage(Socket s) {			// 생성자
			this.s = s;
		}
		@Override
		public void run() {
			try {
				out = new BufferedWriter(new OutputStreamWriter(s.getOutputStream()));
				while(true) {}						// 스레드가 멈치지 않도록 계속 반복해준다.
			}catch(IOException e) {
				System.out.println(e.getMessage());
				return;
			}
		}
		public void send(String message) {							// 실제로 메세지를 보내주는 메소드
			try {
				out.write(message + "\n");							// 키보드에서 읽은 문자열 전송
				if(message.equalsIgnoreCase("bye")) {				// 본인이 "bye"를 입력해 대화를 종료하면
					gui.appendMessage("\n=====대화를 종료합니다.=====");	// 본인의 GUI의 ta에 "=====대화를 종료합니다.=====" 삽입
				}
				out.flush();										// out 스트림버퍼에 있는 모든 문자열전송
			}catch(IOException e) {
				System.out.println(e.getMessage());
				return;
			}
		}
	}

	public void connect() {
		Socket socket = null;							// 통신 소켓
		try {
			socket = new Socket("localhost", 9999);		// 클라이언트 소켓 생성, 서버에 연결
			System.out.println("연결됨");
			rm = new creadMessage(socket);				// 받아오는 스레드 객체 생성
			wm = new cwriteMessage(socket);				// 보내는 스레드 객체 생성
			rm.start();									// 받아오는 스레드 시작
			wm.start();									// 보내는 스레드 시작
			while(rm.isAlive() && wm.isAlive()) {}		// 둘중 하나가 끝날 때까지 반복
														// 반복을 안해주면 finally문에 있는socket.close()때문에 소켓이 바로 닫힌다.
		}
		catch(IOException e) {
			System.out.println(e.getMessage());
		}
		finally {
			try {
				if(socket != null)					// 통신용 소켓 닫기
					socket.close();					// 서버 소켓 닫기
			}
			catch(IOException e) {
				System.out.println("서버와 채팅 중 오류가 발생했습니다.");
			}
		}
	}
}

/**************** 연결 부분 끝 *******************/