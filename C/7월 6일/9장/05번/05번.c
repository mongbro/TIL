#include<stdio.h>
#include"mong.h"
int sum(int a);

int main()
{
	int n;
	printf("������ �Է��Ͻÿ� : ");
	scanf_s("%d", &n);
	printf("1���� %d������ �� : %d", n, sum(n));
	return 0;
}