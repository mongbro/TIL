#include<stdio.h>
int main()
{
	int n, d;								//d = 출력할 숫자
	printf("정수를 입력하시오 : ");
	scanf_s("%d", &n);


	do
	{	
			d = n % 10;						//d는 n을 10으로 나눈 나머지, 즉 n의 첫번째 자리수
			n /= 10;						//n을 10으로 나누어 x자리숫자를 x-1자리 숫자로 표현
			printf("%d", d);				//첫번째 자리수 n부터 차례대로 출력하면 숫자가 거꾸로 출력된다.
	} while (n > 0);						
											//n이 0으로 시작하면 0이 출력이 안된다. (0123456 -> 654321) 이떻게 수정할까?

	return 0;
}