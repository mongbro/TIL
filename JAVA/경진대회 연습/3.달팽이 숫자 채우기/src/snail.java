import java.util.Scanner;

public class snail {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n, num = 1, row, col, count = 0;
		int direction = 1;			// 1 : 왼쪽으로     2: 아래로     3 : 오른쪽으로    4 : 위로
		System.out.print("행렬의 크기 >> ");
		n = sc.nextInt();
		row = 0;
		col = 0;
		int [][] arr = new int[n][n];

		while(true) {
			count = 0;
			if(direction >= 5)
				direction -= 4;
			if(direction == 1) {
				if(col < n - 1 && arr[row][col + 1] == 0) {
					arr[row][col++] = num++;
					count++;
				}
				else
					direction++;
			}
			if(direction == 2) {
				if(row < n - 1 && arr[row + 1][col] == 0) {
					arr[row++][col] = num++;
					count++;
				}
				else
					direction++;
			}
			if(direction == 3) {
				if(col > 0 && arr[row][col - 1] == 0) {
					arr[row][col--] = num++;
					count++;
				}
				else
					direction++;
			}
			if(direction == 4) {
				if(row > 0 && arr[row][col] == 0) {
					arr[row--][col] = num++;
					count++;
				}
				else {
					direction++;
					row++;
					if(col < n - 1 && arr[row][col + 1] == 0) {
						num--;
						count++;
					}
				}
			}

			if(count == 0)
				break;
		}

		for(int i = 0; i < n; i++) {
			for(int j = 0; j < n; j++) 
				System.out.printf("%2d ", arr[i][j]);
			System.out.println();
		}
		
	}

}
