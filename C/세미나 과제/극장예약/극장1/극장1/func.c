#include<stdio.h>
#include<windows.h>
#include<conio.h>
#include<ctype.h>

int menu() {
	int a;
	while (1) {
		system("cls");
		printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■\n\n");
		printf("1. 예약\n\n");
		printf("2. 예약 취소\n\n");
		printf("3. 좌석보기\n\n");
		printf("4. 종료\n\n");
		printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		a = _getch();
		if (a == '1')
			return 1;
		if (a == '2')
			return 2;
		if (a == '3')
			return 3;
		if (a == '4')
			return 4;
		else
			continue;
	}
}

void seat(int seats[][10]) {
	printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	printf("    | 1. | 2. | 3. | 4. | 5. | 6. | 7. | 8. | 9. | 10.\n");
	printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
	for (int i = 0; i < 10; i++) {
		printf("%2d.", i + 1);
		for (int j = 0; j < 10; j++) {
			printf(" |  %d", seats[i][j]);
		}
		printf("\nㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
	}

	printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
}

void reservation(int seats[][10]) {
	extern void reservation_c(int seats[][10]);
	char op;
	while (1) {
		system("cls");
		seat(seats);
		reservation_c(seats);
		printf("예약을 끝내시겠습니까? Y or N\n");
		op = _getch();
		if (op == 'y' || op == 'Y')
			break;
		if (op == 'n' || op == 'N')
			continue;
	}
}

void deservation(int seats[][10]) {
	extern void deservation_c(int seats[][10]);
	char op;
	while (1) {
		system("cls");
		seat(seats);
		deservation_c(seats);
		printf("예약 취소를 끝내시겠습니까? Y or N\n");
		op = _getch();
		if (op == 'y' || op == 'Y')
			break;
		if (op == 'n' || op == 'N')
			continue;
	}
}

void reservation_c(int seats[][10]) {
	int row, col;

	while (1) {
		printf("몇 행 몇 열에 예약하시겠습니까?(ex. 1 1      3 5)(뒤로가기는 -1 -1) : ");
		scanf("\n%d%d", &row, &col);
		if (row==-1) {
			break;
		}
		if (row > 10 || col>10) {
			printf("1~10 사이에서 선택해주세요.\n");
			continue;
		}
		else {
			if (seats[row - 1][col - 1] == 0) {
				seats[row - 1][col - 1] = 1;
				break;
			}
			if (seats[row - 1][col - 1] == 1) {
				printf("이미 예약이 되어있는 자리입니다. 다른 자리를 선택해주세요.\n");
				continue;
			}
			else
				continue;
		}
	}
}

void deservation_c(int seats[][10]) {
	int row, col;

	while (1) {
		printf("몇 행 몇 열을 취소하시겠습니까?(ex. 1 1      3 5)(뒤로가기는 -1 -1) : ");
		scanf("\n%d%d", &row, &col);
		if (row == -1) {
			break;
		}
		if (row > 10 || col > 10) {
			printf("1~10 사이에서 선택해주세요.\n");
			continue;
		}
		if (seats[row - 1][col - 1] == 1) {
			seats[row - 1][col - 1] = 0;
			break;
		}
		if (seats[row - 1][col - 1] == 0) {
			printf("예약되어있지 않은 자리입니다. 다른 자리를 선택해주세요.\n");
			continue;
		}
		else
			continue;
	}
}

void print_seat(int seats[][10]) {
	char op;
	while (1) {
		system("cls");
		seat(seats);
		printf("좌석보기를 끝내시겠습니까? Y or N\n");
		op = _getch();
		if (op == 'y' || op == 'Y')
			break;
		if (op == 'n' || op == 'N')
			continue;
	}
}