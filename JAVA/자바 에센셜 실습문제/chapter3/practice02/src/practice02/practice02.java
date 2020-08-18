package practice02;

import java.util.Scanner;

public class practice02 {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		
		int a[] = new int[10];
		System.out.print("정수 10개 입력 >> ");
		
		for(int i = 0; i < 10; i++) {
			a[i] = scanner.nextInt();
		}
		scanner.close();
		for(int i = 0; i < 10; i++) {
			if(a[i] % 3 == 0)
				System.out.print(a[i] + " ");
		}
		
	}
}
