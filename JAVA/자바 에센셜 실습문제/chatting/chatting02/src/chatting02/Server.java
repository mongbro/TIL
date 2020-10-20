package chatting02;

import java.io.*;
import java.net.*;
import java.util.*;
import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
import javax.swing.JTextArea;
import javax.swing.JTextField;

//===================여기부터 GUI===================

public class Server extends JFrame{
	private JTextField tf = new JTextField(25);
	private JTextArea ta = new JTextArea(40, 25);
	private Server1 s = new Server1();
	
	public Server() {
		setTitle("서버 채팅 창");
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		Container c = getContentPane();
		c.setLayout(new FlowLayout());
		c.add(new JScrollPane(ta));
		c.add(tf);
		s.setGUI(this);
		s.run();
		
		tf.addActionListener(new ActionListener() {
			
			@Override
			public void actionPerformed(ActionEvent e) {
				String sendMessage = tf.getText() + "\n";
				ta.append("서버 : " + sendMessage);
				tf.setText("");
			}
		});
		setSize(400, 850);
		setVisible(true);
	}
	public void addMessage(String m) {
		ta.append("클라이언트 : " + m);
	}
	public static void main(String[] args) {
		new Server();
	}
}

//===================여기부터 내부===================

class Server1 {
	
	private Server gui;
	
	public void setGUI(Server g) {
		this.gui = g;
	}
	
	public void run() {
		BufferedReader in = null;
		BufferedWriter out = null;
		ServerSocket listener = null;
		Socket socket = null;
		Scanner sc = new Scanner(System.in);
		
		try {
			listener = new ServerSocket(9999);
			System.out.println("연결을 기다리는중");
			socket = listener.accept();
			System.out.println("클라이언트로부터 연결 완료");
			in = new BufferedReader(new InputStreamReader(socket.getInputStream()));
			out = new BufferedWriter(new OutputStreamWriter(socket.getOutputStream()));
			while(true) {
				String inputMessage = in.readLine();
				gui.addMessage(inputMessage);
				if(inputMessage.equalsIgnoreCase("bye")) {
					System.out.println("연결 종료");
					break;
				}
				System.out.println(" 클라이언트 : " + inputMessage);
				System.out.print("보내기 >> ");
				String outputMessage = sc.nextLine();
				out.write(outputMessage + "\n");
				out.flush();
			}
		}
		catch(IOException e) {
			System.out.println(e.getMessage());
		}
		finally {
			try {
				sc.close();
				socket.close();
				listener.close();
			}
			catch(IOException e) {
				System.out.println("채팅중 오류 발생");
			}
		}
	}
}
