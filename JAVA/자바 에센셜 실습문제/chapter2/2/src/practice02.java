import java.util.Scanner;

public class practice02 {
	public static void main(String[] args) {
		System.out.print("�� ������ �Է��ϼ��� >> ");
		
		Scanner scanner = new Scanner(System.in);
		
		int flour = scanner.nextInt();
		
		scanner.close();
		
		System.out.println(flour * 5 + "m�Դϴ�.");
	}
}
