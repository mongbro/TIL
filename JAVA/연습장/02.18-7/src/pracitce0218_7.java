import java.util.Scanner;

public class pracitce0218_7 {
	public static void main(String[] args) {
		int score[][] = new int[2][4];
		int sum = 0, check = 0;
		Scanner scanner = new Scanner(System.in);
		for(int i = 0; i < score.length; i++) {
			for(int j = 0; j < score[i].length; j++) {
				score[i][j] = scanner.nextInt();
				sum += score[i][j];
			}
		}
		for(int i = 0; i < score.length; i++) {
			for(int j = 0; j < score[i].length; j++) {
				System.out.print(score[i][j] + ", ");
				check++;
				if(check == 2) {
					check = 0;
					System.out.println();
				}
			}
		}
		System.out.println("ЦђБе : " + (double)sum / (score.length * score[0].length));
	}
}