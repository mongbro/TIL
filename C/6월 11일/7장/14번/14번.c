#include<stdio.h>
int main()
{
	int n, d;
	printf("������ �Է��Ͻÿ� : ");
	scanf_s("%d", &n);
	while (n>0)
	{
		d = n % 10;
		n /= 10;
		printf("%d", d);
	}
	return 0;
}