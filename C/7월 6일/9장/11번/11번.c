#include<stdio.h>
#include"mong.h"
int combi(int a, int b);

int main()
{
	int a, b;
	printf("�Է�1 : ");
	scanf_s("%d", &a);
	printf("�Է�2 : ");
	scanf_s("%d", &b);
	printf("��� : %d", combi(a, b));
	return 0;
}