import java.util.Scanner;

public class practice08 {
	public static void main(String[] args) {
		System.out.print("Ŀ�Ǹ� �ֹ��ϼ��� >> ");
		
		Scanner scanner = new Scanner(System.in);
		
		String coffee = scanner.next();
		int ea = scanner.nextInt();
		int total = 0;
		
		scanner.close();
		
		switch(coffee) {
		case "����������":
			total = 2000 * ea;
			break;
		case "�Ƹ޸�ī��":
			total = 2500 * ea;
			break;
		case "īǪġ��":
			total = 3000 * ea;
			break;
		case "ī���":
			total = 3500 * ea;
			break;
		}
		
		System.out.println(total + "�� �Դϴ�.");
	}
}
