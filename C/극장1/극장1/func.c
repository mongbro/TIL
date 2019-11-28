#include<stdio.h>
#include<windows.h>
#include<conio.h>
#include<ctype.h>

int menu() {
	int a;
	extern int log;
	while (1) {
		system("cls");
		printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■\n\n");
		if (log == 0)
			printf("                                           로그인 안됨\n");
		else
			printf("                                             로그인 됨\n");
		printf("1. 예약\n\n");
		printf("2. 예약 취소\n\n");
		printf("3. 좌석보기\n\n");
		printf("4. 로그인\n\n");
		printf("5. 로그아웃\n\n");
		printf("6. 회원가입\n\n");
		printf("7. 종료\n\n");
		printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		a = _getch();
		if (a == '1') {
			if (log == 1)
				return 1;
			else {
				printf("로그인이 필요합니다.\n");
				if (getch())
					continue;
			}
		}
		if (a == '2') {
			if (log == 1)
				return 2;
			else {
				printf("로그인이 필요합니다.\n");
				if (getch())
					continue;
			}
		}
		if (a == '3')
			return 3;
		if (a == '4')
			return 4;
		if (a == '5') {
			if (log == 1)
				return 5;
			else {
				printf("로그인이 필요합니다.\n");
				if (getch())
					continue;
			}
		}
		if (a == '6')
			return 6;
		if (a == '7')
			return 7;
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
		reservation_c(seats);
		system("cls");
		seat(seats);
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
		deservation_c(seats);
		system("cls");
		seat(seats);
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
	char c1, c2;

	while (1) {
		system("cls");
		seat(seats);
		printf("예약할 행을 선택해주세요.(뒤로가기는 b) : ");
		c1 = _getch();
		if (c1 == 'b') {
			printf("\n");
			break;
		}
		row = c1 - 48;
		printf("\n");
		if (row > 10) {
			printf("1~10 사이에서 선택해주세요.\n");
			if(getch())
				continue;
		}
		system("cls");
		printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("    | 1. | 2. | 3. | 4. | 5. | 6. | 7. | 8. | 9. | 10.\n");
		printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
		printf("%d. ", row);
		for (int j = 0; j < 10; j++) {
			printf(" |  %d", seats[row-1][j]);
		}
		printf("\nㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
		printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("예약할 열을 선택해주세요.(뒤로가기는 b) : ");
		c2 = _getch();
		if (c2 == 'b') {
			printf("\n");
			break;
		}
		col = c2 - 48;
		printf("\n");
		if (col > 10) {
			printf("1~10 사이에서 선택해주세요.\n");
			if (getch())
				continue;
		}
		else {
			if (seats[row - 1][col - 1] == 0) {
				seats[row - 1][col - 1] = 1;
				break;
			}
			if (seats[row - 1][col - 1] == 1) {
				printf("이미 예약이 되어있는 자리입니다. 다른 자리를 선택해주세요.\n");
				if (getch())
					continue;
			}
			else
				continue;
		}
	}
}

void deservation_c(int seats[][10]) {
	int row, col;
	char c1, c2;

	while (1) {
		system("cls");
		seat(seats);
		printf("취소할 행을 선택해주세요.(뒤로가기는 -1) : ");
		c1 = _getch();
		if (c1 == 'b') {
			printf("\n");
			break;
		}
		row = c1 - 48;
		if (row > 10) {
			printf("1~10 사이에서 선택해주세요.\n");
			continue;
		}
		system("cls");
		printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("    | 1. | 2. | 3. | 4. | 5. | 6. | 7. | 8. | 9. | 10.\n");
		printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
		printf("%d. ", row);
		for (int j = 0; j < 10; j++) {
			printf(" |  %d", seats[row - 1][j]);
		}
		printf("\nㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
		printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("취소할 열을 선택해주세요.(뒤로가기는 -1) : ");
		c2 = _getch();
		if (c2 == 'b') {
			printf("\n");
			break;
		}
		col = c2 - 48;
		printf("\n");
		if (col > 10) {
			printf("1~10 사이에서 선택해주세요.\n");
			if(getch())
				continue;
		}
		else {
			if (seats[row - 1][col - 1] == 1) {
				seats[row - 1][col - 1] = 0;
				break;
			}
			if (seats[row - 1][col - 1] == 0) {
				printf("예약되어있지 않은 자리입니다. 다른 자리를 선택해주세요.\n");
				if (getch())
					continue;
			}
			else
				continue;
		}
	}
}

void print_seat(int seats[][10]) {
	while (1) {
		system("cls");
		seat(seats);
		printf("좌석보기를 끝내시려면 아무키나 누르세요.\n");
		if (getch())
			break;
	}
}
