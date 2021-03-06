/* 피보나치 수열이란 1항 + 2항 = 3항, 2항 + 3항 = 4항, 3항 + 4항 = 5항 이런식이다*/
#include<stdio.h>
int main()
{
	int a, b, c, n, m;											//a는 전전항, b는 전항, c는 구하는항, m은 반복할 횟수 정하는 변수
	printf("몇번째 항까지 구할까요? ");
	scanf_s("%d", &n);

	a = 0;														//0항은 0으로 정해져있다.
	b = 1;														//1항은 1로 정해져있다.

	printf("%d, %d, ", a, b);									//0항, 1항은 바로 출력해준다.

	for (m = 2; m <= n; m++)									//m이 2인 이유는 2항부터 출력할 것이기 때문이다.
	{
		c = a + b;												//구하는 항은 전항 + 전전항

		printf("%d, ", c);

		a = b;													//이전 반복에서의 b가 다음 반복에서는 a로 간다.
		b = c;													//이전 반복에서의 c가 다음 반복에서의 b로 간다.
	}
	return 0;
}