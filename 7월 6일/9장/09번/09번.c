#include<stdio.h>
#include"mong.h"
int f_sum(int n);

int main()
{
	int n;
	printf("�Է� : ");
	scanf_s("%d", &n);
	printf("��� : %d", f_sum(n));
	return 0;
}