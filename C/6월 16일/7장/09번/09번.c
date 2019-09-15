#include<stdio.h>
int main()
{
	int sum = 0, n;
	for (n = 1; sum <= 10000; n++)							//n=141		sum=9870
	{
		sum += n;
	}														//n=142		sum=10011
	n--;													//sum이 10000을 넘긴 후 n이 1증가 되어있으므로 n을 하나 감소시켜준다.
	sum -= n;												//sum이 10000을 넘어갔으므로 n을 한번 빼준다.
	n--;													//sum이 10000을 넘기기전에 n이 1증가 되었으므로 n을 하나 감소시켜준다.
	printf("1부터 %d까지의 합은 %d입니다.", n, sum);		//결과 n = 140   합 sum = 9870
	return 0;
}