#include<stdio.h>
int main()
{
	int n, sum = 0;
	for (n = 1; sum <= 10000; n++)
		sum += n;
	n--;
	sum -= n;
	n--;
	printf("1���� %d������ ���� %d�Դϴ�.", n, sum);
	return 0;
}