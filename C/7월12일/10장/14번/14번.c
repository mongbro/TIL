#include<stdio.h>
#include<stdlib.h>
#include<time.h>			//*************************수정하기************************//
void print_star(char a[20][20], int i, int j);

int main() {
	char arr[20][20], op;
	int rand_num, n = 10, m = 10;
	
	for (int i = 0; i < 20; i++) {
		for (int j = 0; j < 20; j++) {
			arr[i][j] = '.';
		}
	}
	arr[n][m] = '*';
	for (int i = 0; i < 20; i++) {
		for (int j = 0; j < 20; j++) {
			printf(" %c", arr[i][j]);
		}
		printf("\n");
	}
	while (1) {
		printf("진행?(Y or N) ");
		scanf_s("\n%c", &op, 1);
		if (op != 'y' && op != 'Y' && op != 'n' && op != 'N') {
			printf("입력은 Y 또는 N\n");
			continue;
		}
		else if (op == 'n' || op == 'N')
			break;
		do{
			if (op == 'y' || op == 'Y') {
				srand((unsigned)time(NULL));
				rand_num = rand() % 8;
				switch (rand_num) {
				case 0:
					arr[n - 1][m] = arr[n][m];
					n = n - 1;
					break;
				case 1:
					arr[n - 1][m + 1] = arr[n][m];
					n = n - 1, m = m + 1;
					break;
				case 2:
					arr[n][m + 1] = arr[n][m];
					m = m + 1;
					break;
				case 3:
					arr[n + 1][m + 1] = arr[n][m];
					n = n + 1, m = m + 1;
					break;
				case 4:
					arr[n + 1][m] = arr[n][m];
					n = n + 1;
					break;
				case 5:
					arr[n + 1][m - 1] = arr[n][m];
					n = n + 1, m = m - 1;
					break;
				case 6:
					arr[n][m - 1] = arr[n][m];
					m = m - 1;
					break;
				case 7:
					arr[n - 1][m - 1] = arr[n][m];
					n = n - 1, m = m - 1;
					break;
				}
			}
		}while (arr[n][m] != '*');
		print_star(arr, n, m);
	}
}

void print_star(char a[20][20], int i, int j) {
	for (int i = 0; i < 20; i++) {
		for (int j = 0; j < 20; j++) {
			printf(" %c", a[i][j]);
		}
		printf("\n");
	}
}