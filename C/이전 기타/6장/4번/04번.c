#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	int input, computer;
	
	printf("선택하시오(1=가위, 2=바위, 3=보) : ");
	scanf("%d", &input);

	srand((unsigned)time(NULL));
	computer = rand()%3+1;

	printf("\n컴퓨터의 선택은 %d입니다.(1=가위, 2=바위, 3=보)\n\n", computer);

	if (input - computer == 1 || input - computer == -2)
		printf("사용자가 이겼음");
	else if (input - computer == -1 || input - computer == 2)
		printf("컴퓨터가 이겼음");
	else
		printf("비겼음");

	return 0;
}