#pragma once
#include<stdio.h>

void print_arr();
int end_con1();
int end_con2();
void input_player1();
void input_player2();
char arr[3][3] = { ' ',' ',' ',' ',' ',' ',' ',' ',' ' };			//초기 배열 값
int won_by_player1();
int won_by_player2();

void print_arr()
{
		printf("---|---|---\n");										//  ---|---|---
	printf(" %c | %c | %c \n", arr[0][0], arr[0][1], arr[0][2]);		//     |   |   
	printf("---|---|---\n");											//  ---|---|---
	printf(" %c | %c | %c \n", arr[1][0], arr[1][1], arr[1][2]);		//     |   |   
	printf("---|---|---\n");											//  ---|---|---
	printf(" %c | %c | %c \n", arr[2][0], arr[2][1], arr[2][2]);		//     |   |   
	printf("---|---|---\n");											//  ---|---|---
}

void input_player1()
{
	int row, col;
	while (1) {
		printf("Player1 좌표 입력 : ");
		scanf_s("%d%d", &row, &col);
		if (arr[row][col] == 'O' || arr[row][col] == 'X')		//입력한 좌표가 이미 입력된 곳이면 다시 입력받도록한다.
			printf("중복입력은 불가능합니다.\n");
		else
			break;
	}
	arr[row][col] = 'O';			//해당 좌표에 p1의 표시
}

void input_player2()
{
	int row, col;
	while (1) {
		printf("Player2 좌표 입력 : ");
		scanf_s("%d%d", &row, &col);
		if (arr[row][col] == 'O' || arr[row][col] == 'X')		//입력한 좌표가 이미 입력된 곳이면 다시 입력받도록한다.
			printf("중복입력은 불가능합니다.\n");
		else
			break;
	}
	arr[row][col] = 'X';			//해당 좌표에 p2의 표시
}

int end_con1()
{
	int n = 0;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (arr[i][j] == 'O' || arr[i][j] == 'X') {
				n++;
			}
		}
	}
	if (n == 9)
		return 1;			//모든 좌표가 가득 찼을때 종료조건
	else
		return 0;
}

int won_by_player1()
{
	if (arr[0][0] == 'O'&&arr[0][1] == 'O'&&arr[0][2] == 'O')
		return 1;
	if (arr[1][0] == 'O'&&arr[1][1] == 'O'&&arr[1][2] == 'O')
		return 1;
	if (arr[2][0] == 'O'&&arr[2][1] == 'O'&&arr[2][2] == 'O')
		return 1;
	if (arr[0][0] == 'O'&&arr[1][0] == 'O'&&arr[2][0] == 'O')
		return 1;
	if (arr[0][1] == 'O'&&arr[1][1] == 'O'&&arr[2][1] == 'O')
		return 1;
	if (arr[0][2] == 'O'&&arr[1][2] == 'O'&&arr[2][2] == 'O')			//p1의 승리 조건
		return 1;
	if (arr[0][0] == 'O'&&arr[1][1] == 'O'&&arr[2][2] == 'O')			//어디든 3개 연속
		return 1;
	if (arr[0][2] == 'O'&&arr[1][1] == 'O'&&arr[2][0] == 'O')
		return 1;
	else
		return 0;
}

int won_by_player2()
{
	if (arr[0][0] == 'X'&&arr[0][1] == 'X'&&arr[0][2] == 'X')
		return 1;
	if (arr[1][0] == 'X'&&arr[1][1] == 'X'&&arr[1][2] == 'X')
		return 1;
	if (arr[2][0] == 'X'&&arr[2][1] == 'X'&&arr[2][2] == 'X')
		return 1;
	if (arr[0][0] == 'X'&&arr[1][0] == 'X'&&arr[2][0] == 'X')
		return 1;
	if (arr[0][1] == 'X'&&arr[1][1] == 'X'&&arr[2][1] == 'X')
		return 1;
	if (arr[0][2] == 'X'&&arr[1][2] == 'X'&&arr[2][2] == 'X')			//p2의 승리 조건
		return 1;
	if (arr[0][0] == 'X'&&arr[1][1] == 'X'&&arr[2][2] == 'X')			//어디든 3개 연속
		return 1;
	if (arr[0][2] == 'X'&&arr[1][1] == 'X'&&arr[2][0] == 'X')
		return 1;
	else
		return 0;

}

int end_con2()
{
	if (won_by_player1() == 1 || won_by_player2() == 1)			//둘중 한명이 승리조건을 만족하면 종료
		return 1;
	else
		return 0;
}