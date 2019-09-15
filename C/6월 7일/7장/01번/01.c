#include<stdio.h>
int main()
{
	int n;
	printf("카운터의 초기값을 입력하시오 : ");
	scanf_s("%d", &n);
	for (int i = n; i > 0; i--)
		printf("%d ", i);
	printf("\a");
	return 0;
}
