import java.util.Scanner;

public class practice06 {
	public static void main(String[] args) {
		System.out.print("���� �׼��� �Է��ϼ��� >> ");
		
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
		
		System.out.println("������ " + C50000 + "��, " + "���� " + C10000 + "��, " + "1000�� " + C1000 + "��, " + "500�� " + C500 + "��, " + "100�� " + C100 + "��, " + "10�� " + C10 + "��, " + "1�� " + money + "��");
	}
}
