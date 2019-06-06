/*가위바위보*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int user, pc;

	printf("선택하시오(가위=0, 바위=1, 보=2) ");
	scanf_s("%d", &user);

	srand((unsigned)time(NULL));
	pc = rand() % 3;

	printf("\n\nPC는 %d를 선택했습니다.(가위=0, 바위=1, 보=2)\n\n", pc);

	if (user - pc == -1 || user - pc == 2)
		printf("아쉽게도 PC가 이겼습니다...");
	else if (user - pc == 1 || user - pc == -2)
		printf("축하합니다! 사용자가 이겼습니다.");
	else
		printf("비겼습니다.");

	return 0;
}