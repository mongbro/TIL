import java.util.Random;
import javax.swing.JLabel;

class FishMove extends Thread {
	JLabel f;
	public FishMove(JLabel f) { this.f = f; }
	
	@Override
	public void run() {
		while(true) {
			Random r = new Random();
			int rn = r.nextInt()%4;		// 위, 아래, 왼쪽, 오른쪽 방향을 난수로 정한다.
			try {
				Thread.sleep(250);		// 250ms에 한번씩 움직임
			}
			catch(InterruptedException e) { 
				System.out.println("스레드 종료");	// 확인부
				f.setText("");			// 인터럽트가 걸리면 물고기의 JLabel의 내용을 없앤다.
				break;
			}
			switch(rn) {
			case 0:		// 위로 움직임
				if(f.getY() - 20 >= 0)		// 움직인 결과 범위를 벗어나지 않으면 실행
					f.setLocation(f.getX(), f.getY() - 20);
				break;
			case 1:		// 아래로 움직임
				if(f.getY() + 20 < 400)		// 움직인 결과 범위를 벗어나지 않으면 실행
					f.setLocation(f.getX(), f.getY() + 20);
				break;
			case 2:		// 왼쪽으로 움직임
				if(f.getX() - 20 >= 0)		// 움직인 결과 범위를 벗어나지 않으면 실행
					f.setLocation(f.getX() - 20, f.getY());
				break;
			case 3:		// 오른쪽으로 움직임
				if(f.getX() + 20 < 400)		// 움직인 결과 범위를 벗어나지 않으면 실행
					f.setLocation(f.getX() + 20, f.getY());
				break;
			}
		}
		return;
	}
}

