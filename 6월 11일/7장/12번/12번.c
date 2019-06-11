#include<stdio.h>
int main()
{
	int p = 1, pp = 0, d, n;
	printf("몇번째 항까지 구할까요? ");
	scanf_s("%d", &n);
	printf("0, 1, ");
	for (int i = 2; i <= n; i++)
	{
		d = p + pp;
		pp = p;
		p = d;
		printf("%d, ", d);
	}
	return 0;
}