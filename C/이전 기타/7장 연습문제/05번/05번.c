#include<stdio.h>
int main()
{
	int x;
	printf("정수를 입력하시오 : ");
	scanf_s("%d", &x);

	for (int i = 1; i <= x; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("%d ", j);
		}
		printf("\n");
	}
	return 0;
}