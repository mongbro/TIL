import java.awt.*;
import javax.swing.*;

public class Memo extends JFrame {
	public Memo() {
		setTitle("�޸���");
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		Container c = getContentPane();		
		JTextArea ta = new JTextArea(30,50);		// �޸��� ������ ǥ���� �ؽ�Ʈ ������
		JTextField tf = new JTextField(28);			// �޸� �����ϰų� �ҷ��� �ּҸ� ǥ���� �ؽ�Ʈ�ʵ�
		JButton open = new JButton("����");			// ���� ��ư
		JButton save = new JButton("����");			// ���� ��ư
		JButton create = new JButton("���� �����");	// ���� ����� ��ư
		
		c.setLayout(new FlowLayout());
		c.add(new JScrollPane(ta));		// �ؽ�Ʈ ����� ��ũ�ѱ�� ������ �����̳ʿ� ta����
		c.add(tf);		// �����̳ʿ� tf����
		c.add(open);	// �����̳ʿ� �����ư ����
		c.add(save);	// �����̳ʿ� �����ư ����
		c.add(create);	// �����̳ʿ� ���θ�����ư ����
		
		open.addActionListener(new openAction(tf, ta));		// ���� ��ư�� �̺�Ʈó����� ����
		save.addActionListener(new saveAction(tf, ta));		// ���� ��ư�� �̺�Ʈó����� ����
		create.addActionListener(new createAction(tf, ta));	// ���θ���� ��ư�� �̺�Ʈó����� ����
		
		setSize(580,650);
		setVisible(true);
	}
	public static void main(String[] args) {
		new Memo();
	}
}