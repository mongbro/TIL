package practice03;

import java.util.InputMismatchException;
import java.util.Scanner;

public class practice03 {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		
		System.out.print("정수를 입력하세요 >> ");
		
		try {
			int a = scanner.nextInt();
			if(a % 2 == 0)
				System.out.println("짝");
			if(a % 2 == 1)
				System.out.println("홀");
		}
		catch(InputMismatchException e) {
			System.out.println("수를 입력하지 않아 프로그램을 종료합니다.");
		}
		scanner.close();
	}
}
