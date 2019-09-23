#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>		//_getch ������ �������

void position_mon(char arr[15][15], char mon1, char mon2);		//������ �ʱ� ��ġ
void move_mon(char mon, char arr[15][15]);		//������ ��ġ �̵�
void move_user(char arr[15][15], char key, char user);		//���ΰ��� ��ġ �̵�
void print(char arr[15][15]);
int find_row(char arr[15][15], char target);		//�迭�� ���� ã�� �Լ�
int find_col(char arr[15][15], char target);		//�迭�� ���� ã�� �Լ�

//**********************************�����Լ� �������******************************************//

int main() {
	char arr[15][15], mon1 = 'M', mon2 = 'm', user = '#', key = 'a';
	int n, m;
	for (int i = 0; i < 15; i++) {
		for (int j = 0; j < 15; j++) {		//�� ������ �� �� ����
			arr[i][j] = '.';
		}
	}
	arr[0][0] = user;		//���ΰ��� �ʱ� ��ġ
	arr[14][14] = 'G';		//���� ��ġ
	position_mon(arr, mon1, mon2);		//���� �ʱ� ��ġ
	print(arr);		//�ʱ� �� ���
	while (arr[14][14] != user) {		//���ΰ��� �ݿ� �����ϸ� ����
		int row_user, col_user, row_m1, col_m1, row_m2, col_m2;

		row_user = find_row(arr, user);		//���ΰ��� �� ��ġ
		col_user = find_col(arr, user);		//���ΰ��� �� ��ġ
		row_m1 = find_row(arr, mon1);		//����1�� �� ��ġ
		col_m1 = find_col(arr, mon1);		//����1�� �� ��ġ
		row_m2 = find_row(arr, mon2);		//����2�� �� ��ġ
		col_m2 = find_col(arr, mon2);		//����2�� �� ��ġ

		move_user(arr, key, user);//-----------------------------------------------------
		move_mon(mon1, arr);			//����1 �̵�
		move_mon(mon2, arr);			//����2 �̵�
		if (row_m1 == row_m2 && col_m1 == col_m2) {		//����1�� ����2�� ��ġ�� �ٽ� �̵�
			mon1 = mon2;
			move_mon(mon1, arr);		//����1 �̵�
			move_mon(mon2, arr);		//����2 �̵�
		}
		system("cls");		//********�ԷµǸ� ȭ�� ����� �ٲ� ȭ�� �ٽ� ���************
		print(arr);		//----------------------------------------------------------------

		if (row_m1 == row_user && col_m1 == col_user)		//���ΰ��� ����1�� ��ǥ�� ��ĥ�� ��, ����1���� �������� ����
			break;
		if (row_m2 == row_user && col_m2 == col_user)		//���ΰ��� ����2�� ��ǥ�� ��ĥ�� ��, ����2���� �������� ����
			break;
	}
}

//**********************************�����Լ� �������******************************************//

void position_mon(char arr[15][15], char mon1, char mon2) {
	int n1, m1, n2, m2;		//����1(n1, m1)�� 2(n2, m2)�� �ʱ� ��ǥ

	while (1) {
		srand((unsigned)time(NULL));
		n1 = rand() % 15;
		m1 = rand() % 15;
		n2 = rand() % 15;		//���� �θ����� �ʱ� ��ġ ��ǥ�� ������ ����
		m2 = rand() % 15;
		if (n1 != 14 || m1 != 14 && n2 != 14 || m2 != 14)		//���ʹ� ���� �ִ� �ڸ��� �� �� ����
			break;
		if (n1 < 3 || m1 < 3 || n2 < 3 || m2 < 3)		//������ �ʱ� ��ġ�� ������ 3�� �Ÿ� �̻� ������ �־�� �Ѵ�.
			break;
	}
	arr[n1][m1] = mon1;
	arr[n2][m2] = mon2;
}

void print(char arr[15][15]) {
	for (int i = 0; i < 15; i++) {
		for (int j = 0; j < 15; j++) {
			printf(" %c ", arr[i][j]);
		}
		printf("\n");
	}
}

int find_row(char arr[15][15], char target) {
	int n;
	for (int i = 0; i < 15; i++) {
		for (int j = 0; j < 15; j++) {
			if (arr[i][j] == target) {
				return n = i;		//Ÿ���� �� ã�Ƽ� ��ȯ
			}
		}
	}
}

int find_col(char arr[15][15], char target) {
	int m;
	for (int i = 0; i < 15; i++) {
		for (int j = 0; j < 15; j++) {
			if (arr[i][j] == target) {
				return m = j;		//Ÿ���� ���� ã�Ƽ� ��ȯ
			}
		}
	}
}

void move_user(char arr[15][15], char key, char user) {
	int n, m;
	while (1) {
		key = _getch();		//�ǽð� �Է� ó��
		if (key != 'D' && key != 'S' && key != 'A' && key != 'W' && key != 'd' && key != 's' && key != 'a' && key != 'w')
			continue;		//wasd�� �ƴϸ� �ȿ����ϰŴ�
		n = find_row(arr, user);
		m = find_col(arr, user);
		if (n == 0 && key == 'w')		//���ʳ��� ������ �������� �̵� ����
			continue;
		if (n == 14 && key == 's')		//�����ʳ��� ������ ���������� �̵� ����
			continue;
		if (m == 0 && key == 'a')		//���ʳ��� ������ �������� �̵� ����
			continue;
		if (m == 14 && key == 'd')		//�Ʒ��� ���� ������ �Ʒ������� �̵� ����
			continue;
		switch (key) {
		case 'w':
		case 'W':
			arr[n][m] = '.';			//w�Է½� ���ΰ��� ��ġ�� ���� ��ĭ �̵��Ѵ�. ������ �ִ� �ڸ��� .���� ���
			arr[n - 1][m] = user;
			break;
		case 'a':
		case 'A':
			arr[n][m] = '.';		//a�Է½� ���ΰ��� ��ġ�� ���ʷ� ��ĭ �̵��Ѵ�. ������ �ִ� �ڸ��� .���� ���
			arr[n][m - 1] = user;
			break;
		case 's':
		case 'S':
			arr[n][m] = '.';		//s�Է½� ���ΰ��� ��ġ�� �Ʒ��� ��ĭ �̵��Ѵ�. ������ �ִ� �ڸ��� .���� ���
			arr[n + 1][m] = user;
			break;
		case 'd':
		case 'D':
			arr[n][m] = '.';		//d�Է½� ���ΰ��� ��ġ�� �����ʷ� ��ĭ �̵��Ѵ�. ������ �ִ� �ڸ��� .���� ���
			arr[n][m + 1] = user;
			break;
		}
		if (1)
			break;
	}
}

void move_mon(char mon, char arr[15][15]) {
	int d, n, m;		//d�� �̵��ϴ� ���� n�� ������ �� ��ġ, m�� ������ �� ��ġ
	while (1) {
		d = rand() % 4;		//4���� ����� ���� ����
		n = find_row(arr, mon);		//���Ͱ� �ִ� ��
		m = find_col(arr, mon);		//���Ͱ� �ִ� ��
		if (n == 0 && d == 0)		//���� ���� ������ �������� �̵� ����
			continue;
		if (n == 14 && d == 2)		//������ ���� ������ ���������� �̵� ����
			continue;
		if (m == 0 && d == 3)		//���� ���� ������ �������� �̵� ����
			continue;
		if (m == 14 && d == 1)		//�Ʒ��� ���� ������ �Ʒ������� �̵� ����
			continue;
		if (n == 14 && m == 14)		//���ʹ� �ݿ� ���� ����
			continue;
		switch (d) {
		case 0:
			arr[n][m] = '.';		//���� �̵�
			arr[n - 1][m] = mon;
			break;
		case 1:
			arr[n][m] = '.';		//�������� �̵�
			arr[n][m + 1] = mon;
			break;
		case 2:
			arr[n][m] = '.';		//�Ʒ��� �̵�
			arr[n + 1][m] = mon;
			break;
		case 3:
			arr[n][m] = '.';		//���������� �̵�
			arr[n][m - 1] = mon;
			break;
		}
		if (1)		//�������� ����� �ݺ�
			break;
	}
}