#include<stdio.h>
int main()
{
	int i=1, sum=0;
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