import java.util.Scanner;

public class pracitce10 {
	public static void main(String[] args) {
		System.out.print("Ŀ�� �ֹ��ϼ���>>");
		
		Scanner scanner =new Scanner(System.in);
		
		String coffee = scanner.next();
		int num = scanner.nextInt();
		int total = 0;
		
		switch(coffee) {
		case "����������":
			if(num < 10)
				total = 2000 * num;
			else
				total = (2000 / 100 * 95) * num;
			break;
		case "�Ƹ޸�ī��":
			total = 2500 * num;
			break;
		case "īǪġ��":
			total = 3000 * num;
			break;
		case "ī���":
			total = 3500 * num;
			break;
		}
		
		System.out.println(total + "�� �Դϴ�.");
	}
}
