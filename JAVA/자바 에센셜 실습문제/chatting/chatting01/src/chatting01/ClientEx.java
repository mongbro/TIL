package chatting01;

import java.io.*;
import java.net.*;
import java.util.*;

public class ClientEx {
	public static void main(String[] args) {
		BufferedReader in = null;
		BufferedWriter out = null;
		Socket socket = null;
		Scanner sc = new Scanner(System.in);
		try {
			socket = new Socket("localhost", 9999);					// 클라이언트 소켓 생성, 서버에 연결
			in = new BufferedReader(new InputStreamReader(socket.getInputStream()));
			out = new BufferedWriter(new OutputStreamWriter(socket.getOutputStream()));
			while(true) {
				System.out.print("보내기>> ");						// 프롬프트
				String outputMessage = sc.nextLine();				// 키보드에서 한 행 읽기
				if(outputMessage.equalsIgnoreCase("bye")) {
					out.write(outputMessage + "\n");				// "bye" 문자열 전송
					out.flush();
					break;
				}
				out.write(outputMessage + "\n");
				out.flush();

				String inputMessage = in.readLine();
				System.out.println("서버 : " + inputMessage);
			}
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
}
