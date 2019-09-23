#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include"mong.h"
int b_rand();
int main()
{
	int user, pc;
	char a;
	srand((unsigned)time(NULL));
	while (1)
	{
		printf("앞면 또는 뒷면(1 또는 0) : ");
		scanf_s("%d", &user);
		pc = b_rand();
		if (user == pc)
			printf("맞습니다.\n");
		else
			printf("아닙니다.\n");

		while (1)
		{
			printf("계속하시겠습니까?");
			scanf_s("\n%c", &a, 1);
			if (a == 'Y' || a == 'y' || a == 'N' || a == 'n')
				break;
		}
		if (a == 'y' || a == 'Y')
			continue;
		if (a == 'n' || a == 'N')
			break;
	}
	return 0;
}