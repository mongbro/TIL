#include<stdio.h>
int main()
{
	int n, result;
	printf("������ �Է��Ͻÿ� : ");
	scanf_s("%d", &n);
	while (n > 0)
	{
		result = n % 10;
		printf("%d", result);
		n /= 10;
	}
	return 0;
}