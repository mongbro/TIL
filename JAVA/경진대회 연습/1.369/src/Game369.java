import java.util.Scanner;

public class Game369 {

	public static void main(String[] args) {
		int n, result = 0;
		Scanner sc = new Scanner(System.in);
		for(int i = 0; i < 3; i++) {
			result = 0;
			n = sc.nextInt();
			while(n > 0) {
				result += handcrap(n);
				n--;
			}
			System.out.println(result);
		}
		sc.close();
	}
	
	static int handcrap(int n) {
		int count = 0, num;
		do{
			if(n >= 10) {
				num = n % 10;
				n /= 10;
			}
			else {
				num = n;
				n /= 10;
			}
			if(num % 3 == 0)
				if(num != 0)
					count ++;
		}while(n > 0);
		
		return count;
	}
	
}
