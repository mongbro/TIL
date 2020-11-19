import java.util.Scanner;

public class elec {

	public static void main(String[] args) {
		int n;
		int[] arr = { 0, 0, 0 };
		Scanner sc = new Scanner(System.in);
		for(int i = 0; i < 4; i++) {
			n = sc.nextInt();
			arr = press(n);
			if(arr[0] == -1)
				System.out.println(arr[0]);
			else
				System.out.println(arr[2] + " " + arr[1] + " " + arr[0]);
		}
		sc.close();
	}
	
	static int[] press(int n) {
		int[] arr = { 0, 0, 0 };
		while(true) {
			if(n - 300 >= 0) {
				arr[2]++;
				n -= 300;
			}
			else if(n - 60 >= 0) {
				arr[1]++;
				n -= 60;
			}
			else if(n - 10 >= 0) {
				arr[0]++;
				n -= 10;
			}
			if(n < 10)
				break;
		}
		if(n >0 && n < 10) {
			arr[0] = -1;
			arr[1] = -1;
			arr[2] = -1;
		}
		return arr;
	}
}
