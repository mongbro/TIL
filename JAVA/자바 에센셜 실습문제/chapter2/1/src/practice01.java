import java.util.Scanner;

public class practice01 {
	public static void main(String[] args) {
		System.out.print("두 정수를 입력하시오 >> ");
		
		Scanner scanner = new Scanner(System.in);
		
		int a = scanner.nextInt();
		int b = scanner.nextInt();
		int result = a+b;
		
		scanner.close();
		
		System.out.println(a + " + " + b + " = " + result);
	}
}