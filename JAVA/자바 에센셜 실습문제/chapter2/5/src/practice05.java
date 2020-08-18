import java.util.Scanner;

public class practice05 {
	public static void main(String[] args) {
		System.out.print("논리 연산을 입력하세요 >> ");
		
		Scanner scanner = new Scanner(System.in);
		
		boolean a = scanner.nextBoolean();
		String b = scanner.next();
		boolean c = scanner.nextBoolean();
		
		scanner.close();
		
		switch(b) {
		case "OR":
			System.out.println("true");
			break;
		case "AND":
			System.out.println("false");
			break;
		default:
			System.out.println("unknown");
		}
	}
}