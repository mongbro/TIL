import java.util.Scanner;

public class practice08 {
	public static void main(String[] args) {
		System.out.print("커피를 주문하세요 >> ");
		
		Scanner scanner = new Scanner(System.in);
		
		String coffee = scanner.next();
		int ea = scanner.nextInt();
		int total = 0;
		
		scanner.close();
		
		switch(coffee) {
		case "에스프레소":
			total = 2000 * ea;
			break;
		case "아메리카노":
			total = 2500 * ea;
			break;
		case "카푸치노":
			total = 3000 * ea;
			break;
		case "카페라떼":
			total = 3500 * ea;
			break;
		}
		
		System.out.println(total + "원 입니다.");
	}
}
