#include<stdio.h>
int main()
{
	int n, r;
	printf("������ �Է��Ͻÿ� : ");
	scanf_s("%d", &n);
	do
	{
		r = n % 10;
		printf("%d", r);
		n /= 10;
	} while (n > 0);
	return 0;
}