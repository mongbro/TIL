import java.util.Scanner;

public class practice09 {
	public static void main(String[] args) {
		System.out.print("1~99 사이의 정수를 입력하시오>>");
		
		Scanner scanner = new Scanner(System.in);
		
		int num = scanner.nextInt();
		
		scanner.close();
		
		int one = num % 10;
		int ten = num / 10;
		
		if(one % 3 == 0) {
			if(ten % 3 == 0)
				System.out.println("박수 짝짝");
			else
				System.out.println("박수 짝");
		}
		else {
			if(ten > 0) {			
				if(ten % 3 == 0)
					System.out.println("박수 짝");
				else
					System.out.println("박수 없음");			
			}
			else 
				System.out.println("박수 없음");
		}
	}
}
