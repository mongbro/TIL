#include<stdio.h>
int main()
{
	int n;
	double r, result = 1;
	printf("褒熱高 : ");
	scanf_s("%lf", &r);
	printf("剪蛙薯培 �蝦� : ");
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++)
		result *= r;
	printf("唸婁高 : %lf", result);
	return 0;
}