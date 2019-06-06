#include<stdio.h>
int main()
{
	int x, y = 1;
	printf("정수를 입력하시오 : ");
	scanf_s("%d", &x);

	while (y <= x)
	{
		if (x%y == 0)
			printf("%d   ", y);
		y++;
	}

	return 0;
}