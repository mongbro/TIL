/*����������*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int user, pc;

	printf("�����Ͻÿ�(����=0, ����=1, ��=2) ");
	scanf_s("%d", &user);

	srand((unsigned)time(NULL));
	pc = rand() % 3;

	printf("\n\nPC�� %d�� �����߽��ϴ�.(����=0, ����=1, ��=2)\n\n", pc);

	if (user - pc == -1 || user - pc == 2)
		printf("�ƽ��Ե� PC�� �̰���ϴ�...");
	else if (user - pc == 1 || user - pc == -2)
		printf("�����մϴ�! ����ڰ� �̰���ϴ�.");
	else
		printf("�����ϴ�.");

	return 0;
}