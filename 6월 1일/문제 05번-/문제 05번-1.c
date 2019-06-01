#include<stdio.h>
int main()
{
	int num=0, cou = 0, sum = 0;
	double avg;
	printf("정수를 입력하시오 : \n");
	while (num <= 100 && num >= 0)
	{
		scanf_s("%d", &num);
		cou++;
		sum += num;
	}
	sum -= num;
	cou--;
	avg = sum / cou;
	printf("sum : %d\navg : %lf", sum, avg);
	return 0;
}