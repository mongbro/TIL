#include<stdio.h>
#include"mong.h"
int fibo(int n);
void f_fibo(int n);
int main()
{
	int n, start=0;
	printf("�Է� : ");
	scanf_s("%d", &n);
	f_fibo(n);
	return 0;
}