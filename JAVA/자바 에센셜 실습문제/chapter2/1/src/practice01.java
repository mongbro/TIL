import java.util.Scanner;

public class practice01 {
	public static void main(String[] args) {
		System.out.print("�� ������ �Է��Ͻÿ� >> ");
		
		Scanner scanner = new Scanner(System.in);
		
		int a = scanner.nextInt();
		int b = scanner.nextInt();
		int result = a+b;
		
		scanner.close();
		
		System.out.println(a + " + " + b + " = " + result);
	}
}