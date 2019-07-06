#include<stdio.h>
#include"mong.h"
int combi(int a, int b);

int main()
{
	int a, b;
	printf("입력1 : ");
	scanf_s("%d", &a);
	printf("입력2 : ");
	scanf_s("%d", &b);
	printf("출력 : %d", combi(a, b));
	return 0;
}