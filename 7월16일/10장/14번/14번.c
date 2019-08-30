#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>

void print(char a[15][15]);	//15 * 15 배열을 출력하는 함수
void rand_number(char a[15][15], int b, int n, int m);	//8개의 난수를 결정 함수
int check_num(char a[15][15], int b, int n, int m);	//중복 검사하는 함수
int over_line(char a[15][15], int b, int n, int m);	//배열의 범위를 벗어나는 경우를 검사하는 함수
int endf(char [15][15], int b, int n, int m);	//종료조건

int main() {
	char arr[15][15], op;
	int rand_num=0, n, m;
	for (int i = 0; i < 15; i++) {
		for (int j = 0; j < 15; j++) {
			arr[i][j] = '.';	//출력되는 배열의 값을 모두 '.'으로 한다.
		}
	}
	n = 7, m = 7;	//출력배열의 시작점
	arr[n][m] = '*';	//시작점은 *로 출력한다.
	print(arr);
	while (1) {
		while (1) {
			printf("진행하시겠습니까?(Y or N) ");
			scanf_s("\n%c", &op, 1);
			if (op == 'Y' || op == 'y' || op == 'N' || op == 'n')
				break;
			printf("입력은 Y 또는 N\n");
		}
		if (op == 'N' || op == 'n')
			break;
		system("cls");
		srand((unsigned)time(NULL));
		rand_number(arr, rand_num, n, m);	//벌레의 이동방향을 정한다.
		print(arr);
	}
}

void print(char a[15][15]) {
	for (int i = 0; i < 15; i++) {
		for (int j = 0; j < 15; j++) {
			printf(" %c ", a[i][j]);
		}
		printf("\n");
	}
}

void rand_number(char a[15][15], int b, int n, int m) {
	while (1) {
		b = rand() % 8;	//8개의 방향중 하나
		
		switch (b) {
		case 0:
			n -= 1;
			if (check_num(a, b, n, m) == 1) {	//이동한 곳이 이미 지나간 경로인지 검사
				if (over_line(a, b, n, m) == 1)	//배열의 범위를 벗어나는지 검사
					exit(1);
				break;
			}
			else
				continue;
		case 1:
			n -= 1, m += 1;
			if (check_num(a, b, n, m) == 1) {	//이동한 곳이 이미 지나간 경로인지 검사
				if (over_line(a, b, n, m) == 1)	//배열의 범위를 벗어나는지 검사
					exit(1);
				break;
			}
			else
				continue;
		case 2:
			m += 1;
			if (check_num(a, b, n, m) == 1) {	//이동한 곳이 이미 지나간 경로인지 검사
				if (over_line(a, b, n, m) == 1)	//배열의 범위를 벗어나는지 검사
					exit(1);
				break;
			}
			else
				continue;
		case 3:
			n += 1, m += 1;
			if (check_num(a, b, n, m) == 1) {	//이동한 곳이 이미 지나간 경로인지 검사
				if (over_line(a, b, n, m) == 1)	//배열의 범위를 벗어나는지 검사
					exit(1);
				break;
			}
			else
				continue;
		case 4:
			n += 1;
			if (check_num(a, b, n, m) == 1) {	//이동한 곳이 이미 지나간 경로인지 검사
				if (over_line(a, b, n, m) == 1)	//배열의 범위를 벗어나는지 검사
					exit(1);
				break;
			}
			else
				continue;
		case 5:
			n += 1, m -= 1;
			if (check_num(a, b, n, m) == 1) {	//이동한 곳이 이미 지나간 경로인지 검사
				if (over_line(a, b, n, m) == 1)	//배열의 범위를 벗어나는지 검사
					exit(1);
				break;
			}
			else
				continue;
		case 6:
			m -= 1;
			if (check_num(a, b, n, m) == 1) {	//이동한 곳이 이미 지나간 경로인지 검사
				if (over_line(a, b, n, m) == 1)	//배열의 범위를 벗어나는지 검사
					exit(1);
				break;
			}
			else
				continue;
		case 7:
			n -= 1, m -= 1;
			if (check_num(a, b, n, m) == 1) {	//이동한 곳이 이미 지나간 경로인지 검사
				if (over_line(a, b, n, m) == 1)	//배열의 범위를 벗어나는지 검사
					exit(1);
				break;
			}
			else
				continue;
		}
		if (endf(a, b, n, m) == 1)
			break;
	}
}

int check_num(char a[15][15], int b, int n, int m) {
	if (a[n][m] == '.') {
		a[n][m] = '*';
		return 1;
	}
	else {
		switch (b) {
		case 0:
			n += 1;
			break;
		case 1:
			n += 1, m -= 1;
			break;
		case 2:
			m -= 1;
			break;
		case 3:
			n -= 1, m -= 1;
			break;
		case 4:
			n -= 1;
			break;
		case 5:
			n -= 1, m += 1;
			break;
		case 6:
			m += 1;
			break;
		case 7:
			n += 1, m += 1;
			break;
		}
		return 0;
	}
}

int over_line(char a[15][15], int b, int n, int m) {
	if (n >= 15 || m >= 15 || n < 0 || m < 0) {
		rand_number(a, b, n, m);
		return 1;
	}
	else
		return 0;;
}

int endf(char a[15][15], int b, int n, int m) {
	if (check_num(a, b, n, m) == 1 || over_line(a, b, n, m) == 0)
		return 1;	//정상적일때 1을 반환하고 함수 종료
	else
		return 0;	//아닐때는 다시 반복
}