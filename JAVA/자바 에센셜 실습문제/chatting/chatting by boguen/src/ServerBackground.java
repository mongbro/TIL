
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
	private Socket socket; //������ '��'���� ���� 
	private DataInputStream in; //�޼��� �Է� ����
	private DataOutputStream out; //�޼��� ��� ����
	private ServerGUI gui;
	private String msg;

	public final void setGui(ServerGUI gui) {
		this.gui = gui;
	}

	public void setting() {
		try {
			serverSocket = new ServerSocket(7777); // '7777'��Ʈ�� �̿��� ���� ����
			System.out.println("���� �����...");
			socket = serverSocket.accept(); // Ŭ���̾�Ʈ�κ��� ���� �����.
			System.out.println(socket.getInetAddress() + "���� �����߽��ϴ�.");
			
			out = new DataOutputStream(socket.getOutputStream()); //�������� ���
			in = new DataInputStream(socket.getInputStream());   //�������� ���
			
			while(true) {
				msg = in.readUTF();
				gui.appendMsg(msg);
				if(msg.equals("bye")) {
					out.writeUTF(msg + "\n");
					out.flush();
					break; //����ڰ� "bye"�� �Է��� ��� ������ ���� �� ���� ����.
				}
			}
			
			
		} catch (IOException e) {  // ����� ���� ���ü� ����.
			System.out.println(e.getMessage());
		}
	}
	
	public static void main(String [] args) {
		ServerBackground serverBackground = new ServerBackground();
		serverBackground.setting();
	}

	public void sendMessage(String msg) {  //�޼��� ���� �κ�.
		try {
			out.writeUTF(msg);
		}catch (IOException e) {
			System.out.println(e.getMessage());
		}
		
	}
}
