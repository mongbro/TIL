package codingtest01;

import java.util.Scanner;

class input{
	private int start;
	private int time;
	public input(int start, int time) {
		this.start = start;
		this.time = time;
	}
	public int getstart() {
		return this.start;
	}
	public int gettime() {
		return this.time;
	}
	public String gettoString(){
		String str = "[" + Integer.toString(start) + ", " + Integer.toString(time) + "]";
		return str;
	}
}
public class ct01 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.println("작업 갯수 >> ");
		int num = sc.nextInt();
		int start, time;
		input[] task = new input[num];
		int[] test1 = new int[3];
		int[][] test2 = new int[3][];
		for(int i = 0; i < 3; i++)
			test1[i] = i;
		
		for(int i = 0; i < num; i++) {
			start = sc.nextInt();
			time = sc.nextInt();
			task[i] = new input(start, time);
		}
		test2 = perm(test2, test1, 0, 3, 3);

		for(int i = 0; i < 3; i++)
			for(int j = 0; j < 3; j++)
				System.out.print(test2[i] + " ");
			System.out.println();
	}

	private static int MIN(int[] in) {
		int min = Integer.MAX_VALUE;
		int len = in.length;
		
		for (int i = 0; i < len; i++) {
			if(min > in[i]) {
				min = in[i];
			}
		}
		
		return min;
	}
	private static int sjf(input[] in) {		//in = [[0,3][1,9][2,6]]
		int result = 0;
		int len = in.length;
		int case_num = sumnum(len - 1);
		int[] sum = new int[case_num];			// sum[0] = in[0] + in[1] + in[2]
												// sum[1] = in[0] + in[2] + in[1]
		int[] index = new int[case_num];		//index = [1,2]
		
		for(int i = 0; i < case_num; i++) {
			index[i] = i + 1;
			sum[i] = 0;
		}
		
		for(int i = 0; i < case_num; i++) {
			sum[i] = in[0].gettime() * (case_num - i);
			
		}
		
		result = MIN(sum);
		return result;
	}
	private static int sumnum(int a) {
		int sum = 1;
		for(int i = 1; i < a; i++) 
			sum *= i;
		return sum;
	}
	private static int[][] perm(int[][] array, int[] arr, int depth, int n, int k) {
		static int ind = 0;
		if (depth == k) {
			// 한번 depth 가 k로 도달하면 사이클이 돌았음. 출력함. 
			for (int i = 0; i < arr.length; i++)
				System.out.print(arr[i] + " ");
			System.out.println();
			array[ind] = arr;
			ind++;
			return array; 
			} 
		for (int i = depth; i < n; i++) { 
			swap(arr, i, depth); 
			perm(array, arr, depth + 1, n, k); 
			swap(arr, i, depth); 
		}
		return array; 
	}
	private static void swap(int[] arr, int i, int j) { 
		int temp = arr[i]; 
		arr[i] = arr[j]; 
		arr[j] = temp; 
	}

}