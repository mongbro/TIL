#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int user, pc;
	do
	{
		printf("�����Ͻÿ�(1=���� 2=���� 3=��) : ");
		scanf_s("%d", &user);
		srand((unsigned)time(NULL));
		pc = rand() % 3 + 1;
		if (user - pc == -2 || user - pc == 1)
			printf("����ڰ� �̰���ϴ�.\n");
		else if (user-pc==0)
			printf("�����ϴ�.\n");
		else
			printf("pc�� �̰���ϴ�.\n");
		
	} while (user != -1);
	return 0;
}	