#include<stdio.h>
int main()
{
	int n, r;
	printf("������ �Է��Ͻÿ� : ");
	scanf_s("%d", &n);
	while (n>0)
	{
		r = n % 10;
		printf("%d", r);
		n /= 10;
	}
	return 0;
}