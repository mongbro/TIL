import java.awt.*;
import javax.swing.*;

public class BNF extends JFrame {
	JLabel b = new JLabel("B");		// GUI에 표시될 곰
	JLabel f = new JLabel("@");		// GUI에 표시될 물고기
	public BNF() {
		Thread fishthread;			// 물고기가 랜덤으로 움직이는 스레드
		setTitle("Bear And Fish Game");
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		Container mainC = getContentPane();
		mainC.setLayout(null);
		JLabel finish = new JLabel("Bear가 Fish를 먹었습니다~!");	// 곰이 물고기를 잡았을때 출력할 라벨
		finish.setLocation(100, 50);
		mainC.add(finish);
		finish.setVisible(false);								// 시작할때 바로 잡힐수 없으므로 시작할때는 보이지 않도록 설정
		finish.setSize(200,30);
		
		b.setLocation(0,0);			// 곰 초기 위치
		f.setLocation(200,200);		// 물고기 초기 위치
		fishthread = new Thread(new FishMove(f));
		fishthread.start();			// 물고기 움직임 스레드 시작
		
		mainC.addKeyListener(new ActionListener(b, f, finish, mainC, fishthread));
									// 곰이 움직이는 이벤트에서 물고기를 잡았을 때 동작도 제어할 것이므로 container와 thread도 넘겨준다.
		
		b.setSize(30,30);
		f.setSize(30,30);
		mainC.add(b);
		mainC.add(f);
		
		setSize(430,460);		
		setVisible(true);		
		mainC.requestFocus();
	}

	public static void main(String[] args) {
		new BNF();
	}
}
