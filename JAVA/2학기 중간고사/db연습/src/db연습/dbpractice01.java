package db연습;

import java.sql.*;

public class dbpractice01 {
	public static void main(String[] args) throws ClassNotFoundException, SQLException {
		Class.forName("com.mysql.cj.jdbc.Driver");   // 생략 가능
		String url ="jdbc:mysql://localhost:3306/javadb?serverTimezone=UTC";
		String id = /*"root"*/;  String pw = "mysqlroot";
		
		Connection con = DriverManager.getConnection(url, id, pw);
		Statement stmt = con.createStatement();
		String sql = "create table Student(id int, name varchar(10), dept varchar(20))";
		stmt.execute(sql);
		
		System.out.println("Student 테이블 생성 완료!");
		stmt.close();
		con.close();

	}
}
