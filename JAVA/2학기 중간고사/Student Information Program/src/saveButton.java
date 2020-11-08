import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.sql.*;
import javax.swing.*;

class saveButton implements ActionListener{
	JTextField id;		// GUI에서 TextField에서 데이터를 받아와서 DB에 저장해야 하기 때문에 인수로 받아온다.
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
			int isExist = 0;	// 해당 id가 이미 존재하는지 여부 기본값 0
			Connection con = DriverManager.getConnection(url, rid, rpw);
			Class.forName("com.mysql.cj.jdbc.Driver");
			PreparedStatement pstmt;
			
			/*이미 존재하는지 여부 검색*/
			String sql = "select id from student";
			Statement stmt = con.createStatement();
			ResultSet rs = stmt.executeQuery(sql); // SQL문에서 select의 결과를 저장하는 ResultSet 객체 생성하고 "sql"을 실행한다.
			while(rs.next()) 
				if(rs.getInt("id") == Integer.parseInt(id.getText()))
					isExist = 1;	// student 테이블에서 id를 전부 가져와서 id JTextField에 있는 값과 비교한 결과 같은것이 있으면 isExist = 1	
			if(isExist == 0) {		// 테이블에 해당 id가 없을 경우 새로 저장
			/*저장하는 곳*/
				String sql2 = "insert into student (id, name, dept, phone, email, addr) "
						+ "values (?,?,?,?,?,?)";
				pstmt = con.prepareStatement(sql2);		// ?하나마다 1부터 번호를 붙여서 간단하게 삽입한다.
				pstmt.setInt(1, Integer.parseInt(id.getText()));// 1번자리에 int형으로 id JTextField에 있는 값을 삽입
				pstmt.setString(2, name.getText());	// 2번자리에 String형으로 name JTextField에 있는 값을 삽입
				pstmt.setString(3, dept.getText());	// 3번자리에 String형으로 dept JTextField에 있는 값을 삽입
				pstmt.setString(4, phone.getText());// 4번자리에 String형으로 phone JTextField에 있는 값을 삽입
				pstmt.setString(5, email.getText());// 5번자리에 String형으로 email JTextField에 있는 값을 삽입
				pstmt.setString(6, addr.getText());	// 6번자리에 String형으로 addr JTextField에 있는 값을 삽입
				pstmt.executeUpdate();
			/*저장하는 곳*/
			}
			/*수정하는 곳*/
			if(isExist == 1) {		// 테이블에 해당 id가 있는 경우 수정
				String sql3 = "update student set name = ?, dept = ?, phone = ?, "
						+ "email = ?, addr = ? where id = " + id.getText();
				pstmt = con.prepareStatement(sql3);		// ?하나마다 1부터 번호를 붙여서 간단하게 삽입한다.
				pstmt.setString(1, name.getText());	// 1번 자리에 String형으로 name JTextField에 있는 값을 삽입
				pstmt.setString(2, dept.getText());	// 2번 자리에 String형으로 dept JTextField에 있는 값을 삽입
				pstmt.setString(3, phone.getText());// 3번 자리에 String형으로 phone JTextField에 있는 값을 삽입
				pstmt.setString(4, email.getText());// 4번 자리에 String형으로 email JTextField에 있는 값을 삽입
				pstmt.setString(5, addr.getText());	// 5번 자리에 String형으로 addr JTextField에 있는 값을 삽입
				pstmt.executeUpdate();
			}
			/*수정하는 곳*/
		} catch (ClassNotFoundException | SQLException e1) {
			e1.printStackTrace();
		}
	}
}
