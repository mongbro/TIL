#include<stdio.h>
int main()
{
	int d, n;
	printf("������ �Է��Ͻÿ� : ");
	scanf_s("%d", &n);

	do
	{
		d = n % 10;
		n /= 10;
		printf("%d", d);
	} while (n > 0);
	return 0;
}