#include<stdio.h>
int main()
{
	int a = 0, b = 1, c = 1, n1, n2 = 2;
	printf("몇번째 항까지 구할까요 ? ");
	scanf_s("%d", &n1);

	printf("0, 1, ");

	for (; n2 <= n1; n2++)
	{
		c = a + b;
		printf("%d, ", c);
		a = b;
		b = c;
	}
	return 0;
}
