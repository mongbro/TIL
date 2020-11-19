package word;

import java.util.ArrayList;
import java.util.Scanner;

public class word {

	public static void main(String[] args) {
		String input;
		int[] arr = new int[27];
		Scanner sc = new Scanner(System.in);
		arrayinitailize(arr);
		for(int i = 0; i < 4; i++) {
			input = sc.nextLine();
			input = input.toUpperCase();
			check(input, arr);
			System.out.println();
		}
	}
	static void arrayinitailize(int [] arr) {
		for(int i = 0; i < arr.length; i++) {
			arr[i] = 0;
		}
		arr[26] = 100;
	}
	static void check(String str, int[] arr) {
		char m = 0, max;
		char[] carr = new char[100];
		char[] alpha = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 
				'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
		int a = 0;
		arrayinitailize(arr);
		for(int i = 0; i < str.length(); i++) {
			carr[i] = str.charAt(i);
		}
		for(int i = str.length() - 1; i >= 0; i--) {
			if(carr[i] > carr[i-1]) {		// 1번
				a = i - 1;
				for(int j = a; j < str.length(); j++) {	// 2번
					arr[(int)carr[j] - 65]++;			// 2-1번
				}
				m = alpha[min(arr, carr[i - 1])];						// 2번
				arr[(int)m - 65]--;
				break;
			}
		}
		for(int i = 0; i < a; i++) {
			System.out.print(carr[i]);	// 3번
		}
		System.out.print(m);			// 4번
		for(int i = 0; i < 26; i++) {
			if(arr[i] != 0) {
				System.out.print(alpha[i]);
				arr[i]--;
				i--;
				continue;
			}
		}
	}
	static int min(int[] arr, char c) {
		int min = 26;
		arr[(int)c - 65]--;
		for(int i = 0; i < arr.length; i++) {
			if(arr[min] > arr[i] && arr[i] != 0)
				min = i;
		}

		arr[(int)c - 65]++;
		return min;
	}
}
