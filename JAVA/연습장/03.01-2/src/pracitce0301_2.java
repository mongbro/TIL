import java.util.Scanner;

public class pracitce0301_2 {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		
		System.out.print("분자 입력 >> ");
		int a = scanner.nextInt();
		System.out.print("분모 입력 >> ");
		int b = scanner.nextInt();
		
		try {
			System.out.println(a + " / " + b + " = " + a / b);
		}
		catch(ArithmeticException e) {
			System.out.println("분모가 0일 수 없습니다.");
		}
		scanner.close();
	}
}
