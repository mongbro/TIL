#include<stdio.h>
int main()
{
	int p, pp, d, n;
	printf("몇번째 항까지 구할까요? ");
	scanf_s("%d", &n);
	pp = 0;
	p = 1;
	printf("0, 1, ");
	for (int i = 2; i <= n; i++)
	{
		d = p + pp;
		printf("%d, ", d);
		pp = p;
		p = d;
	}
	return 0;
}