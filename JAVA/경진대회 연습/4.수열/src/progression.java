import java.util.Scanner;

public class progression {
	public static void main(String [] args) {
		Scanner sc = new Scanner(System.in);
		
		for(int z = 0; z < 3; z++) {
			int n, max = 1, ismax = 1;		// max = ���� ���� �� ���� ����    ismax = �������� �˾ƺ� ���� ����
			n = sc.nextInt();
			int[] arr = new int[n];
			for(int i = 0; i < n; i++) {
				arr[i] = sc.nextInt();
			}
			for(int i = 1; i < n; i++) {
				if(arr[i-1] <= arr[i]) 
					ismax++;
				else {
					if(ismax > max) {
						max = ismax;
					}
					ismax = 1;
				}
			}
			System.out.println(max);
		}
	}
}
