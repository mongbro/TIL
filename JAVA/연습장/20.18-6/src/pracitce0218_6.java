import java.util.Scanner;

public class pracitce0218_6 {
	public static void main(String[] args) {
		int arr[] = new int[5];
		double sum = 0;
		Scanner scanner = new Scanner(System.in);
		
		//for(int i = 0; i < arr.length; i++) {
		//	arr[i] = scanner.nextInt();
		//	sum += arr[i];
		//}		�Ʒ��� ������
		
		for(int i : arr) {
			arr[i] = scanner.nextInt();
			sum += arr[i];
		}
		
		scanner.close();
		
		System.out.println("�迭�� �� ���� " + sum + "\n ����� " + sum/arr.length);
	}
}
