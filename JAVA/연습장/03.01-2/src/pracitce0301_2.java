import java.util.Scanner;

public class pracitce0301_2 {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		
		System.out.print("���� �Է� >> ");
		int a = scanner.nextInt();
		System.out.print("�и� �Է� >> ");
		int b = scanner.nextInt();
		
		try {
			System.out.println(a + " / " + b + " = " + a / b);
		}
		catch(ArithmeticException e) {
			System.out.println("�и� 0�� �� �����ϴ�.");
		}
		scanner.close();
	}
}
