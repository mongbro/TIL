import java.util.Scanner;

public class pracitce10 {
	public static void main(String[] args) {
		System.out.print("커피 주문하세요>>");
		
		Scanner scanner =new Scanner(System.in);
		
		String coffee = scanner.next();
		int num = scanner.nextInt();
		int total = 0;
		
		switch(coffee) {
		case "에스프레소":
			if(num < 10)
				total = 2000 * num;
			else
				total = (2000 / 100 * 95) * num;
			break;
		case "아메리카노":
			total = 2500 * num;
			break;
		case "카푸치노":
			total = 3000 * num;
			break;
		case "카페라떼":
			total = 3500 * num;
			break;
		}
		
		System.out.println(total + "원 입니다.");
	}
}
