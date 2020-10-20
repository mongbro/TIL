package chatting01;

import java.io.*;
import java.net.*;
import java.util.*;


public class ClientEx {
	
	public void run() {
		BufferedReader in = null;
		BufferedWriter out = null;
		Socket socket = null;
		readMessage rm = null;
		writeMessage wm = null;
		Scanner sc = new Scanner(System.in);
		try {
			socket = new Socket("localhost", 9999);					// Ŭ���̾�Ʈ ���� ����, ������ ����
			rm= new readMessage(socket);
			wm= new writeMessage(socket);
			rm.start();
			wm.start();
			while(rm.isAlive() && wm.isAlive()) {}
		}
		catch(IOException e) {
			System.out.println(e.getMessage());
		}
		finally {
			try {
				sc.close();
				if(socket != null)
					socket.close();
			}
			catch(IOException e) {
				System.out.println("������ ä�� �� ������ �߻��߽��ϴ�.");
			}
		}
		
	}
	public static void main(String[] args) {
		ClientEx c = new ClientEx();
		c.run();
	}
}
class readMessage extends Thread{
	BufferedReader in = null;
	String msg;
	Socket s;
	public readMessage(Socket s) {
		this.s=s;
	}
	
	@Override
	public void run() {
		try {
			in = new BufferedReader(new InputStreamReader(s.getInputStream()));
			
			while(true) {
			msg=in.readLine();
			System.out.println();
			System.out.println("���� �޼��� >>"+msg);
			}
		}catch(IOException e) {
			e.printStackTrace();
			return;
		}
	}
}
class writeMessage extends Thread{
	BufferedWriter out = null;
	String msg;
	Socket s;
	public writeMessage(Socket s) {
		this.s = s;
	}
	@Override
	public void run() {
		Scanner sc = new Scanner(System.in);
		try {
			out = new BufferedWriter(new OutputStreamWriter(s.getOutputStream()));
			
			while(true) {
				System.out.print("������ >> ");				// ������Ʈ
				String outputMessage = sc.nextLine();		// Ű���忡�� �� �� �б�
				out.write(outputMessage + "\n");			// Ű���忡�� ���� ���ڿ� ����
				out.flush();								// out ��Ʈ�� ���ۿ� �ִ� ��� ���ڿ� ����				
			}
		}catch(IOException e) {
			e.printStackTrace();
			return;
		}
	}
}