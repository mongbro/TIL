#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int user, pc;

	printf("�����Ͻÿ�(����=1, ����=2, ��=3) ");
	scanf_s("%d", &user);

	srand((unsigned)time(NULL));
	pc = rand() % 3+1;

	printf("pc�� ������ %d�Դϴ�.\n", pc);

	if (user - pc == -2 || user - pc == 1)
		printf("����ڰ� �̰���ϴ�!!!\n");
	else if (user - pc == 0)
		printf("�����ϴ�~~~\n");
	else
		printf("pc�� �̰���ϴ�...\n");

	return 0;
}