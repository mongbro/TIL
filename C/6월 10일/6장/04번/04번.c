#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int user, pc;
	printf("�����Ͻÿ� : ");
	scanf_s("%d", &user);
	srand((unsigned)time(NULL));
	pc = rand() % 3 + 1;
	printf("pc : %d\n", pc);
	if (user - pc == -2 || user - pc == 1)
		printf("����ڰ� �̰���ϴ�.");
	else if (user - pc == 0)
		printf("�����ϴ�.");
	else
		printf("pc�� �̰���ϴ�.");
	return 0;
}