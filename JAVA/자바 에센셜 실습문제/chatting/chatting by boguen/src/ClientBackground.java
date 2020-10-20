
import java.io.DataInputStream;
import java.io.DataOutputStream;
import java.io.IOException;
import java.net.Socket;

public class ClientBackground {

	private Socket socket;
	private DataInputStream in; //�޼��� �Է� ����
	private DataOutputStream out; //�޼��� ��� ����
	private ClientGUI gui;
	private String msg;
	
	public final void setGui(ClientGUI gui) {
		this.gui = gui;
	}

	public void connet() {
		try {
			socket = new Socket("127.0.0.1",7777);
			System.out.println("���� ���Ἲ��!");
			
			out = new DataOutputStream(socket.getOutputStream()); //�������� ���
			in = new DataInputStream(socket.getInputStream());  //�������� ���
			
			while(true) {
				msg = in.readUTF();
				gui.appendMsg(msg);
				if(msg.equals("bye")) {
					out.writeUTF(msg + "\n");
					out.flush();
					break; //����ڰ� "bye"�� �Է��� ��� ������ ���� �� ���� ����.
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
