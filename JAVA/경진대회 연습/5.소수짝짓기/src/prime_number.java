import java.util.Scanner;

public class prime_number {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		for(int z = 0; z < 4; z++) {
			int input;
			input = sc.nextInt();
			int[] arr = new int[input];
			for(int i = 0; i < input; i++)
				arr[i] = sc.nextInt();

			
		}
	}
	
	static boolean is_prime(int n) {
		int count = 0;
		for(int i = 2; i < n; i++) {
			if(n % i == 0)
				count++;
		}
		if(count == 0)
			return true;
		else
			return false;
	}
}
