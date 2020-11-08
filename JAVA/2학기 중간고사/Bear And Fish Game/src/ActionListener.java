import java.awt.Container;
import java.awt.event.KeyAdapter;
import java.awt.event.KeyEvent;

import javax.swing.JLabel;

class ActionListener extends KeyAdapter {
	JLabel b, f, finish;
	Container c;
	Thread th;
	public ActionListener(JLabel b, JLabel f, JLabel finish, Container c, Thread th) {
		this.b = b;		// BNF���� ����ϴ� ��
		this.f = f;		// BNF���� ����ϴ� �����
		this.finish = finish;
		this.c = c;		// BNF���� ����ϴ� �����̳�
		this.th = th;	// BNF���� ����ϴ� ����⸦ �����̴� ������
	}
	public void keyPressed(KeyEvent e) {
		int keyCode = e.getKeyCode(); 	// �Էµ� Ű�ڵ�
		switch(keyCode) { 
		case KeyEvent.VK_UP:
			if(b.getY() - 20 >= 0)		// ���� �� ��ġ���� 20�ȼ��� ���� ������ ��� ������������ ����� �������� ����
				b.setLocation(b.getX(), b.getY() - 20);
			break;
		case KeyEvent.VK_DOWN:
			if(b.getY() + 20 <= 400)	// ���� �� ��ġ���� 20�ȼ��� �Ʒ��� ������ ��� ������������ ����� �������� ����
				b.setLocation(b.getX(), b.getY() + 20);
			break;
		case KeyEvent.VK_LEFT:
			if(b.getX() - 20 >= 0)		// ���� �� ��ġ���� 20�ȼ��� ���ʷ� ������ ��� ������������ ����� �������� ����
				b.setLocation(b.getX() - 20, b.getY());
			break;
		case KeyEvent.VK_RIGHT:
			if(b.getX() + 20 <= 400)	// ���� �� ��ġ���� 20�ȼ��� �����ʷ� ������ ��� ������������ ����� �������� ����
				b.setLocation(b.getX() + 20, b.getY());
			break;
		}
		System.out.println("b : " + b.getLocation());	// ���� ������ ������ ���� ��ġ Ȯ�κ�
		System.out.println("f : " + f.getLocation());	// ���� ������ ������ ������� ��ġ Ȯ�κ�
		if(b.getLocation().equals(f.getLocation())) {	// ���� ����Ⱑ ���� ��ġ�� ������ �� ���� ����⸦ ������� ����
			th.interrupt();								// ����Ⱑ �����̴� �����忡 ���ͷ�Ʈ
			finish.setVisible(true);					// ���� ����⸦ ������� finish�� ���̵��� ����
		}
	}
}