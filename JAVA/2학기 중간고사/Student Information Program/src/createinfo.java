import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.SQLException;
import java.sql.Statement;

class createinfo{
	public createinfo() throws ClassNotFoundException, SQLException{
		Class.forName("com.mysql.cj.jdbc.Driver");   // ����̹� �����ϱ�
		String url ="jdbc:mysql://localhost:3306/javadb?serverTimezone=UTC";	// Connection�� �Ѱ��� url
		String rid = "root";  String rpw = "mysqlroot";		// Connection�� �Ѱ��� ��Ʈid�� ��Ʈ��й�ȣ
		
		Connection con = DriverManager.getConnection(url, rid, rpw);
		Statement stmt = con.createStatement();		// Connection�� ����ؼ� statement ��ü ����
		String sql = "create table if not exists Student(id int, name varchar(10), dept varchar(20), "
				+ "phone varchar(20), email varchar(20), addr varchar(30), primary key(id))";
				// "if not exists"�� Student ���̺��� �������� ������ �����϶�� �ǹ�
				// �� createinfo()�� ȣ���� ������ ���̺��� �������� �ʰ� �̹� �����ϰ� �ִٸ� �����ȴ�.
		stmt.execute(sql);
		
		System.out.println("Student ���̺� ���� �Ϸ�!");
		stmt.close();
		con.close();
	}
}