#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int user, pc;
	printf("선택하시오(1=가위  2=바위  3=보) : ");
	scanf_s("%d", &user);
	srand((unsigned)time(NULL));
	pc = rand() % 3 + 1;
	if (user - pc == -2 || user - pc == 1)
		printf("사용자가 이겼습니다.");
	else if (user - pc == 0)
		printf("비겼습니다.");
	else
		printf("pc가 이겼습니다.");
	return 0;
}