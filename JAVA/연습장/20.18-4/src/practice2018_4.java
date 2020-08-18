import java.util.Scanner;

public class practice2018_4 {
	public static void main(String[] args) {
		System.out.println("\"exit\"를 입력하면 종료합니다.");
		Scanner scanner = new Scanner(System.in);
		
		while(true) {
			System.out.print(">>");
			String s = scanner.next();
			if(s.equals("exit"))
				break;
		}
		System.out.println("종료");
	}
}
