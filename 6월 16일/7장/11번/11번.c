#include<stdio.h>
int main()
{
	int sum = 0, mul = 1, n;
	printf("n의 값을 입력하시오 : ");
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		mul = i * i;						//1*1		2*2		3*3		4*4		~~		n*n
		sum += mul;							//1			1+4		5+9		14+16	~~		x+n*n
	}
	printf("계산값은 %d입니다.", sum);
	return 0;
}