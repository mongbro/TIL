import java.util.*;
import java.sql.*;
import java.io.*;

public class ExcuteSQL {
	public static void main(String[] args) throws Exception {
		Scanner sc = new Scanner(System.in);
		Class.forName("com.mysql.cj.jdbc.Driver");
		String url ="jdbc:mysql://localhost:3306/javadb?serverTimezone=UTC";
		String id = "root";  String pw = "mysqlroot";
		
		Connection con = DriverManager.getConnection(url, id, pw);
		Statement stmt = con.createStatement();

		String sql;
		while(true) {
			
			System.out.print("SQL 입력 >> ");
			sql = sc.nextLine();
			if(sql.equalsIgnoreCase("bye")) break;
			StringTokenizer st = new StringTokenizer(sql, " ");
			switch(st.nextToken().toUpperCase()) {
			case "INSERT": 
			case "UPDATE":
			case "DELETE":
				int r = stmt.executeUpdate(sql);
				System.out.println(r + "개의 행이 수정됨.");  break;
			case "SELECT":
				ResultSet rs = stmt.executeQuery(sql);
				ResultSetMetaData rsmd = rs.getMetaData();
				int cols = rsmd.getColumnCount();
				for(int i = 1; i <= cols; i++)
					System.out.print(rsmd.getColumnName(i) + "\t");
				System.out.println();
				//rs.beforeFirst();
				while(rs.next() != false) {
					for(int j = 1; j <= cols; j++) System.out.print(rs.getObject(j) + "\t");
					System.out.println();
				} break;
			default:	
				continue;
		}			
	}
	stmt.close(); con.close();
}
}