#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>		//_getch 포함한 헤더파일

void position_mon(char arr[15][15], char mon1, char mon2);		//몬스터의 초기 위치
void move_mon(char mon, char arr[15][15]);		//몬스터의 위치 이동
void move_user(char arr[15][15], char key, char user);		//주인공의 위치 이동
void print(char arr[15][15]);
int find_row(char arr[15][15], char target);		//배열의 행을 찾는 함수
int find_col(char arr[15][15], char target);		//배열의 열을 찾는 함수

//**********************************메인함수 여기부터******************************************//

int main() {
	char arr[15][15], mon1 = 'M', mon2 = 'm', user = '#', key = 'a';
	int n, m;
	for (int i = 0; i < 15; i++) {
		for (int j = 0; j < 15; j++) {		//맵 사이즈 및 빈 공간
			arr[i][j] = '.';
		}
	}
	arr[0][0] = user;		//주인공의 초기 위치
	arr[14][14] = 'G';		//금의 위치
	position_mon(arr, mon1, mon2);		//몬스터 초기 위치
	print(arr);		//초기 맵 출력
	while (arr[14][14] != user) {		//주인공이 금에 도달하면 종료
		int row_user, col_user, row_m1, col_m1, row_m2, col_m2;

		row_user = find_row(arr, user);		//주인공의 행 위치
		col_user = find_col(arr, user);		//주인공의 열 위치
		row_m1 = find_row(arr, mon1);		//몬스터1의 행 위치
		col_m1 = find_col(arr, mon1);		//몬스터1의 열 위치
		row_m2 = find_row(arr, mon2);		//몬스터2의 행 위치
		col_m2 = find_col(arr, mon2);		//몬스터2의 열 위치

		move_user(arr, key, user);//-----------------------------------------------------
		move_mon(mon1, arr);			//몬스터1 이동
		move_mon(mon2, arr);			//몬스터2 이동
		if (row_m1 == row_m2 && col_m1 == col_m2) {		//몬스터1과 몬스터2가 겹치면 다시 이동
			mon1 = mon2;
			move_mon(mon1, arr);		//몬스터1 이동
			move_mon(mon2, arr);		//몬스터2 이동
		}
		system("cls");		//********입력되면 화면 지우고 바뀐 화면 다시 출력************
		print(arr);		//----------------------------------------------------------------

		if (row_m1 == row_user && col_m1 == col_user)		//주인공과 몬스터1의 좌표가 겹칠때 즉, 몬스터1에게 잡혔을때 종료
			break;
		if (row_m2 == row_user && col_m2 == col_user)		//주인공과 몬스터2의 좌표가 겹칠때 즉, 몬스터2에게 잡혔을때 종료
			break;
	}
}

//**********************************메인함수 여기까지******************************************//

void position_mon(char arr[15][15], char mon1, char mon2) {
	int n1, m1, n2, m2;		//몬스터1(n1, m1)과 2(n2, m2)의 초기 좌표

	while (1) {
		srand((unsigned)time(NULL));
		n1 = rand() % 15;
		m1 = rand() % 15;
		n2 = rand() % 15;		//몬스터 두마리의 초기 위치 좌표는 난수로 생성
		m2 = rand() % 15;
		if (n1 != 14 || m1 != 14 && n2 != 14 || m2 != 14)		//몬스터는 금이 있는 자리에 갈 수 없다
			break;
		if (n1 < 3 || m1 < 3 || n2 < 3 || m2 < 3)		//몬스터의 초기 위치는 유저와 3의 거리 이상 떨어져 있어야 한다.
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
				return n = i;		//타겟의 행 찾아서 반환
			}
		}
	}
}

int find_col(char arr[15][15], char target) {
	int m;
	for (int i = 0; i < 15; i++) {
		for (int j = 0; j < 15; j++) {
			if (arr[i][j] == target) {
				return m = j;		//타겟의 열을 찾아서 반환
			}
		}
	}
}

void move_user(char arr[15][15], char key, char user) {
	int n, m;
	while (1) {
		key = _getch();		//실시간 입력 처리
		if (key != 'D' && key != 'S' && key != 'A' && key != 'W' && key != 'd' && key != 's' && key != 'a' && key != 'w')
			continue;		//wasd가 아니면 안움직일거다
		n = find_row(arr, user);
		m = find_col(arr, user);
		if (n == 0 && key == 'w')		//왼쪽끝에 있을때 왼쪽으로 이동 금지
			continue;
		if (n == 14 && key == 's')		//오른쪽끝에 있을때 오른쪽으로 이동 금지
			continue;
		if (m == 0 && key == 'a')		//위쪽끝에 있을때 위쪽으로 이동 금지
			continue;
		if (m == 14 && key == 'd')		//아래쪽 끝에 있을때 아래쪽으로 이동 금지
			continue;
		switch (key) {
		case 'w':
		case 'W':
			arr[n][m] = '.';			//w입력시 주인공의 위치를 위로 한칸 이동한다. 이전에 있던 자리는 .으로 출력
			arr[n - 1][m] = user;
			break;
		case 'a':
		case 'A':
			arr[n][m] = '.';		//a입력시 주인공의 위치를 왼쪽로 한칸 이동한다. 이전에 있던 자리는 .으로 출력
			arr[n][m - 1] = user;
			break;
		case 's':
		case 'S':
			arr[n][m] = '.';		//s입력시 주인공의 위치를 아래로 한칸 이동한다. 이전에 있던 자리는 .으로 출력
			arr[n + 1][m] = user;
			break;
		case 'd':
		case 'D':
			arr[n][m] = '.';		//d입력시 주인공의 위치를 오른쪽로 한칸 이동한다. 이전에 있던 자리는 .으로 출력
			arr[n][m + 1] = user;
			break;
		}
		if (1)
			break;
	}
}

void move_mon(char mon, char arr[15][15]) {
	int d, n, m;		//d는 이동하는 방향 n은 몬스터의 행 위치, m은 몬스터의 열 위치
	while (1) {
		d = rand() % 4;		//4가지 경우의 난수 생성
		n = find_row(arr, mon);		//몬스터가 있는 행
		m = find_col(arr, mon);		//몬스터가 있는 열
		if (n == 0 && d == 0)		//왼쪽 끝에 있을때 왼쪽으로 이동 금지
			continue;
		if (n == 14 && d == 2)		//오른쪽 끝에 있을때 오른쪽으로 이동 금지
			continue;
		if (m == 0 && d == 3)		//위쪽 끝에 있을때 위쪽으로 이동 금지
			continue;
		if (m == 14 && d == 1)		//아래쪽 끝에 있을때 아래쪽으로 이동 금지
			continue;
		if (n == 14 && m == 14)		//몬스터는 금에 접근 금지
			continue;
		switch (d) {
		case 0:
			arr[n][m] = '.';		//위로 이동
			arr[n - 1][m] = mon;
			break;
		case 1:
			arr[n][m] = '.';		//왼쪽으로 이동
			arr[n][m + 1] = mon;
			break;
		case 2:
			arr[n][m] = '.';		//아래로 이동
			arr[n + 1][m] = mon;
			break;
		case 3:
			arr[n][m] = '.';		//오른쪽으로 이동
			arr[n][m - 1] = mon;
			break;
		}
		if (1)		//범위에서 벗어나면 반복
			break;
	}
}