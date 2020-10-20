package chatting01;

import java.io.*;
import java.net.*;
import java.util.*;

public class ServerEx {
	private readMessageS rm = null;
	private writeMessageS wm = null;
	
	public void run() {
		BufferedReader in = null;
		BufferedWriter out = null;
		ServerSocket listener = null;
		Socket socket = null;
		try {
			listener = new ServerSocket(9999);				// ���� ���� ����
			System.out.println("������ ��ٸ��� �ֽ��ϴ�...");
			socket = listener.accept();						// Ŭ���̾�Ʈ�κ��� ���� ��û ���
			System.out.println("����Ǿ����ϴ�.");
			rm= new readMessageS(socket);
			wm = new writeMessageS(socket);
			rm.start();
			wm.start();
			while(rm.isAlive()&&wm.isAlive()) {}
		}
		catch(IOException e) {
			System.out.println(e.getMessage());
		}
		finally {
			try{
				socket.close();							// ��ſ� ���� �ݱ�
				listener.close();						// ���� ���� �ݱ�
			}
			catch(IOException e) {
				System.out.println("Ŭ���̾�Ʈ�� ä�� �� ������ �߻��߽��ϴ�.");
			}
		}
	}
	public static void main(String[] args) {
		ServerEx s = new ServerEx();
		s.run();
	}
}
class readMessageS extends Thread{
	BufferedReader in = null;
	String msg;
	Socket s;
	public readMessageS(Socket s) {
		this.s=s;
	}
	
	@Override
	public void run() {
		try {
			in = new BufferedReader(new InputStreamReader(s.getInputStream()));
			
			while(true) {
			msg=in.readLine();
			System.out.println();
			System.out.println("Ŭ���̾�Ʈ �޼��� >>"+msg);
			}
		}catch(IOException e) {
			e.printStackTrace();
			return;
		}
	}
}
class writeMessageS extends Thread{
	BufferedWriter out = null;
	String msg;
	Socket s;
	public writeMessageS(Socket s) {
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