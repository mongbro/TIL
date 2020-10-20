
import java.io.DataInputStream;
import java.io.DataOutputStream;
import java.io.IOException;
import java.net.Socket;

public class ClientBackground {

	private Socket socket;
	private DataInputStream in; //메세지 입력 역할
	private DataOutputStream out; //메세지 출력 역할
	private ClientGUI gui;
	private String msg;
	
	public final void setGui(ClientGUI gui) {
		this.gui = gui;
	}

	public void connet() {
		try {
			socket = new Socket("127.0.0.1",7777);
			System.out.println("서버 연결성공!");
			
			out = new DataOutputStream(socket.getOutputStream()); //서버와의 통로
			in = new DataInputStream(socket.getInputStream());  //서버와의 통로
			
			while(true) {
				msg = in.readUTF();
				gui.appendMsg(msg);
				if(msg.equals("bye")) {
					out.writeUTF(msg + "\n");
					out.flush();
					break; //사용자가 "bye"를 입력한 경우 서버로 전송 후 실행 종료.
				}
			}
			
		}catch (Exception e) {
			System.out.println(e.getMessage());
		}
	}
	
	public static void main(String[] args) {
		ClientBackground clientBackground = new ClientBackground();
		clientBackground.connet();
	}

	public void sendMessage(String msg2) {
		try {
			out.writeUTF(msg2);
		} catch (IOException e) {
			System.out.println(e.getMessage());
		}
		
	}
}
