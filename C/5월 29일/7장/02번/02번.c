#include<stdio.h>
int main()
{
	int n, sum = 0;

	for (n=1;n <= 100;n++)
	{
		if (n % 3 == 0)															//n이 3의 배수이면 sum에 더한다.
			sum += n;
	}
	printf("1부터 100사이의 모든 3의 배수의 합은 %d입니다.", sum);
	
	return 0;
}