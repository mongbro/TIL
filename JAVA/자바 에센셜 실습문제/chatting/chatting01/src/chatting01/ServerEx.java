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
			listener = new ServerSocket(9999);				// 서버 소켓 생성
			System.out.println("연결을 기다리고 있습니다...");
			socket = listener.accept();						// 클라이언트로부터 연결 요청 대기
			System.out.println("연결되었습니다.");
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
				socket.close();							// 통신용 소켓 닫기
				listener.close();						// 서버 소켓 닫기
			}
			catch(IOException e) {
				System.out.println("클라이언트와 채팅 중 오류가 발생했습니다.");
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
			System.out.println("클라이언트 메세지 >>"+msg);
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