import java.util.Scanner;

public class practice2018_5 {
	public static void main(String[] args) {
		int arr[] = new int[5];
		int max = 0;
		Scanner scanner = new Scanner(System.in);
		
		for(int i = 0; i < 5; i++) {
			arr[i] = scanner.nextInt();
			if(arr[i] >= max)
				max = arr[i];
		}
		
		System.out.print("배열은  \n");
		for(int i = 0; i < 5; i++) {
			System.out.print(arr[i] + "\t");
		}
		System.out.println("\n최대값은 " + max);
	}
}
