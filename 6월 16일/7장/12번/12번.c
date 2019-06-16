#include<stdio.h>
int main()
{
	int pp = 0, p = 1, d, n;				//pp = 0번째항, p = 1번째항, d = d번째항, n = 입력값
	printf("몇번째 항까지 구할까요? ");
	scanf_s("%d", &n);
	printf("%d, %d, ", pp, p);
	for (int i = 2; i <= n; i++)			//0번째, 1번째 항은 이미 주어져있으므로 2번째항부터 구하면 된다.
	{
		d = pp + p;
		pp = p;
		p = d;
		printf("%d, ", d);
	}
	return 0;
}