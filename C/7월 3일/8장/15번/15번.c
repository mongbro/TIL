#include<stdio.h>
#include"mong.h"
void is_prime(int n);

int main()
{
	int n;
	printf("����� ���ڸ� �˻��ұ��? ");
	scanf_s("%d", &n);
	is_prime(n);
}