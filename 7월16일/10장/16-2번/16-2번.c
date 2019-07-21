#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>

void print(char arr[15][15]);
void reset_map(char arr[15][15]);
void mon_start(char monster1[15][15], char monster2[15][15], char mon1, char mon2);
int find_row(char arr[15][15], char target);
int find_col(char arr[15][15], char target);
void move_hero(char hero[15][15], int row_hero, int col_hero, char hero1);
void move_monster(char monster[15][15], char mon);

/////////////////////////////////////main start////////////////////////////////////

int main() {
	char arr[15][15];		//��ü �� �迭
	char hero[15][15] = { 0 };		//���ΰ� �̵� ��ǥ �迭
	char monster1[15][15] = { 0 }, monster2[15][15] = { 0 };		//���� �̵� ��ǥ �迭
	char hero1 = '#', mon1 = 'M', mon2 = 'M';
	int row_mon1, col_mon1, row_mon2, col_mon2, row_hero, col_hero;

	reset_map(arr);

	hero[0][0] = hero1;		//���ΰ� �ʱ���ġ
	mon_start(monster1, monster1, mon1, mon2);		//����1, 2 �ʱ���ġ
	
	row_hero = find_row(hero, hero1);		//���ΰ� �� ��ǥ
	col_hero = find_col(hero, hero1);		//���ΰ� �� ��ǥ
	row_mon1 = find_row(monster1, mon1);		//����1 �� ��ǥ
	col_mon1 = find_col(monster1, mon1);		//����1 �� ��ǥ
	row_mon2 = find_row(monster2, mon2);		//����2 �� ��ǥ
	col_mon2 = find_col(monster2, mon2);		//����2 �� ��ǥ

	arr[row_hero][col_hero] = hero1;
	arr[row_mon1][col_mon1] = mon1;
	arr[row_mon2][col_mon2] = mon2;

	print(arr);

	while (row_hero != 15 && col_hero != 15) {

		reset_map(arr);
		move_hero(hero, row_hero, col_hero, hero1);
		printf("d");
		move_monster(monster1, mon1);
		move_monster(monster2, mon2);

		row_hero = find_row(hero, hero1);		//���ΰ� �� ��ǥ
		col_hero = find_col(hero, hero1);		//���ΰ� �� ��ǥ
		row_mon1 = find_row(monster1, mon1);		//����1 �� ��ǥ
		col_mon1 = find_col(monster1, mon1);		//����1 �� ��ǥ
		row_mon2 = find_row(monster2, mon2);		//����2 �� ��ǥ
		col_mon2 = find_col(monster2, mon2);		//����2 �� ��ǥ


		//******************************************************************//


		arr[row_hero][col_hero] = hero1;	//���ΰ� ��ġ ����
		arr[row_mon1][col_mon1] = mon1;		//����1 ��ġ ����
		arr[row_mon2][col_mon2] = mon2;		//����2 ��ġ ����
		
		system("cls");
		print(arr);

		printf("���ΰ� ��ǥ [%d][%d]\n����1 ��ǥ [%d][%d]\n����2 ��ǥ [%d][%d]", row_hero, col_hero, row_mon1, col_mon1, row_mon2, col_mon2);

		if (row_hero == row_mon1 && col_hero == col_mon1) {
			printf("����!!");
			break;
		}
		if (row_hero == row_mon2 && col_hero == col_mon2) {
			printf("����!!");
			break;
		}
	}
}

/////////////////////////////////////main end////////////////////////////////////

void print(char arr[15][15]) {
	for (int i = 00; i < 15; i++) {
		for (int j = 0; j < 15; j++) {
			printf(" %c ", arr[i][j]);
		}
		printf("\n");
	}
}

void reset_map(char arr[15][15]) {
	for (int i = 0; i < 15; i++) {
		for (int j = 0; j < 15; j++) {
			arr[i][j] = '.';		//������� ��� '.'���� �����
		}
	}
	arr[14][14] = 'G';		//������ �ǹ� = �� ��ġ
}

void mon_start(char monster1[15][15], char monster2[15][15], char mon1, char mon2) {
	int n1, m1, n2, m2;
	while (1) {
		srand((unsigned)time(NULL));
		n1 = rand() % 15;
		m1 = rand() % 15;
		n2 = rand() % 15;
		m2 = rand() % 15;
		if (n1 != 14 || m1 != 14 && n2 != 14 || m2 != 14)		//���ʹ� ���� �ִ� �ڸ��� �� �� ����
			break;
		if (n1 < 3 || m1 < 3 || n2 < 3 || m2 < 3)		//������ �ʱ� ��ġ�� ������ 3�� �Ÿ� �̻� ������ �־�� �Ѵ�.
			break;
	}
	monster1[n1][m1] = mon1;
	monster2[n2][m2] = mon2;
}

int find_row(char arr[15][15], char target) {
	for (int i = 0; i < 15; i++) {
		for (int j = 0; j < 15; j++) {
			if (arr[i][j] == target)
				return i;
		}
	}
}

int find_col(char arr[15][15], char target) {
	for (int i = 0; i < 15; i++) {
		for (int j = 0; j < 15; j++) {
			if (arr[i][j] == target)
				return j;
		}
	}
}

void move_hero(char hero[15][15], int row_hero, int col_hero, char hero1) {
	int key;
	//���� ���� ���� �� �޾ƿ��⸸ �ϰ� �ٲ� ��ǥ���� �����ϴ°� ���� ���������� �޾Ƽ� ���ο� ���� �ȵǴ°� ������
	//row col ������ �޾ƿ��� ������ �Ǵµ� �Լ� �ȿ����� �ٲ�°� ����

	row_hero = find_row(hero, hero1);		//���ΰ� �� ��ǥ
	col_hero = find_col(hero, hero1);		//���ΰ� �� ��ǥ
	//�Լ��� ���鶧�� ���� ����Ǽ� ���̱⸸�ϴ°ſ��� �׷� �ٲﰪ�� �����ϴ��� ��ȯ�ؾ߰ڳ�	
	while (1) {
		key = _getch();
		if (key != 'W' && key != 'A' && key != 'S' && key != 'D' && key != 'w' && key != 'a' && key != 's' && key != 'd')
			continue;
		if (row_hero == 0 && key == 'w' || row_hero == 0 && key == 'W')
			continue;
		if (row_hero == 14 && key == 's' || row_hero == 14 && key == 'S')
			continue;
		if (col_hero == 0 && key == 'a' || col_hero == 0 && key == 'A')
			continue;
		if (col_hero == 14 && key == 'd' || col_hero == 14 && key == 'D')
			continue;
		switch (key) {
		case 'w':
		case 'W':
			row_hero -= 1;
			hero[row_hero][col_hero] = hero1;
			hero[row_hero + 1][col_hero] = '.';
			break;
		case 'a':
		case 'A':
			col_hero -= 1;
			hero[row_hero][col_hero] = hero1;
			hero[row_hero][col_hero + 1] = '.';
			break;
		case 's':
		case 'S':
			row_hero += 1;
			hero[row_hero][col_hero] = hero1;
			hero[row_hero - 1][col_hero] = '.';
			break;
		case 'd':
		case 'D':
			col_hero += 1;
			hero[row_hero][col_hero = hero1] = hero1;
			hero[row_hero][col_hero - 1] = '.';
			break;
		}
		if (1)
			break;
	}
}

void move_monster(char monster[15][15], char mon) {
	int row, col, n;

	row = find_row(monster, mon);		//���� �� ��ǥ
	col = find_col(monster, mon);		//���� �� ��ǥ
	while (1) {
		n = rand() % 4;
		if (row == 0 && n == 0)
			continue;
		if (row == 14 && n == 2)
			continue;
		if (col == 0 && n == 3)
			continue;
		if (col == 14 && n == 1)
			continue;
		switch (n) {
		case 0:
			row -= 1;
			break;
		case 1:
			col += 1;
			break;
		case 2:
			row += 1;
			break;
		case 3:
			col -= 1;
			break;
		}
		if (1)
			break;
	}
}