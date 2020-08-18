package practice04;

import java.util.InputMismatchException;
import java.util.Scanner;

public class practice04 {
	public static void main(String[] args) {
		String day[] = {"일", "월", "화", "수", "목", "금", "토"};
		Scanner scanner = new Scanner(System.in);
		
		while(true) {
			System.out.print("정수를 입력하세요 >> ");
		
			int input;
			try {
				input = scanner.nextInt();
			}
			catch(InputMismatchException e) {
				System.out.println("경고! 수를 입력하지 않았습니다.");
				scanner.next();
				continue;
			}
			if(input < 0) {
				System.out.println("프로그램을 종료합니다.");
				break;
			}
			switch(input % 7) {
			case 0:
				System.out.println(day[0]);
				break;
			case 1:
				System.out.println(day[1]);
				break;
			case 2:
				System.out.println(day[2]);
				break;
			case 3:
				System.out.println(day[3]);
				break;
			case 4:
				System.out.println(day[4]);
				break;
			case 5:
				System.out.println(day[5]);
				break;
			case 6:
				System.out.println(day[6]);
				break;
			}
		}
		scanner.close();
	}
}