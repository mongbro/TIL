import java.awt.Container;
import java.awt.FlowLayout;

import javax.swing.*;

class GUI extends JFrame{
	public GUI() {
		setTitle("학생 정보 조회/입력");
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		Container c = getContentPane();
		c.setLayout(new FlowLayout());
		
		JLabel id = new JLabel("학번        ");
		JTextField idfield = new JTextField(30);
		c.add(id);
		c.add(idfield);

		JLabel name = new JLabel("이름        ");
		JTextField namefield = new JTextField(30);
		c.add(name);
		c.add(namefield);
		
		JLabel dept = new JLabel("학과        ");
		JTextField deptfield = new JTextField(30);
		c.add(dept);
		c.add(deptfield);
		
		JLabel phone = new JLabel("전화번호");
		JTextField phonefield = new JTextField(30);
		c.add(phone);
		c.add(phonefield);
		
		JLabel email = new JLabel("이메일    ");
		JTextField emailfield = new JTextField(30);
		c.add(email);
		c.add(emailfield);
		
		JLabel addr = new JLabel("주소        ");
		JTextField addrfield = new JTextField(30);
		c.add(addr);
		c.add(addrfield);
		
		JButton search = new JButton("조회");
		JButton save = new JButton("저장");
		search.addActionListener(new searchButton(idfield,namefield,deptfield,phonefield,emailfield,addrfield));
		save.addActionListener(new saveButton(idfield,namefield,deptfield,phonefield,emailfield,addrfield));
		c.add(search);
		c.add(save);
		
		setSize(420,420);
		setVisible(true);
	}
}
