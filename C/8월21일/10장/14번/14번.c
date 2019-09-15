#include<stdio.h>
#include<windows.h>
#include<stdlib.h>

void print_board(char board[15][15]);			//ȭ�� ���
void move(int n, int* row, int* col, char board[15][15]);			//������ ������
void checkh(int n, int* row, int* col, char board[15][15]);			//�ߺ��� �ִ��� üũ
int overline(int*row, int*col, char board[15][15]);			//�迭 ������ ��������

int main() {
	char board[15][15];			//ȭ�� = 15x15
	int n = 8, row = 7, col = 7;			//7,7�� *�� ����

	for (int i = 0; i < 15; i++) {
		for (int j = 0; j < 15; j++) {
			board[i][j] = '.';
		}
	}

	while (1) {
		board[row][col] = '*';			//������ ������/���� �ִ� ���
		system("cls");			//���� ��� ���� �����
		print_board(board);
		printf("\n%d %d\n", row, col);
		printf("�����Ͻðڽ��ϱ�?(���� : -1) ");
		scanf("%d", &n);
		if (n == -1)
			break;

		move(n, &row, &col, board);			//���� �����̱�
		if (overline(&row, &col, board) == 1) {			//������ ������ �Ѿ��		(�Լ����� �ּҸ� ���ϴϱ� �ּҸ� �־��ش�.)
			system("cls");
			print_board(board);
			printf("\n������ ������ ������ �������ϴ�!");
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
		(*row)--;			//�����͸� ������Ű���� ��ȣ�� ��������Ѵ�!!!!!!!!!!!!!!!!!!!!  <====   ***************�̰� �߿�*******************
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
	checkh(n, row, col, board);			//check�Լ������� *row�� *col�� ���ϴµ� move�Լ� �ȿ��� �̹� �ּҸ� ȣ���ؿ� ���̱⿡ �׳� row�� col�� ���ָ� �ȴ�.
}

void checkh(int n, int* row, int* col, char board[15][15]) {
	if (board[*row][*col] == '*') {			//�̹� ������ ������ �ڸ����
		switch(n) {
		case 0:
			(*row)++;			//�����͸� ������Ű���� ��ȣ�� ��������Ѵ�!!!!!!!!!!!!!!!!!!!!  <====   ***************�̰� �߿�*******************
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
		move(n, row, col, board);			//���� �ڸ��� �ű���� �ٽ� move�Լ� ȣ��
	}
}

int overline(int* row, int* col, char board[15][15]) {
	if (*row >= 15 || *col >= 15 || *row < 0 || *col < 0) 
		return 1;
	else
		return 0;
}