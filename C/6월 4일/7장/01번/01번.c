#include<stdio.h>
int main()
{
	int c;
	printf("카운터의 초기값을 입력하시오 : ");
	scanf_s("%d", &c);
	while (c > 0)
	{
		printf("%d ", c);
		c--;
	}
	return 0;
}