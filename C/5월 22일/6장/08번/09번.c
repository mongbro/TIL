#include<stdio.h>
int main()
{
	int x, result;
	printf("x�� ���� �Է��Ͻÿ� : ");
	scanf_s("%d", &x);

	if (x > 0)
		result = 7 * x + 2;
	else
		result = x * x - 9 * x + 2;
	
	printf("f(x)�� ���� %d", result);

	return 0;
}