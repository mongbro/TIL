package chatting01;

import java.io.*;
import java.net.*;
import java.util.*;

public class ServerEx {
	public static void main(String[] args) {
		BufferedReader in = null;
		BufferedWriter out = null;
		ServerSocket listener = null;
		Socket socket = null;
		Scanner sc = new Scanner(System.in);
		try {
			listener = new ServerSocket(9999);				// ���� ���� ����
			System.out.println("������ ��ٸ��� �ֽ��ϴ�...");
			socket = listener.accept();						// Ŭ���̾�Ʈ�κ��� ���� ��û ���
			System.out.println("����Ǿ����ϴ�.");
			in = new BufferedReader(new InputStreamReader(socket.getInputStream()));
			out = new BufferedWriter(new OutputStreamWriter(socket.getOutputStream()));
			while(true) {
				String inputMessage = in.readLine();
				if(inputMessage.equalsIgnoreCase("bye")) {	// Ŭ���̾�Ʈ�κ��� �� �� �б�
					System.out.println("Ŭ���̾�Ʈ���� bye�� ������ ������");
					break;
				}
				System.out.println("Ŭ���̾�Ʈ : " + inputMessage);
				System.out.print("������ >> ");				// ������Ʈ
				String outputMessage = sc.nextLine();		// Ű���忡�� �� �� �б�
				out.write(outputMessage + "\n");			// Ű���忡�� ���� ���ڿ� ����
				out.flush();								// out ��Ʈ�� ���ۿ� �ִ� ��� ���ڿ� ����
				System.out.println("�ù�");
			}
		}
		catch(IOException e) {
			System.out.println(e.getMessage());
		}
		finally {
			try{
				sc.close();								// ��ĳ�� �ݱ�
				socket.close();							// ��ſ� ���� �ݱ�
				listener.close();						// ���� ���� �ݱ�
			}
			catch(IOException e) {
				System.out.println("Ŭ���̾�Ʈ�� ä�� �� ������ �߻��߽��ϴ�.");
			}
		}
	}
}
