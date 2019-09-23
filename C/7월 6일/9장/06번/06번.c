#include<stdio.h>
#include"mong.h"

int power(int base, int raise);

int main()
{
	int base, raise;
	printf("¹Ø¼ö : ");
	scanf_s("%d", &base);
	printf("Áö¼ö : ");
	scanf_s("%d", &raise);
	printf("%d^%d = %d", base, raise, power(base, raise));
	return 0;
}