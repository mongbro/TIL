import java.awt.Container;
import java.awt.event.KeyAdapter;
import java.awt.event.KeyEvent;

import javax.swing.JLabel;

class ActionListener extends KeyAdapter {
	JLabel b, f, finish;
	Container c;
	Thread th;
	public ActionListener(JLabel b, JLabel f, JLabel finish, Container c, Thread th) {
		this.b = b;		// BNF에서 사용하는 곰
		this.f = f;		// BNF에서 사용하는 물고기
		this.finish = finish;
		this.c = c;		// BNF에서 사용하는 컨테이너
		this.th = th;	// BNF에서 사용하는 물고기를 움직이는 스레드
	}
	public void keyPressed(KeyEvent e) {
		int keyCode = e.getKeyCode(); 	// 입력된 키코드
		switch(keyCode) { 
		case KeyEvent.VK_UP:
			if(b.getY() - 20 >= 0)		// 현재 곰 위치에서 20픽셀을 위로 움직인 결과 지정범위에서 벗어나지 않을때만 실행
				b.setLocation(b.getX(), b.getY() - 20);
			break;
		case KeyEvent.VK_DOWN:
			if(b.getY() + 20 <= 400)	// 현재 곰 위치에서 20픽셀을 아래로 움직인 결과 지정범위에서 벗어나지 않을때만 실행
				b.setLocation(b.getX(), b.getY() + 20);
			break;
		case KeyEvent.VK_LEFT:
			if(b.getX() - 20 >= 0)		// 현재 곰 위치에서 20픽셀을 왼쪽로 움직인 결과 지정범위에서 벗어나지 않을때만 실행
				b.setLocation(b.getX() - 20, b.getY());
			break;
		case KeyEvent.VK_RIGHT:
			if(b.getX() + 20 <= 400)	// 현재 곰 위치에서 20픽셀을 오른쪽로 움직인 결과 지정범위에서 벗어나지 않을때만 실행
				b.setLocation(b.getX() + 20, b.getY());
			break;
		}
		System.out.println("b : " + b.getLocation());	// 곰이 움직인 직후의 곰의 위치 확인부
		System.out.println("f : " + f.getLocation());	// 곰이 움직인 직후의 물고기의 위치 확인부
		if(b.getLocation().equals(f.getLocation())) {	// 곰과 물고기가 같은 위치에 있을때 즉 곰이 물고기를 잡았을때 실행
			th.interrupt();								// 물고기가 움직이는 스레드에 인터럽트
			finish.setVisible(true);					// 곰이 물고기를 잡았을때 finish라벨 보이도록 설정
		}
	}
}