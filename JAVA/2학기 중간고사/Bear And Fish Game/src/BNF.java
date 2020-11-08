import java.awt.*;
import javax.swing.*;

public class BNF extends JFrame {
	JLabel b = new JLabel("B");		// GUI�� ǥ�õ� ��
	JLabel f = new JLabel("@");		// GUI�� ǥ�õ� �����
	public BNF() {
		Thread fishthread;			// ����Ⱑ �������� �����̴� ������
		setTitle("Bear And Fish Game");
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		Container mainC = getContentPane();
		mainC.setLayout(null);
		JLabel finish = new JLabel("Bear�� Fish�� �Ծ����ϴ�~!");	// ���� ����⸦ ������� ����� ��
		finish.setLocation(100, 50);
		mainC.add(finish);
		finish.setVisible(false);								// �����Ҷ� �ٷ� ������ �����Ƿ� �����Ҷ��� ������ �ʵ��� ����
		finish.setSize(200,30);
		
		b.setLocation(0,0);			// �� �ʱ� ��ġ
		f.setLocation(200,200);		// ����� �ʱ� ��ġ
		fishthread = new Thread(new FishMove(f));
		fishthread.start();			// ����� ������ ������ ����
		
		mainC.addKeyListener(new ActionListener(b, f, finish, mainC, fishthread));
									// ���� �����̴� �̺�Ʈ���� ����⸦ ����� �� ���۵� ������ ���̹Ƿ� container�� thread�� �Ѱ��ش�.
		
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
