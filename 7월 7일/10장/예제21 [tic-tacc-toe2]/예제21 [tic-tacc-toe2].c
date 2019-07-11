#include<stdio.h>
#include"mong.h"

void print_arr();			//3x3행렬 출력
void input_player1();		//player1 입력
void input_computer();		//computer 입력
int end_con1();				//종료조건1  (모든 배열에 입력되어 종료)
int end_con2();				//종료조건2  (누군가 승리조건을 만족)
int won_by_player1();		//player1의 승리 조건
int won_by_computer();		//computer의 승리 조건

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
		printf("Player1의 승리\n");
	}
	if (p1 < p2) {
		print_arr();
		printf("computer의 승리\n");
	}
	if (p1 == p2)
		printf("무승부!");

	return 0;
}