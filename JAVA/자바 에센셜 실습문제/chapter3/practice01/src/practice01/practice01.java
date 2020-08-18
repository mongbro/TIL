package practice01;

import java.util.Scanner;

public class practice01 {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		
		System.out.print("알파벳 한개 입력 >> ");
		String s = scanner.next();
		char c = s.charAt(0);
		for(char i = 'a'; i <= c; i++) {
			for(char j = i; j <= c; j++) {
				System.out.print(j);
			}
			System.out.println();
		}
		scanner.close();
	}
}
