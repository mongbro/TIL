#include<stdio.h>
int main()
{
	int sum, n = 1;
	sum = n;
	while (sum <= 10000)
	{
		n++;
		sum += n;
	}
	
	sum -= n;
	n--;

	printf("1���� %d������ ���� %d�Դϴ�.", n, sum);
	
	return 0;
}