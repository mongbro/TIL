#include<stdio.h>
#include"mong.h"

void print_arr();			//3x3��� ���
void input_player1();		//player1 �Է�
void input_computer();		//computer �Է�
int end_con1();				//��������1  (��� �迭�� �ԷµǾ� ����)
int end_con2();				//��������2  (������ �¸������� ����)
int won_by_player1();		//player1�� �¸� ����
int won_by_computer();		//computer�� �¸� ����

int main()
{
	int p1, p2;
	while (1) {
		print_arr();
		input_player1();
		if (end_con2() == 1)
			break;
		if (end_con1() == 1)
			break;
		input_computer();
		if (end_con2() == 1)
			break;
	}
	p1 = won_by_player1();
	p2 = won_by_computer();
	if (p1 > p2) {
		print_arr();
		printf("Player1�� �¸�\n");
	}
	if (p1 < p2) {
		print_arr();
		printf("computer�� �¸�\n");
	}
	if (p1 == p2)
		printf("���º�!");

	return 0;
}