#include<stdio.h>
#include"mong.h"
void is_prime(int n);

int main()
{
	int n;
	printf("몇까지 숫자를 검사할까요? ");
	scanf_s("%d", &n);
	is_prime(n);
}