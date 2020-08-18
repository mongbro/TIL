import java.util.Scanner;

public class practice07 {
	public static void main(String[] args) {
		System.out.print("학점을 입력하세요 >> ");
		
		Scanner scanner = new Scanner(System.in);
		String grade = scanner.next();
		
		scanner.close();
		
		switch(grade) {
		case "A": case "B":
			System.out.println("Excellent");
			break;
		case "C": case "D":
			System.out.println("Good");
			break;
		case "F":
			System.out.println("Bye");
			break;
		}
	}
}