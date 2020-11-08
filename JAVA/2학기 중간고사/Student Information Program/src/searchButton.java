import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.sql.*;
import javax.swing.*;

class searchButton implements ActionListener{
	JTextField id;		// GUI���� TextField�� �޾ƿͼ� DB�� �ִ� �����͸� tf�� �����ؾ� �ϱ� ������ �μ��� �޾ƿ´�.
	JTextField name;
	JTextField dept;
	JTextField phone;
	JTextField email;
	JTextField addr;
	
	public searchButton(JTextField id, JTextField name, JTextField dept, JTextField phone, JTextField email, JTextField addr) {
		this.id = id; this.name = name; this.dept = dept;
		this.phone = phone; this.email = email; this.addr = addr;
	}
	public void actionPerformed(ActionEvent e) {
		JButton b = (JButton)e.getSource();		// ��ư�� ������ ��
		
		try {
			String rid = "root";  String rpw = "mysqlroot";
			String url ="jdbc:mysql://localhost:3306/javadb?serverTimezone=UTC";
			Connection con = DriverManager.getConnection(url, rid, rpw);
			Class.forName("com.mysql.cj.jdbc.Driver");
			
			String sql = "select * from student where id ="+id.getText();
			Statement stmt = con.createStatement();
			ResultSet rs = stmt.executeQuery(sql); 	// SQL������ select�� ����� �����ϴ� ResultSet ��ü �����ϰ� "sql"�� �����Ѵ�.
													// student ���̺��� id�� id�ؽ�Ʈ�ʵ忡 �ִ� �Ͱ� ���� ���� rs�� �����Ѵ�.			
			while(rs.next()) {		// rs�� ������ ������ �ݺ��� ����
				name.setText(rs.getString("name"));		// DB�� �ִ� name���� JTextField name�� ����
				dept.setText(rs.getString("dept"));		// DB�� �ִ� dept���� JTextField dept�� ����
				phone.setText(rs.getString("phone"));	// DB�� �ִ� phone���� JTextField phone�� ����
				email.setText(rs.getString("email"));	// DB�� �ִ� email���� JTextField email�� ����
				addr.setText(rs.getString("addr"));		// DB�� �ִ� addr���� JTextField addr�� ����
			}
			rs.close();
			stmt.close();
			con.close();
		} catch (ClassNotFoundException | SQLException e1) {
			e1.printStackTrace();
		}
	}
}
