#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int user, pc;
	printf("선택하시오 : ");
	scanf_s("%d", &user);
	srand((unsigned)time(NULL));
	pc = rand() % 3 + 1;
	printf("pc의 선택은 %d입니다.\n", pc);
	if (user - pc == 1 || user - pc == -2)
		printf("사용자가 이겼습니다.");
	else if (user - pc == 0)
		printf("비겼습니다.");
	else
		printf("pc가 이겼습니다.");
	return 0;
}