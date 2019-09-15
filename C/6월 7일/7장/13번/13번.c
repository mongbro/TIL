#include<stdio.h>
int main()
{
	int n, r, mul=1;
	printf("n의 값을 입력하시오 : ");
	scanf_s("%d", &n);
	printf("r의 값을 입력하시오 : ");
	scanf_s("%d", &r);
	for (int i = n; i >= n - r - 1; i--)
		mul *= i;
	printf("순열의 값은 %d입니다.", mul);
	return 0;
}