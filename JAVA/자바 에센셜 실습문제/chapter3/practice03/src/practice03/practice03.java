package practice03;

import java.util.InputMismatchException;
import java.util.Scanner;

public class practice03 {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		
		System.out.print("������ �Է��ϼ��� >> ");
		
		try {
			int a = scanner.nextInt();
			if(a % 2 == 0)
				System.out.println("¦");
			if(a % 2 == 1)
				System.out.println("Ȧ");
		}
		catch(InputMismatchException e) {
			System.out.println("���� �Է����� �ʾ� ���α׷��� �����մϴ�.");
		}
		scanner.close();
	}
}
