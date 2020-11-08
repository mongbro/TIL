import java.awt.*;
import java.awt.event.*;
import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.net.Socket;
import javax.swing.*;

/**************** GUI �κ� ���� *******************/

public class ClientGUI extends JFrame {
   private JTextField tf = new JTextField(25);		// �Է��ϴ� �޼����� �����ִ� �ؽ�Ʈ�ʵ�
   public JTextArea ta = new JTextArea(25,25);		// ���� �޼����� �����ִ� �ؽ�Ʈ������
   private Client client = new Client();            // GUI�� ������ �� ����
   
   public ClientGUI() {
	  ta.setEditable(false);						// ta �� ������ Ŭ���̾�Ʈ���� ���� �޼��� �κ��� ������ �� ������ ���ش�.
      client.setGUI(this);							// GUI setter
      setTitle("Ŭ���̾�Ʈ ä�� â");
      setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
      Container c = getContentPane();
      c.setLayout(new BorderLayout());						// �������̾ƿ����� ���� north�� �ؽ�Ʈ������, center�� �ؽ�Ʈ�ʵ�, east�� ������ ��ư
      c.add(new JScrollPane(ta), BorderLayout.NORTH);   	// �ؽ�Ʈ������ ta�� north�� ����
      c.add(tf, BorderLayout.WEST); 						// �ؽ�Ʈ�ʵ� tf�� center�� ����
      JButton sendbtn = new JButton("send");            	// ===== ������ ��ư ���� =====
      sendbtn.addActionListener(new SendActionListener());	// ������ ��ư ��� ����
      c.add(sendbtn, BorderLayout.CENTER);               	// ===== ������� ������ ��ư =====
      JButton closebtn = new JButton("close");				// ===== �ݱ� ��ư ���� =====
      closebtn.addActionListener(new CloseActionListener());// �ݱ� ��ư ��� ����
      c.add(closebtn, BorderLayout.EAST);					// ===== ������� �ݱ� ��ư =====
      
      tf.addActionListener(new ActionListener() {			// ����Ű�� �Է����� ���� ���
         @Override                           				//  ** ��ư ��ɰ� ���� **
         public void actionPerformed(ActionEvent e) {
            String inputMessage = tf.getText();     		// �Է¹��� ���ڿ��� tf�� ����
            if(!(inputMessage.equalsIgnoreCase("")))		// �� ĭ�� ������ �������� �ʵ��� �Ѵ�.
            ta.append("Ŭ���̾�Ʈ : " + inputMessage + "\n");	// ta�� "���� : ���ڿ�"�� ����
            System.out.println(inputMessage);        		// �ֿܼ��� Ȯ���ϴ� �κ�
            client.wm.send(inputMessage);            		// server���� ���ڿ��� ��Ż
            tf.setText("");                           		// �� ������ ��� ��ģ �� tf�� �ʱ�ȭ
         }
      });
      setSize(500,520);   
      setVisible(true);
      client.connect();                              		// GUI�� ���� ������ ���� �����ؾ� ����� ����Ǳ� ������ GUI�� ȭ�鿡 ���´�.
   }
   private class SendActionListener implements ActionListener{   // ** ������ ��ư ��� ** �� ����Ű�� ������ ���
      public void actionPerformed(ActionEvent e) {
         JButton b = (JButton)e.getSource();
         String inputMessage = tf.getText();
         if(!(inputMessage.equalsIgnoreCase("")))
         ta.append("Ŭ���̾�Ʈ : " + inputMessage + "\n");
         System.out.println(inputMessage);
         client.wm.send(inputMessage);
         tf.setText("");
      }
   }
   private class CloseActionListener implements ActionListener{	// ** �ݱ� ��ư ���**
      public void actionPerformed(ActionEvent e) {
         JButton b = (JButton)e.getSource();
         client.wm.send("bye");               					// server���� "bye "���ڿ��� �����ؼ� �ݱ� ��� ����
      }
   }
   
   public void appendMessage(String m) {            // ������ �޼����� ���� ���� ta�� �����ϴ� �޼ҵ�
      ta.append("���� : " + m + "\n");
   }
   
   public static void main(String[] args) {
      new ClientGUI();
   }
}

/**************** GUI �κ� �� *******************/
/**************** ���� �κ� ���� *******************/

class Client {
   public creadMessage rm = null; 			// �޾ƿ��� ������
   public cwriteMessage wm = null; 			// ������ ������
   private ClientGUI gui;      
   public void setGUI(ClientGUI g) {  		// GUI setter
      this.gui = g;
   }
   class creadMessage extends Thread {      // �������Լ� �޼����� �޾ƿ��� ������
      BufferedReader in = null;
      String m;               				// �޾ƿ��� �޼���
      Socket s;                     		// �����ϴ� ����
      public creadMessage(Socket s) { 		// ������
         this.s = s;
      }
      @Override
      public void run() {
         try {
            in = new BufferedReader(new InputStreamReader(s.getInputStream()));
            while(true) {
               m = in.readLine();                  		// ������ �ѱ� �޼����� m�� ����
               if(!(m.equalsIgnoreCase("")))			// �� ĭ�� ���� �� ������� �ʵ��� �Ѵ�.
               gui.appendMessage(m);               		// �޼����� ���� ���� Ŭ���̾�Ʈ�� ta�� "���� : m"�� ����
               System.out.println("���� �޼��� >>" + m);	// �ܼ� ��� Ȯ��
               if(m.equalsIgnoreCase("bye")) {			// ������ "bye"�� �Է��ؼ� ��ȭ�� �����ϸ�
            	   	gui.ta.append("=====������ ��ȭ�� �����߽��ϴ�.=====\n");   // ������ GUI�� ta�� "=====������ ��ȭ�� �����߽��ϴ�.=====" ����// ������ ����
                   	System.exit(0);			// ���α׷� ����;
               }
               System.out.println("���� �޼��� >>" + m);    // �ֿܼ��� Ȯ���ϴ� �κ�
            }
            
         }catch(IOException e) {
            System.out.println(e.getMessage());
            return;
         }
      }
   }

   class cwriteMessage extends Thread{  		// �������� �޼����� ������ ������
      BufferedWriter out = null;
      Socket s;                           		// �����ϴ� ����
      public cwriteMessage(Socket s) {    		// ������
         this.s = s;
      }
      @Override
      public void run() {
         try {
            out = new BufferedWriter(new OutputStreamWriter(s.getOutputStream()));
            while(true) {}                  // �����尡 ��ġ�� �ʵ��� ��� �ݺ����ش�.
         }catch(IOException e) {
            System.out.println(e.getMessage());
            return;
         }
      }
      public void send(String message) {     			// ������ �޼����� �����ִ� �޼ҵ�
         try {
            out.write(message + "\n");     				// Ű���忡�� ���� ���ڿ� ����
            if(message.equalsIgnoreCase("bye")) { 		// ������ "bye"�� �Է��� ��ȭ�� �����ϸ�
               out.close();
               gui.appendMessage("\n=====��ȭ�� �����մϴ�.=====\n");   // ������ GUI�� ta�� "=====��ȭ�� �����մϴ�.=====" ����
              	System.exit(0);					// ���α׷� ���� 
            }
            out.flush();                              // out ��Ʈ�����ۿ� �ִ� ��� ���ڿ�����
         }catch(IOException e) {
            System.out.println(e.getMessage());
            return;
         }
      }
   }

   public void connect() {
      Socket socket = null;       				// ��� ����
      try {
         socket = new Socket("localhost", 9999);// Ŭ���̾�Ʈ ���� ����, ������ ����
         System.out.println("�����");
         rm = new creadMessage(socket);  		// �޾ƿ��� ������ ��ü ����
         wm = new cwriteMessage(socket); 		// ������ ������ ��ü ����
         rm.start();                 			// �޾ƿ��� ������ ����
         wm.start();               				// ������ ������ ����
         while(rm.isAlive() && wm.isAlive()) {}	// ���� �ϳ��� ���� ������ �ݺ�
                                          		// �ݺ��� �����ָ� finally���� �ִ�socket.close()������ ������ �ٷ� ������.
      }
      catch(IOException e) {
         System.out.println(e.getMessage());
      }
      finally {
         try {
            if(socket != null)
               socket.close();               // ��ſ� ���� �ݱ�
         }
         catch(IOException e) {
            System.out.println("������ ä�� �� ������ �߻��߽��ϴ�.");
         }
      }
   }
}

/**************** ���� �κ� �� *******************/
