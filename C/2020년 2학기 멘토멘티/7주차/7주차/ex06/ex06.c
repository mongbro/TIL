#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int power(int base, int power_raised);

int main() {
	int base, power_raised;
	printf("นุ : ");
	scanf("%d", &base);
	printf("ม๖ผ๖ : ");
	scanf("%d", &power_raised);
	printf("%d ^ %d = %d", base, power_raised, power(base, power_raised));
}

int power(int base, int power_raised) {
	if (power_raised == 1)
		return base;
	else {
		return base * power(base, power_raised - 1);
	}
}