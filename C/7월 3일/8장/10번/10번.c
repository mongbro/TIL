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
		printf("�ո� �Ǵ� �޸�(1 �Ǵ� 0) : ");
		scanf_s("%d", &user);
		pc = b_rand();
		if (user == pc)
			printf("�½��ϴ�.\n");
		else
			printf("�ƴմϴ�.\n");

		while (1)
		{
			printf("����Ͻðڽ��ϱ�?");
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