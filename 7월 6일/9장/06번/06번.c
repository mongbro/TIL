#include<stdio.h>
#include"mong.h"

int power(int base, int raise);

int main()
{
	int base, raise;
	printf("�ؼ� : ");
	scanf_s("%d", &base);
	printf("���� : ");
	scanf_s("%d", &raise);
	printf("%d^%d = %d", base, raise, power(base, raise));
	return 0;
}