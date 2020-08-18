import java.util.Scanner;

public class practice06 {
	public static void main(String[] args) {
		System.out.print("돈의 액수를 입력하세요 >> ");
		
		Scanner scanner = new Scanner(System.in);
		
		int money = scanner.nextInt();
		
		scanner.close();
		
		int C50000 = money / 50000;
		money %= 50000;
		int C10000 = money / 10000;
		money %= 10000;
		int C1000 = money / 1000;
		money %= 1000;
		int C500 = money / 500;
		money %= 500;
		int C100 = money / 100;
		money %= 100;
		int C10 = money / 10;
		money %= 10;
		
		System.out.println("오만원 " + C50000 + "개, " + "만원 " + C10000 + "개, " + "1000원 " + C1000 + "개, " + "500원 " + C500 + "개, " + "100원 " + C100 + "개, " + "10원 " + C10 + "개, " + "1원 " + money + "개");
	}
}
