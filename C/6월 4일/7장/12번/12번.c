#include<stdio.h>
int main()
{
	int p=1, pp=0, n, d=0;					//p = 전 항의 값, pp = 전전 항의 값, d = 구하는 항의 값
	printf("몇번째 항까지 구할까요?");
	scanf_s("%d", &n);
	printf("0, 1, ");						//0번째항 = 0, 1번째항 = 1
	for (int i = 2; i <= n; i++)			//i = 몇번째 항인가
	{
		d = p + pp;
		pp = p;
		p = d;
		printf("%d, ", d);
	}
	return 0;
}