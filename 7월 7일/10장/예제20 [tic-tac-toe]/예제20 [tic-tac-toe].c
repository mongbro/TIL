#include<stdio.h>
#include"mong.h"

void print_arr();			//3x3행렬 출력
void input_player1();		//player1 입력
void input_player2();		//player2 입력
int end_con1();				//종료조건1  (모든 배열에 입력되어 종료)
int end_con2();				//종료조건2  (누군가 승리조건을 만족)
int won_by_player1();		//player1의 승리 조건
int won_by_player2();		//player2의 승리 조건

int main()
{
	int p1, p2;
	while (1) {
		print_arr();
		input_player1();
		if (end_con2() == 1)		//p1이 승리조건을 만족하면 종료
			break;
		if (end_con1() == 1)		//9칸이라서 마지막 입력은 p1이다.
			break;
		print_arr();
		input_player2();
		if (end_con2() == 1)		//p2가 승리조건을 만족하면 종료
			break;
	}
	p1 = won_by_player1();
	p2 = won_by_player2();
	if (p1 > p2) {			//	1>0
		print_arr();
		printf("Player1의 승리\n");	
	}
	if (p1 < p2) {			//	0<1
		print_arr();
		printf("Player2의 승리\n");
	}
	if (p1 == p2)			//	0==0
		printf("무승부!");

	return 0;
}