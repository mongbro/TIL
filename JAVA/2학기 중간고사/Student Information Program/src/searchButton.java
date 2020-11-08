import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.sql.*;
import javax.swing.*;

class searchButton implements ActionListener{
	JTextField id;		// GUI에서 TextField를 받아와서 DB에 있는 데이터를 tf에 저장해야 하기 때문에 인수로 받아온다.
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
		JButton b = (JButton)e.getSource();		// 버튼이 동작할 때
		
		try {
			String rid = "root";  String rpw = "mysqlroot";
			String url ="jdbc:mysql://localhost:3306/javadb?serverTimezone=UTC";
			Connection con = DriverManager.getConnection(url, rid, rpw);
			Class.forName("com.mysql.cj.jdbc.Driver");
			
			String sql = "select * from student where id ="+id.getText();
			Statement stmt = con.createStatement();
			ResultSet rs = stmt.executeQuery(sql); 	// SQL문에서 select의 결과를 저장하는 ResultSet 객체 생성하고 "sql"을 실행한다.
													// student 테이블에서 id가 id텍스트필드에 있는 것과 같은 것을 rs에 저장한다.			
			while(rs.next()) {		// rs에 내용이 있을때 반복문 실행
				name.setText(rs.getString("name"));		// DB에 있는 name값을 JTextField name에 삽입
				dept.setText(rs.getString("dept"));		// DB에 있는 dept값을 JTextField dept에 삽입
				phone.setText(rs.getString("phone"));	// DB에 있는 phone값을 JTextField phone에 삽입
				email.setText(rs.getString("email"));	// DB에 있는 email값을 JTextField email에 삽입
				addr.setText(rs.getString("addr"));		// DB에 있는 addr값을 JTextField addr에 삽입
			}
			rs.close();
			stmt.close();
			con.close();
		} catch (ClassNotFoundException | SQLException e1) {
			e1.printStackTrace();
		}
	}
}
