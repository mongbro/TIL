#include<stdio.h>
int main()
{
	int x;
	do
	{
		printf("막대의 높이(종료 : -1) : ");
		scanf_s("%d", &x);
		for (int i = 1; i <= x; i++)
			printf("*");
		printf("\n");
	} while (x != -1);
	return 0;
}