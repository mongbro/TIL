import java.util.Scanner;

public class practice03 {
	public static void main(String[] args) {
		System.out.print("x���� �Է��ϼ��� >>");
		
		Scanner scanner = new Scanner(System.in);
		
		int x = scanner.nextInt();
		int y = x * x - x * 3 + 7;
		
		scanner.close();
		
		System.out.println("x = " + x + "y = " + y);
	}
}
