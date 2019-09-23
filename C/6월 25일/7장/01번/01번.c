#include<stdio.h>
int main()
{
	int n;
	printf("초기값을 입력하시오 : ");
	scanf_s("%d", &n);

	while (n >= 0)
	{
		printf("%d ", n);
		n--;
	}
	printf("\a");
	return 0;
}