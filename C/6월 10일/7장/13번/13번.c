#include<stdio.h>
int main()
{
	int n, r, result = 1;
	printf("n값 : ");
	scanf_s("%d", &n);
	printf("r값 : ");
	scanf_s("%d", &r);
	for (int i = n; i >= n - r - 1; i--)
		result *= i;
	printf("순열값은 %d입니다", result);
	return 0;
}