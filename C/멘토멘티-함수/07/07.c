#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int get_tax(int income);

int main() {
	int income;

	printf("입력 : ");
	scanf("%d", &income);

	printf("소득세는 %d입니다.", get_tax(income));
}

int get_tax(int income) {
	if (income > 1000)
		return income / 100 * 10;
	else
		return income / 100 * 8;
}