package chatting02;

import java.io.*;
import java.net.*;
import java.util.*;
import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

//===================������� GUI===================

class ClientGUI extends JFrame{
	private JTextField tf = new JTextField(25);
	private JTextArea ta = new JTextArea(40, 25);
	
	public ClientGUI() {
		setTitle("Ŭ���̾�Ʈ ä�� â");
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		Container c = getContentPane();
		c.setLayout(new FlowLayout());
		c.add(new JScrollPane(ta));
		c.add(tf);
		
		tf.addActionListener(new ActionListener() {
			
			@Override
			public void actionPerformed(ActionEvent e) {
				String sendMessage = tf.getText() + "\n";
				ta.append("Ŭ���̾�Ʈ" + sendMessage);
				System.out.println(sendMessage);
				tf.setText("");
			}
		});
		setSize(600,450);
		setVisible(true);
	}
	public void addMessage(String m) {
		ta.append("���� : " + m);
	}
}

//===================������� ����===================

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
			System.out.println("������ ���� �Ϸ�");
			in = new BufferedReader(new InputStreamReader(socket.getInputStream()));
			out = new BufferedWriter(new OutputStreamWriter(socket.getOutputStream()));
			while(true) {
				System.out.print("������>> ");
				String outputMessage = sc.nextLine();
				if(outputMessage.equalsIgnoreCase("bye")) {
					out.write(outputMessage + "\n");
					out.flush();
					break;
				}
				out.write(outputMessage + "\n");
				out.flush();
				String inputMessage = in.readLine();
				System.out.println(" ���� : " + inputMessage);
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
				System.out.println("ä���� ���� �߻�");
			}
		}
	}
	public static void main(String[] args) {
		Client c = new Client();
		c.run();
	}
}
