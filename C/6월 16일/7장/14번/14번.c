#include<stdio.h>
int main()
{
	int n, i;
	printf("정수를 입력하시오 : ");
	scanf_s("%d", &n);
	while (n > 0)
	{
		i = n % 10;						//변수 하나를 더 설정해주고 n을 10으로 나눈 나머지를 바로 출력하면 1의 자리가 가장 앞에 찍히게된다.
		n /= 10;						//마지막에 결과적으로 1의자리가 10만의자리가 되고 10만의 자리가 1의 자리가 된다.
		printf("%d", i);				// 1 2 3 4 5 6 -> 6 5 4 3 2 1 
	}
	return 0;
}