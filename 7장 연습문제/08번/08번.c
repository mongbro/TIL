#include<stdio.h>
int main()
{
	int input = 0;
	while (input != -1)
	{
		printf("막대의 높이(종료=-1) : ");
		scanf_s("%d", &input);
		for (int n = 1; n <= input; n++)
			printf("*");
		printf("\n");
	}
	return 0;
}