#include<stdio.h>
#include"mong.h"

void print_arr();			//3x3��� ���
void input_player1();		//player1 �Է�
void input_player2();		//player2 �Է�
int end_con1();				//��������1  (��� �迭�� �ԷµǾ� ����)
int end_con2();				//��������2  (������ �¸������� ����)
int won_by_player1();		//player1�� �¸� ����
int won_by_player2();		//player2�� �¸� ����

int main()
{
	int p1, p2;
	while (1) {
		print_arr();
		input_player1();
		if (end_con2() == 1)		//p1�� �¸������� �����ϸ� ����
			break;
		if (end_con1() == 1)		//9ĭ�̶� ������ �Է��� p1�̴�.
			break;
		print_arr();
		input_player2();
		if (end_con2() == 1)		//p2�� �¸������� �����ϸ� ����
			break;
	}
	p1 = won_by_player1();
	p2 = won_by_player2();
	if (p1 > p2) {			//	1>0
		print_arr();
		printf("Player1�� �¸�\n");	
	}
	if (p1 < p2) {			//	0<1
		print_arr();
		printf("Player2�� �¸�\n");
	}
	if (p1 == p2)			//	0==0
		printf("���º�!");

	return 0;
}