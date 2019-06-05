#include<stdio.h>
int main()
{
	int counter;
	printf("카운터의 초기값을 입력하시오 : ");
	scanf_s("%d", &counter);
	while (counter >= 1)
	{
		printf("%d ", counter);
		counter--;
	}
	return 0;
}