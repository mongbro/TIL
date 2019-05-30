#include<stdio.h>
int main()
{
	int d;
	printf("정수를 입력하시오 : ");
	scanf_s("%d", &d);

	for (int i = 1; i <= d; i++)
	{
		for (int j = 1; j <= i; j++)
			printf("%d ", j);
		printf("\n");
	}
	return 0;
}