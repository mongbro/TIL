import java.util.Scanner;

public class practice0217_1 {
	public static void main(String[] args) {
		int count = 0, n = 0, sum = 0;
		double avg = 0;
		Scanner scanner = new Scanner(System.in);

		System.out.println("������ �Է��Ͻÿ�. �����Ϸ��� 0");
		while((n = scanner.nextInt()) != 0) {
			count++;
			sum += n;
		}
		
		scanner.close();
		avg = sum / count;
		
		System.out.println("�Էµ� ������ ������ " + count + "�� �Դϴ�.");
		System.out.println("������ �� ���� " + sum + "�̰� ����� " + avg + "�Դϴ�.");
	}
}
