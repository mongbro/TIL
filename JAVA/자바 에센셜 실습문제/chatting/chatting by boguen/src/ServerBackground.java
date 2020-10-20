
import java.io.DataInputStream;
import java.io.DataOutput;
import java.io.DataOutputStream;
import java.io.IOException;
import java.net.ServerSocket;
import java.net.Socket;
import java.util.Scanner;

public class ServerBackground {
	
	Scanner scanner = new Scanner(System.in);
	private ServerSocket serverSocket;
	private Socket socket; //서버의 '귀'같은 역할 
	private DataInputStream in; //메세지 입력 역할
	private DataOutputStream out; //메세지 출력 역할
	private ServerGUI gui;
	private String msg;

	public final void setGui(ServerGUI gui) {
		this.gui = gui;
	}

	public void setting() {
		try {
			serverSocket = new ServerSocket(7777); // '7777'포트를 이용한 서버 열음
			System.out.println("서버 대기중...");
			socket = serverSocket.accept(); // 클라이언트로부터 접속 대기중.
			System.out.println(socket.getInetAddress() + "에서 접속했습니다.");
			
			out = new DataOutputStream(socket.getOutputStream()); //서버와의 통로
			in = new DataInputStream(socket.getInputStream());   //서버와의 통로
			
			while(true) {
				msg = in.readUTF();
				gui.appendMsg(msg);
				if(msg.equals("bye")) {
					out.writeUTF(msg + "\n");
					out.flush();
					break; //사용자가 "bye"를 입력한 경우 서버로 전송 후 실행 종료.
				}
			}
			
			
		} catch (IOException e) {  // 입출력 예외 나올수 있음.
			System.out.println(e.getMessage());
		}
	}
	
	public static void main(String [] args) {
		ServerBackground serverBackground = new ServerBackground();
		serverBackground.setting();
	}

	public void sendMessage(String msg) {  //메세지 전송 부분.
		try {
			out.writeUTF(msg);
		}catch (IOException e) {
			System.out.println(e.getMessage());
		}
		
	}
}
