import java.util.Random;
import javax.swing.JLabel;

class FishMove extends Thread {
	JLabel f;
	public FishMove(JLabel f) { this.f = f; }
	
	@Override
	public void run() {
		while(true) {
			Random r = new Random();
			int rn = r.nextInt()%4;		// ��, �Ʒ�, ����, ������ ������ ������ ���Ѵ�.
			try {
				Thread.sleep(250);		// 250ms�� �ѹ��� ������
			}
			catch(InterruptedException e) { 
				System.out.println("������ ����");	// Ȯ�κ�
				f.setText("");			// ���ͷ�Ʈ�� �ɸ��� ������� JLabel�� ������ ���ش�.
				break;
			}
			switch(rn) {
			case 0:		// ���� ������
				if(f.getY() - 20 >= 0)		// ������ ��� ������ ����� ������ ����
					f.setLocation(f.getX(), f.getY() - 20);
				break;
			case 1:		// �Ʒ��� ������
				if(f.getY() + 20 < 400)		// ������ ��� ������ ����� ������ ����
					f.setLocation(f.getX(), f.getY() + 20);
				break;
			case 2:		// �������� ������
				if(f.getX() - 20 >= 0)		// ������ ��� ������ ����� ������ ����
					f.setLocation(f.getX() - 20, f.getY());
				break;
			case 3:		// ���������� ������
				if(f.getX() + 20 < 400)		// ������ ��� ������ ����� ������ ����
					f.setLocation(f.getX() + 20, f.getY());
				break;
			}
		}
		return;
	}
}

