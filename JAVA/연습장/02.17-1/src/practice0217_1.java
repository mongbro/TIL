import java.util.Scanner;

public class practice0217_1 {
	public static void main(String[] args) {
		int count = 0, n = 0, sum = 0;
		double avg = 0;
		Scanner scanner = new Scanner(System.in);

		System.out.println("정수를 입력하시오. 종료하려면 0");
		while((n = scanner.nextInt()) != 0) {
			count++;
			sum += n;
		}
		
		scanner.close();
		avg = sum / count;
		
		System.out.println("입력된 정수의 갯수는 " + count + "개 입니다.");
		System.out.println("정수의 총 합은 " + sum + "이고 평균은 " + avg + "입니다.");
	}
}
