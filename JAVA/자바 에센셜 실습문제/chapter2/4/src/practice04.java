import java.util.Scanner;

public class practice04 {
	public static void main(String[] args) {
		System.out.print("�� (x, y)�� ��ǥ�� �Է��ϼ��� >>");
		
		Scanner scanner = new Scanner(System.in);
		
		int x = scanner.nextInt();
		int y = scanner.nextInt();
		
		scanner.close();
		
		if(x >= 50 && x <= 100) {
			if(y >= 50 && y <= 100)
				System.out.println("��(" + x + ", " + y + ")��  (50, 50) �� (100, 100)�� �簢�� ���� �ֽ��ϴ�.");
			else
				System.out.println("��(" + x + ", " + y + ")��  (50, 50) �� (100, 100)�� �簢�� ���� �����ϴ�.");
		}
		else
			System.out.println("��(" + x + ", " + y + ")��  (50, 50) �� (100, 100)�� �簢�� ���� �����ϴ�.");
	}
}
