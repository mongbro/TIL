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
			socket = new Socket("localhost", 9999);					// 클라이언트 소켓 생성, 서버에 연결
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
				System.out.println("서버와 채팅 중 오류가 발생했습니다.");
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
			System.out.println("서버 메세지 >>"+msg);
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
				System.out.print("보내기 >> ");				// 프롬프트
				String outputMessage = sc.nextLine();		// 키보드에서 한 행 읽기
				out.write(outputMessage + "\n");			// 키보드에서 읽은 문자열 전송
				out.flush();								// out 스트림 버퍼에 있는 모든 문자열 전송				
			}
		}catch(IOException e) {
			e.printStackTrace();
			return;
		}
	}
}