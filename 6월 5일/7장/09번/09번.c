#include<stdio.h>
int main()
{
	int sum = 0, i = 1;
	for (; sum <= 10000; i++)
	{
		sum += i;
	}
	i--;
	sum -= i;
	i--;
	
	printf("1���� %d������ ���� %d�Դϴ�.", i, sum);
	return 0;
}