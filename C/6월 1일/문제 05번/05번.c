#include<stdio.h>
int main()
{
	int n, sum=0, num = 0;
	double avg;

	printf("������ �Է��Ͻÿ� : \n");

	while(1)
	{
		scanf_s("%d", &n);
		if (n > 100 || n < 0)
			break;
		sum += n;
		num++;
	}

	avg = sum / num;

	printf("sum : %d\navg : %.1lf", sum, avg);

	return 0;
}