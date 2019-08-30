#include<stdio.h>
#include<Windows.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>

//////////********문제점 : 1,0에서 0,0으로, 0,1에서 0,0으로, 13,0에서 14,0으로, 0,13에서 0,14로 이동할때 한텀 쉬었다가 인식됨********//////////
//////////********문제점 : 보드 밖으로 나가짐********//////////
//////////********아직 안한 예외처리 : 몬스터끼리 겹쳤을때 반응********//////////

void checkboard(char board[15][15], int* row1, int* col1, int* row2, int* col2, int* row3, int* col3);
void print_board(char board[15][15]);
void moveh(int* row1, int* col1);
void checkh(int row1, int col1, char c);
void movemr(int* row2, int* col2);
void movem(int* row2, int* col2);
void checkm(int row2, int col2, int n);

int main() {
	char board[15][15];
	int row1 = 0, col1 = 0, row2, col2, row3, col3;
	srand((unsigned)time(NULL));
	movemr(&row2, &col2);
	movemr(&row3, &col3);
	board[row1][col1] = '#';
	board[row2][col2] = 'M';
	board[row3][col3] = 'M';
	board[14][14] = 'G';
	checkboard(board, &row1, &col1, &row2, &col2, &row3, &col3);
	while (1) {
		system("cls");
		checkboard(board, &row1, &col1, &row2, &col2, &row3, &col3);
		print_board(board);
		printf("\n%d %d    %d %d     %d %d", row1, col1, row2, col2, row3, col3);
		moveh(&row1, &col1);
		movem(&row2, &col2);
		movem(&row3, &col3);

		if (row1 == 14 && col1 == 14) {
			printf("\n성공!");
			break;
		}
		if (row1 == row2 && col1 == col2|| row1 == row3 && col1 == col3) {
			printf("\n잡았다요놈");
			break;
		}
	}
}

void checkboard(char board[15][15], int* row1, int* col1, int* row2, int* col2, int* row3, int* col3) {
	for (int i = 0; i < 15; i++) {
		for (int j = 0; j < 15; j++) {
			board[i][j] = '.';
		}
	}
	board[*row1][*col1] = '#';
	board[*row2][*col2] = 'M';
	board[*row3][*col3] = 'M';
	board[14][14] = 'G';
}

void print_board(char board[15][15]) {
	for (int i = 0; i < 15; i++) {
		for (int j = 0; j < 15; j++) {
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}

void moveh(int* row1, int* col1) {
	char c;
	c=_getch();
	switch (c) {
	case 'w':
	case 'W':
		(*row1)--;
		break;
	case 'a':
	case 'A':
		(*col1)--;
		break;
	case 's':
	case 'S':
		(*row1)++;
		break;
	case 'd':
	case 'D':
		(*col1)++;
		break;	
	}
	checkh(*row1, *col1, c);
}

void checkh(int row1, int col1, char c) {
	if (row1 == 0 && c == 'w' || c == 'W')
		moveh(&row1, &col1);
	if (row1 == 14 && c == 's' || c == 'S')
		moveh(&row1, &col1);
	if (col1 == 0 && c == 'a' || c == 'A')
		moveh(&row1, &col1);
	if (col1 == 14 && c == 'd' || c == 'D')
		moveh(&row1, &col1);
}

void movemr(int* row2, int* col2) {
	*row2 = rand() % 15;
	*col2 = rand() % 15;
	if (*row2 < 3 || *col2 < 3 || *row2>12 || *col2>12)
		movemr(row2, col2);
}

void movem(int* row2, int* col2) {
	int n;
	n = rand() % 4;
	switch (n) {
	case 0:
		(*row2)--;
		break;
	case 1:
		(*col2)++;
		break;
	case 2:
		(*row2)++;
		break;
	case 3:
		(*col2)--;
		break;
	}
	checkm(*row2, *col2, n);
}

void checkm(int row2, int col2, int n) {
	if (row2 == 0 && n == 0)
		movem(&row2, &col2);
	if (row2 == 14 && n == 2)
		movem(&row2, &col2);
	if (col2 == 0 && n == 3)
		movem(&row2, &col2);
	if (col2 == 14 && n == 1)
		movem(&row2, &col2);
}