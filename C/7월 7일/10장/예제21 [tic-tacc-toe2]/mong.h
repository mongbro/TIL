#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void print_arr();
int end_con1();
int end_con2();
void input_player1();
void input_computer();
char arr[3][3] = { ' ',' ',' ',' ',' ',' ',' ',' ',' ' };			//�ʱ� �迭 ��
int won_by_player1();
int won_by_computer();
int check(int n, int m);

void print_arr()
{
	system("cls");
	printf("---|---|---\n");											//  ---|---|---
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
		printf("Player1 ��ǥ �Է� : ");
		scanf_s("%d%d", &row, &col);
		if (arr[row][col] == 'O' || arr[row][col] == 'X')		//�Է��� ��ǥ�� �̹� �Էµ� ���̸� �ٽ� �Է¹޵����Ѵ�.
			printf("�ߺ��Է��� �Ұ����մϴ�.\n");
		else
			break;
	}
	arr[row][col] = 'O';			//�ش� ��ǥ�� p1�� ǥ��
}

void input_computer()
{
	int row, col;
	int rand_num1, rand_num2;
	srand((unsigned)time(NULL));
	rand_num1 = rand() % 3;
	rand_num2 = rand() % 3;
	while (check(rand_num1, rand_num2))
	{
		rand_num1 = rand() % 3;
		rand_num2 = rand() % 3;
	}
	row = rand_num1;
	col = rand_num2;
	arr[row][col] = 'X';
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
		return 1;			//��� ��ǥ�� ���� á���� ��������
	else
		return 0;
}

int won_by_player1()
{
	int flag;
	for (int i = 0; i < 3; i++) {
		flag = 0;
		for (int j = 0; j < 3; j++) {
			if (arr[i][j] == 'O')
				flag++;
			if (flag == 3)
				return 1;
		}
		flag = 0;
		for (int j = 0; j < 3; j++) {
			if (arr[j][i] == 'O')
				flag++;
			if (flag == 3)
				return 1;
		}
		if (arr[0][0] == 'O' && arr[1][1] == 'O' && arr[2][2] == 'O')
			return 1;
		if (arr[0][2] == 'O' && arr[1][1] == 'O' && arr[2][0] == 'O')
			return 1;
	}
	return 0;
}

int won_by_computer()
{
	int flag;
	for (int i = 0; i < 3; i++) {
		flag = 0;
		for (int j = 0; j < 3; j++) {
			if (arr[i][j] == 'X')
				flag++;
			if (flag == 3)
				return 1;
		}
		flag = 0;
		for (int j = 0; j < 3; j++) {
			if (arr[j][i] == 'X')
				flag++;
			if (flag == 3)
				return 1;
		}
		if (arr[0][0] == 'X' && arr[1][1] == 'X' && arr[2][2] == 'X')
			return 1;
		if (arr[0][2] == 'X' && arr[1][1] == 'X' && arr[2][0] == 'X')
			return 1;
	}
	return 0;
}

int end_con2()
{
	if (won_by_player1() == 1 || won_by_computer() == 1)			//���� �Ѹ��� �¸������� �����ϸ� ����
		return 1;
	else
		return 0;
}

int check(int n, int m)
{
	if (arr[n][m] == 'O' || arr[n][m] == 'X')
		return 1;
	else
		return 0;
}