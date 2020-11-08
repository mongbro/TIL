import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.SQLException;
import java.sql.Statement;

class createinfo{
	public createinfo() throws ClassNotFoundException, SQLException{
		Class.forName("com.mysql.cj.jdbc.Driver");   // 드라이버 연결하기
		String url ="jdbc:mysql://localhost:3306/javadb?serverTimezone=UTC";	// Connection에 넘겨줄 url
		String rid = "root";  String rpw = "mysqlroot";		// Connection에 넘겨줄 루트id와 루트비밀번호
		
		Connection con = DriverManager.getConnection(url, rid, rpw);
		Statement stmt = con.createStatement();		// Connection을 사용해서 statement 객체 생성
		String sql = "create table if not exists Student(id int, name varchar(10), dept varchar(20), "
				+ "phone varchar(20), email varchar(20), addr varchar(30), primary key(id))";
				// "if not exists"는 Student 테이블이 존재하지 않으면 생성하라는 의미
				// 즉 createinfo()를 호출할 때마다 테이블을 생성하지 않고 이미 존재하고 있다면 생략된다.
		stmt.execute(sql);
		
		System.out.println("Student 테이블 생성 완료!");
		stmt.close();
		con.close();
	}
}