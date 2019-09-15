#include<stdio.h>
int main()
{
	int x;
	printf("카운터의 초기값을 입력하시오 : ");
	scanf_s("%d", &x);

	for (; x > 0; x--)
		printf("%d  ", x);
	printf("\a");
	return 0;
}