#include<stdio.h>
#include<windows.h>
#include<stdlib.h>

void print_board(char board[15][15]);			//화면 출력
void move(int n, int* row, int* col, char board[15][15]);			//벌레의 움직임
void checkh(int n, int* row, int* col, char board[15][15]);			//중복이 있는지 체크
int overline(int*row, int*col, char board[15][15]);			//배열 밖으로 나갔을때

int main() {
	char board[15][15];			//화면 = 15x15
	int n = 8, row = 7, col = 7;			//7,7은 *로 고정

	for (int i = 0; i < 15; i++) {
		for (int j = 0; j < 15; j++) {
			board[i][j] = '.';
		}
	}

	while (1) {
		board[row][col] = '*';			//벌레가 지나간/현재 있는 장소
		system("cls");			//이전 출력 내용 지우기
		print_board(board);
		printf("\n%d %d\n", row, col);
		printf("진행하시겠습니까?(종료 : -1) ");
		scanf("%d", &n);
		if (n == -1)
			break;

		move(n, &row, &col, board);			//벌레 움직이기
		if (overline(&row, &col, board) == 1) {			//벌레가 라인을 넘어가면		(함수에서 주소를 원하니까 주소를 넣어준다.)
			system("cls");
			print_board(board);
			printf("\n벌레가 보드의 밖으로 나갔습니다!");
			break;
		}
	}

	return 0;
}

void print_board(char board[15][15]) {
	for (int i = 0; i < 15; i++) {
		for (int j = 0; j < 15; j++) {
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}

void move(int n, int* row, int* col, char board[15][15]) {
	n = rand() % 8;

	switch (n) {
	case 0:
		(*row)--;			//포인터를 증감시키려면 괄호를 씌워줘야한다!!!!!!!!!!!!!!!!!!!!  <====   ***************이거 중요*******************
		break;
	case 1:
		(*row)--;
		(*col)++;
		break;
	case 2:
		(*col)++;
		break;
	case 3:
		(*row)++;
		(*col)++;
		break;
	case 4:
		(*row)++;
		break;
	case 5:
		(*row)++;
		(*col)--;
		break;
	case 6:
		(*row)++;
		break;
	case 7:
		(*row)--;
		(*col)--;
		break;
	}
	checkh(n, row, col, board);			//check함수에서도 *row와 *col를 원하는데 move함수 안에서 이미 주소를 호출해온 것이기에 그냥 row와 col만 써주면 된다.
}

void checkh(int n, int* row, int* col, char board[15][15]) {
	if (board[*row][*col] == '*') {			//이미 벌레가 지나간 자리라면
		switch(n) {
		case 0:
			(*row)++;			//포인터를 증감시키려면 괄호를 씌워줘야한다!!!!!!!!!!!!!!!!!!!!  <====   ***************이거 중요*******************
			break;
		case 1:
			(*row)++;
			(*col)--;
			break;
		case 2:
			(*col)--;
			break;
		case 3:
			(*row)--;
			(*col)--;
			break;
		case 4:
			(*row)--;
			break;
		case 5:
			(*row)--;
			(*col)++;
			break;
		case 6:
			(*row)--;
			break;
		case 7:
			(*row)++;
			(*col)++;
			break;
		}
		move(n, row, col, board);			//원래 자리로 옮긴다음 다시 move함수 호출
	}
}

int overline(int* row, int* col, char board[15][15]) {
	if (*row >= 15 || *col >= 15 || *row < 0 || *col < 0) 
		return 1;
	else
		return 0;
}