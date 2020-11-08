import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.sql.*;
import javax.swing.*;

class saveButton implements ActionListener{
	JTextField id;		// GUI���� TextField���� �����͸� �޾ƿͼ� DB�� �����ؾ� �ϱ� ������ �μ��� �޾ƿ´�.
	JTextField name;
	JTextField dept;
	JTextField phone;
	JTextField email;
	JTextField addr;
	
	public saveButton(JTextField id, JTextField name, JTextField dept, JTextField phone, JTextField email, JTextField addr) {
		this.id = id; this.name = name; this.dept = dept;
		this.phone = phone; this.email = email; this.addr = addr;
	}

	public void actionPerformed(ActionEvent e) {
		JButton b = (JButton)e.getSource();		
		String rid = "root";  String rpw = "mysqlroot";
		String url ="jdbc:mysql://localhost:3306/javadb?serverTimezone=UTC";
		try {
			int isExist = 0;	// �ش� id�� �̹� �����ϴ��� ���� �⺻�� 0
			Connection con = DriverManager.getConnection(url, rid, rpw);
			Class.forName("com.mysql.cj.jdbc.Driver");
			PreparedStatement pstmt;
			
			/*�̹� �����ϴ��� ���� �˻�*/
			String sql = "select id from student";
			Statement stmt = con.createStatement();
			ResultSet rs = stmt.executeQuery(sql); // SQL������ select�� ����� �����ϴ� ResultSet ��ü �����ϰ� "sql"�� �����Ѵ�.
			while(rs.next()) 
				if(rs.getInt("id") == Integer.parseInt(id.getText()))
					isExist = 1;	// student ���̺��� id�� ���� �����ͼ� id JTextField�� �ִ� ���� ���� ��� �������� ������ isExist = 1	
			if(isExist == 0) {		// ���̺� �ش� id�� ���� ��� ���� ����
			/*�����ϴ� ��*/
				String sql2 = "insert into student (id, name, dept, phone, email, addr) "
						+ "values (?,?,?,?,?,?)";
				pstmt = con.prepareStatement(sql2);		// ?�ϳ����� 1���� ��ȣ�� �ٿ��� �����ϰ� �����Ѵ�.
				pstmt.setInt(1, Integer.parseInt(id.getText()));// 1���ڸ��� int������ id JTextField�� �ִ� ���� ����
				pstmt.setString(2, name.getText());	// 2���ڸ��� String������ name JTextField�� �ִ� ���� ����
				pstmt.setString(3, dept.getText());	// 3���ڸ��� String������ dept JTextField�� �ִ� ���� ����
				pstmt.setString(4, phone.getText());// 4���ڸ��� String������ phone JTextField�� �ִ� ���� ����
				pstmt.setString(5, email.getText());// 5���ڸ��� String������ email JTextField�� �ִ� ���� ����
				pstmt.setString(6, addr.getText());	// 6���ڸ��� String������ addr JTextField�� �ִ� ���� ����
				pstmt.executeUpdate();
			/*�����ϴ� ��*/
			}
			/*�����ϴ� ��*/
			if(isExist == 1) {		// ���̺� �ش� id�� �ִ� ��� ����
				String sql3 = "update student set name = ?, dept = ?, phone = ?, "
						+ "email = ?, addr = ? where id = " + id.getText();
				pstmt = con.prepareStatement(sql3);		// ?�ϳ����� 1���� ��ȣ�� �ٿ��� �����ϰ� �����Ѵ�.
				pstmt.setString(1, name.getText());	// 1�� �ڸ��� String������ name JTextField�� �ִ� ���� ����
				pstmt.setString(2, dept.getText());	// 2�� �ڸ��� String������ dept JTextField�� �ִ� ���� ����
				pstmt.setString(3, phone.getText());// 3�� �ڸ��� String������ phone JTextField�� �ִ� ���� ����
				pstmt.setString(4, email.getText());// 4�� �ڸ��� String������ email JTextField�� �ִ� ���� ����
				pstmt.setString(5, addr.getText());	// 5�� �ڸ��� String������ addr JTextField�� �ִ� ���� ����
				pstmt.executeUpdate();
			}
			/*�����ϴ� ��*/
		} catch (ClassNotFoundException | SQLException e1) {
			e1.printStackTrace();
		}
	}
}
