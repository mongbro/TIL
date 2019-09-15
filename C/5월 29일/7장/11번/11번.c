#include<stdio.h>
int main()
{
	int n, mul = 1, sum = 0;
	printf("n의 값을 입력하시오 : ");
	scanf_s("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		mul = i * i;						//mul의 값은 i의 제곱
		sum += mul;							//sum의 값은 i의 제곱들의 합
		mul = 1;							//mul의 값은 다시 초기화시켜줘야한다.
	}

	printf("계산값은 %d입니다.", sum);
	return 0;
}