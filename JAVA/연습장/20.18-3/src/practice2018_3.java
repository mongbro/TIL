import java.util.Scanner;

public class practice2018_3 {
	public static void main(String[] args) {
		int sum = 0;
		Scanner scanner = new Scanner(System.in);
		
		for(int i = 0; i < 5; i++) {
			int n = scanner.nextInt();
			if(n <= 0)
				continue;
			sum += n;
		}
		
		scanner.close();
		
		System.out.println("гую╨ " + sum);
	}
}
