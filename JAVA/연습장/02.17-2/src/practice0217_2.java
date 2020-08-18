import java.util.Scanner;

public class practice0217_2 {
	public static void main(String[] args) {
		int count = 0, n = 0, sum = 0;
		double avg = 0;
		Scanner scanner = new Scanner(System.in);
		
		System.out.println("정수를 입력하세요. 종료하려면 0");
		
		while((n = scanner.nextInt()) != 0) {
			count++;
			sum += n;
		}
		scanner.close();
		
		avg = sum/count;
		
		System.out.println("갯수 : " + count + "평균 : " + avg + "총합 : " + sum);
	}
}
