#include<stdio.h>
int main()
{
	int p, pp, d, n;
	printf("몇번째 항까지 구할까요? ");
	scanf_s("%d", &n);
	pp = 0;
	p = 1;
	printf("%d, %d, ", pp, p);
	for (int i = 2; i <= n; i++)
	{
		d = pp + p;
		pp = p;
		p = d;
		printf("%d, ", d);
	}
	return 0;
}