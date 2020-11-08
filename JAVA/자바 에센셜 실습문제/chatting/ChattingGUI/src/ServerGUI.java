import java.awt.*;
import java.awt.event.*;
import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.net.ServerSocket;
import java.net.Socket;
import javax.swing.*;

/**************** GUI 부분 시작 *******************/

public class ServerGUI extends JFrame {
   private JTextField tf = new JTextField(25);      // 입력하는 메세지를 보여주는 텍스트필드
   public JTextArea ta = new JTextArea(25,25);      // 오고간 메세지를 보여주는 텍스트에리어
   private Server server =  new Server();         	// GUI에 연결해 줄 서버
   
   public ServerGUI() {
		  ta.setEditable(false);						// ta 즉 서버와 클라이언트간에 오간 메세지 부분을 수정할 수 없도록 해준다.
      server.setGUI(this);                     			// GUI setter
      setTitle("서버 채팅 창");
      setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
      Container c = getContentPane();
      c.setLayout(new BorderLayout());            			// 보더레이아웃으로 만들어서 north에 텍스트에리어, center에 텍스트필드, east에 보내기 버튼
      c.add(new JScrollPane(ta), BorderLayout.NORTH);  	 	// 텍스트에리어 ta를 north에 삽입
      c.add(tf, BorderLayout.WEST);               			// 텍스트필드 tf를 center에 삽입
      JButton sendbtn = new JButton("send");            	// ===== 보내기 버튼 생성 =====
      sendbtn.addActionListener(new SendActionListener());  // 보내기버튼 기능 삽입
      c.add(sendbtn, BorderLayout.CENTER);               	// ===== 여기까지 보내기 버튼 =====
      JButton closebtn = new JButton("close");				// ===== 닫기 버튼 생성 =====
      closebtn.addActionListener(new CloseActionListener());// 닫기 버튼 기능 삽입
      c.add(closebtn, BorderLayout.EAST);					// ===== 여기까지 닫기 버튼 =====
      
      
      tf.addActionListener(new ActionListener() {      // 엔터키를 입력했을때의 기능
         @Override        
         public void actionPerformed(ActionEvent e) {   // ** 버튼 기능과 동일 **
            String inputMessage = tf.getText();         // 입력받은 문자열을 tf에 삽입
            if(!(inputMessage.equalsIgnoreCase("")))	// 빈 칸을 보낼때 보내지지 않도록 한다.
            ta.append("서버 : " + inputMessage + "\n");	// ta에 "서버 : 문자열"을 삽입
            System.out.println(inputMessage);         	// 콘솔에서 확인하는 부분
            server.wm.send(inputMessage);            	// client에게 문자열을 전달
            tf.setText("");                        		// 위 과정을 모두 마친 후 tf는 초기화
         }
      });
      setSize(500,520);
      setVisible(true);
      server.connet();                           		// GUI를 먼저 실행한 다음 연결해야 상대방이 연결하기 전에도 GUI가 화면에 나온다
   }
   private class SendActionListener implements ActionListener{   // ** 보내기 버튼 기능 ** 위 엔터키와 동일한 기능
      public void actionPerformed(ActionEvent e) {
         JButton b = (JButton)e.getSource();
         String inputMessage = tf.getText();
         if(!(inputMessage.equalsIgnoreCase("")))
         ta.append("서버 : " + inputMessage + "\n");
         System.out.println(inputMessage);
         server.wm.send(inputMessage);
         tf.setText("");
      }
   }
   private class CloseActionListener implements ActionListener{	// ** 닫기 버튼 기능 **
	      public void actionPerformed(ActionEvent e) {
	         JButton b = (JButton)e.getSource();
	         server.wm.send("bye");               				// client에게 "bye"문자열을 전달해서 닫기 기능을 기동시킨다.
	      }
	   }
   
   public void appendMessage(String m) {            // 상대방의 메세지를 받은 다음 ta에 삽입하는 메소드
      ta.append("클라이언트 : " + m + "\n");
   }
   
   public static void main(String[] args) {
      new ServerGUI();
   }
}

/**************** GUI 부분 끝 *******************/
/**************** 연결 부분 시작 *******************/

class Server{
   public sreadMessage rm = null;      			// 받아오는 스레드
   public swriteMessage wm = null;				// 보내는 스레드
   private ServerGUI gui;
   public void setGUI(ServerGUI g) {			// GUI setter
      this.gui = g;
   }
   class sreadMessage extends Thread{			// 클라이언트에게서 메세지를 받아오는 스레드
      BufferedReader in = null;
      String m;                                 // 받아오는 메세지
      Socket s;                                 // 연결하는 소켓
      public sreadMessage(Socket s) {           // 생성자
         this.s = s;
      }
      
      @Override
      public void run() {
         try {
            in = new BufferedReader(new InputStreamReader(s.getInputStream()));
            while(true) {     
            	m = in.readLine();						// 클라이언트가 넘긴 메세지를 m에 저장
            	if(!(m.equalsIgnoreCase("")))			// 빈 칸이 왔을 때 출력하지 않도록 한다.
            	gui.appendMessage(m);            		// 메세지를 받은 다음 서버의 ta에 "클라이언트 : m"을 삽입
                if(m.equalsIgnoreCase("bye")) {			// 상대방이 "bye"를입력해서 대화를 종료하면
                	in.close();
                   	System.exit(0);						// 프로그램 종료
                	gui.ta.append("=====상대방이 대화를 종료했습니다.=====\n");   // 본인의 GUI의 ta에 "=====상대방이 대화를 종료했습니다.=====" 삽입
                }
                System.out.println("클라이언트 메세지 >>"+m);   // 콘솔에서 확인하는 부분
            }
         }catch(IOException e) {
            System.out.println(e.getMessage());
            return;
         }
      }
   }
   class swriteMessage extends Thread{		// 클라이언트에게 메세지를 보내는 스레드
      BufferedWriter out = null;
      Socket s;								// 연결하는 소켓
      public swriteMessage(Socket s) {		// 생성자
         this.s = s;
      }
      @Override
      public void run() {
         try {
            out = new BufferedWriter(new OutputStreamWriter(s.getOutputStream()));
            while(true) {}                  // 스레드가 멈추지 않도록 계속 반복해준다.
         }catch(IOException e) {
            System.out.println(e.getMessage());
            return;
         }
      }
   
      public void send(String message) {			//   실제로 메세지를 보내주는 메소드
         try {
         out.write(message + "\n");					// 키보드에서 읽은 문자열 전송
         out.flush();								// out 스트림 버퍼에 있는 모든 문자열 전송
         if(message.equalsIgnoreCase("bye")) {		// 본인이 "bye"를 입력해 대화를 종료하면
            out.close();
            gui.appendMessage("\n=====대화를 종료합니다.=====\n");   // 본인 GUI의 ta에 "=====대화를 종료합니다.=====" 삽입
           	System.exit(0);							// 프로그램 종료
         }
      
         }catch(IOException e) {
            System.out.println(e.getMessage());
            return;
         }
      }
   }
   
   public void connet() {                           // 클라이언트와 서버 소켓을 연결하는 메소드
      ServerSocket listener = null;					// 서버 소켓
      Socket socket = null;							// 통신 소켓
      try {
         listener = new ServerSocket(9999);				// 서버 소켓 생성
         System.out.println("연결을 기다리고 있습니다...");	// 콘솔에서 확인하는 부분
         socket = listener.accept();					// 클라이언트로부터 연결 요청 대기
         System.out.println("연결되었습니다.");
         rm = new sreadMessage(socket);         		// 받아오는 스레드 객체 생성
         wm = new swriteMessage(socket);       			// 보내는 스레드 객체 생성
         rm.start();                           			// 받아오는 스레드 시작
         wm.start();                          			// 보내는 스레드 시작
         while(rm.isAlive()&&wm.isAlive()) {}  			// 둘중 하나가 끝날때까지 반복
                                          				// 반복을 안해주면 finally문에 있는 socket.close()때문에 소켓이 바로 닫힌다.
      }
      catch(IOException e) {
         System.out.println(e.getMessage());
      }
      finally {
         try{
            socket.close();       	// 통신용 소켓 닫기
            listener.close();		// 서버 소켓 닫기
         }
         catch(IOException e) {
            System.out.println("클라이언트와 채팅 중 오류가 발생했습니다.");
         }
      }
   }
}

/**************** 연결 부분 끝 *******************/
