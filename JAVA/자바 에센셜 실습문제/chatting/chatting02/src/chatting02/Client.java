package chatting02;

import java.io.*;
import java.net.*;
import java.util.*;
import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

//===================여기부터 GUI===================

class ClientGUI extends JFrame{
	private JTextField tf = new JTextField(25);
	private JTextArea ta = new JTextArea(40, 25);
	
	public ClientGUI() {
		setTitle("클라이언트 채팅 창");
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		Container c = getContentPane();
		c.setLayout(new FlowLayout());
		c.add(new JScrollPane(ta));
		c.add(tf);
		
		tf.addActionListener(new ActionListener() {
			
			@Override
			public void actionPerformed(ActionEvent e) {
				String sendMessage = tf.getText() + "\n";
				ta.append("클라이언트" + sendMessage);
				System.out.println(sendMessage);
				tf.setText("");
			}
		});
		setSize(600,450);
		setVisible(true);
	}
	public void addMessage(String m) {
		ta.append("서버 : " + m);
	}
}

//===================여기부터 내부===================

public class Client {
	private ClientGUI gui;
	
	public void setGUI(ClientGUI g) {
		this.gui = g;
	}
	
	public void run() {
		BufferedReader in = null;
		BufferedWriter out = null;
		Socket socket = null;
		Scanner sc = new Scanner(System.in);
		setGUI(gui);
		
		try {
			socket = new Socket("localhost", 9999);
			System.out.println("서버에 연결 완료");
			in = new BufferedReader(new InputStreamReader(socket.getInputStream()));
			out = new BufferedWriter(new OutputStreamWriter(socket.getOutputStream()));
			while(true) {
				System.out.print("보내기>> ");
				String outputMessage = sc.nextLine();
				if(outputMessage.equalsIgnoreCase("bye")) {
					out.write(outputMessage + "\n");
					out.flush();
					break;
				}
				out.write(outputMessage + "\n");
				out.flush();
				String inputMessage = in.readLine();
				System.out.println(" 서버 : " + inputMessage);
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
				System.out.println("채팅중 오류 발생");
			}
		}
	}
	public static void main(String[] args) {
		Client c = new Client();
		c.run();
	}
}
