import java.util.Scanner;

public class practice09 {
	public static void main(String[] args) {
		System.out.print("1~99 ������ ������ �Է��Ͻÿ�>>");
		
		Scanner scanner = new Scanner(System.in);
		
		int num = scanner.nextInt();
		
		scanner.close();
		
		int one = num % 10;
		int ten = num / 10;
		
		if(one % 3 == 0) {
			if(ten % 3 == 0)
				System.out.println("�ڼ� ¦¦");
			else
				System.out.println("�ڼ� ¦");
		}
		else {
			if(ten > 0) {			
				if(ten % 3 == 0)
					System.out.println("�ڼ� ¦");
				else
					System.out.println("�ڼ� ����");			
			}
			else 
				System.out.println("�ڼ� ����");
		}
	}
}
