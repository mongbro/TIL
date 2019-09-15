#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>

////////////////////////////////////////////////////// 모르겠다~~~~ 당분간 포기다~~~~ ////////////////////////////////////////////////////////////////////

void print(char arr[15][15]);
void reset_map(char arr[15][15]);
void mon_start(char monster1[15][15], char monster2[15][15], char mon1, char mon2);
int find_row(char arr[15][15], char target);
int find_col(char arr[15][15], char target);
void move_hero(char hero[15][15], int row_hero, int col_hero, char hero1);
void move_monster(char monster1[15][15], char mon1, int row_mon1, int col_mon1, char monster2[15][15], char mon2, int row_mon2, int col_mon2);

/////////////////////////////////////main start////////////////////////////////////

int main() {
	char arr[15][15];		//전체 맵 배열
	char hero[15][15] = { 0 };		//주인공 이동 좌표 배열
	char monster1[15][15] = { 0 }, monster2[15][15] = { 0 };		//몬스터 이동 좌표 배열
	char hero1 = '#', mon1 = 'M', mon2 = 'm';
	int row_mon1, col_mon1, row_mon2, col_mon2, row_hero, col_hero;

	reset_map(arr);

	hero[0][0] = hero1;		//주인공 초기위치
	mon_start(monster1, monster1, mon1, mon2);		//몬스터1, 2 초기위치
	
	row_hero = find_row(hero, hero1);		//주인공 행 좌표
	col_hero = find_col(hero, hero1);		//주인공 열 좌표
	row_mon1 = find_row(monster1, mon1);		//몬스터1 행 좌표
	col_mon1 = find_col(monster1, mon1);		//몬스터1 열 좌표
	row_mon2 = find_row(monster2, mon2);		//몬스터2 행 좌표
	col_mon2 = find_col(monster2, mon2);		//몬스터2 열 좌표

	arr[row_hero][col_hero] = hero1;
	arr[row_mon1][col_mon1] = mon1;
	arr[row_mon2][col_mon2] = mon2;

	print(arr);

 	while (row_hero != 14 && col_hero != 14) {

		reset_map(arr);
		move_hero(hero, row_hero, col_hero, hero1);
		printf("d");
		move_monster(monster1, mon1, row_mon1, col_mon1, monster2, mon2, row_mon2, col_mon2);

		row_hero = find_row(hero, hero1);		//주인공 행 좌표
		col_hero = find_col(hero, hero1);		//주인공 열 좌표
		row_mon1 = find_row(monster1, mon1);		//몬스터1 행 좌표
		col_mon1 = find_col(monster1, mon1);		//몬스터1 열 좌표
		row_mon2 = find_row(monster2, mon2);		//몬스터2 행 좌표
		col_mon2 = find_col(monster2, mon2);		//몬스터2 열 좌표


		//******************************************************************//


		arr[row_hero][col_hero] = hero1;	//주인공 위치 갱신
		arr[row_mon1][col_mon1] = mon1;		//몬스터1 위치 갱신
		arr[row_mon2][col_mon2] = mon2;		//몬스터2 위치 갱신
		
		system("cls");
		print(arr);

		printf("주인공 좌표 [%d][%d]\n몬스터1 좌표 [%d][%d]\n몬스터2 좌표 [%d][%d]", row_hero, col_hero, row_mon1, col_mon1, row_mon2, col_mon2);

		if (row_hero == row_mon1 && col_hero == col_mon1) {
			printf("실패!!");
			break;
		}
		if (row_hero == row_mon2 && col_hero == col_mon2) {
			printf("실패!!");
			break;
		}
	}
	if (row_hero == 14 && col_hero == 14)
		printf("축하합니다!!");
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
			arr[i][j] = '.';		//빈공간은 모두 '.'으로 만든다
		}
	}
	arr[14][14] = 'G';		//오른쪽 맨밑 = 금 위치
}

void mon_start(char monster1[15][15], char monster2[15][15], char mon1, char mon2) {
	int n1, m1, n2, m2;
	while (1) {
		srand((unsigned)time(NULL));
		n1 = rand() % 15;
		m1 = rand() % 15;
		n2 = rand() % 15;
		m2 = rand() % 15;
		if (n1 != 14 || m1 != 14 && n2 != 14 || m2 != 14)		//몬스터는 금이 있는 자리에 갈 수 없다
			break;
		if (n1 < 3 || m1 < 3 || n2 < 3 || m2 < 3)		//몬스터의 초기 위치는 유저와 3의 거리 이상 떨어져 있어야 한다.
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

	row_hero = find_row(hero, hero1);		//주인공 행 좌표
	col_hero = find_col(hero, hero1);		//주인공 열 좌표

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
			hero[row_hero][col_hero] = hero1;
			hero[row_hero][col_hero - 1] = '.';
			break;
		}
		if (1)
			break;
	}
}

void move_monster(char monster1[15][15], char mon1, int row_mon1, int col_mon1, char monster2[15][15], char mon2, int row_mon2, int col_mon2) {
	int n, m;

	row_mon1 = find_row(monster1, mon1);		//몬스터 행 좌표
	col_mon1 = find_col(monster1, mon1);		//몬스터 열 좌표
	row_mon2 = find_row(monster2, mon2);		//몬스터 행 좌표
	col_mon2 = find_col(monster2, mon2);		//몬스터 열 좌표
	while (1) {
		srand((unsigned)time(NULL));
		n = rand() % 4;
		if (row_mon1 == 0 && n == 0)
			continue;
		if (row_mon1 == 14 && n == 2)
			continue;
		if (col_mon1 == 0 && n == 3)
			continue;
		if (col_mon1 == 14 && n == 1)
			continue;
		m = rand() % 4;
		if (row_mon2 == 0 && m == 0)
			continue;
		if (row_mon2 == 14 && m == 2)
			continue;
		if (col_mon2 == 0 && m == 3)
			continue;
		if (col_mon2 == 14 && m == 1)
			continue;
		switch (n) {
		case 0:
			row_mon1 -= 1;
			monster1[row_mon1][col_mon1] = mon1;
			monster1[row_mon1 + 1][col_mon1] = '.';
			break;
		case 1:
			col_mon1 += 1;
			monster1[row_mon1][col_mon1] = mon1;
			monster1[row_mon1][col_mon1 - 1] = '.';
			break;
		case 2:
			row_mon1 += 1;
			monster1[row_mon1][col_mon1] = mon1;
			monster1[row_mon1 - 1][col_mon1] = '.';
			break;
		case 3:
			col_mon1 -= 1;
			monster1[row_mon1][col_mon1] = mon1;
			monster1[row_mon1][col_mon1 + 1] = '.';
			break;
		}
		switch (m) {
		case 0:
			row_mon2 -= 1;
			monster2[row_mon2][col_mon2] = mon2;
			monster2[row_mon2 + 1][col_mon2] = '.';
			break;
		case 1:
			col_mon2 += 1;
			monster2[row_mon2][col_mon2] = mon2;
			monster2[row_mon2][col_mon2 - 1] = '.';
			break;
		case 2:
			row_mon2 += 1;
			monster2[row_mon2][col_mon2] = mon2;
			monster2[row_mon2 - 1][col_mon2] = '.';
			break;
		case 3:
			col_mon2 -= 1;
			monster2[row_mon2][col_mon2] = mon2;
			monster2[row_mon2][col_mon2 + 1] = '.';
			break;
		}
		if (1)
			break;
	}
}