#include<stdio.h>
int main()
{
	int n, i;
	printf("������ �Է��Ͻÿ� : ");
	scanf_s("%d", &n);
	do
	{
		i = n % 10;
		n /= 10;
		printf("%d", i);
	} while (n > 0);
	return 0;
}