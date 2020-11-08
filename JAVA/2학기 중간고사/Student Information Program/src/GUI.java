import java.awt.Container;
import java.awt.FlowLayout;

import javax.swing.*;

class GUI extends JFrame{
	public GUI() {
		setTitle("�л� ���� ��ȸ/�Է�");
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		Container c = getContentPane();
		c.setLayout(new FlowLayout());
		
		JLabel id = new JLabel("�й�        ");
		JTextField idfield = new JTextField(30);
		c.add(id);
		c.add(idfield);

		JLabel name = new JLabel("�̸�        ");
		JTextField namefield = new JTextField(30);
		c.add(name);
		c.add(namefield);
		
		JLabel dept = new JLabel("�а�        ");
		JTextField deptfield = new JTextField(30);
		c.add(dept);
		c.add(deptfield);
		
		JLabel phone = new JLabel("��ȭ��ȣ");
		JTextField phonefield = new JTextField(30);
		c.add(phone);
		c.add(phonefield);
		
		JLabel email = new JLabel("�̸���    ");
		JTextField emailfield = new JTextField(30);
		c.add(email);
		c.add(emailfield);
		
		JLabel addr = new JLabel("�ּ�        ");
		JTextField addrfield = new JTextField(30);
		c.add(addr);
		c.add(addrfield);
		
		JButton search = new JButton("��ȸ");
		JButton save = new JButton("����");
		search.addActionListener(new searchButton(idfield,namefield,deptfield,phonefield,emailfield,addrfield));
		save.addActionListener(new saveButton(idfield,namefield,deptfield,phonefield,emailfield,addrfield));
		c.add(search);
		c.add(save);
		
		setSize(420,420);
		setVisible(true);
	}
}
