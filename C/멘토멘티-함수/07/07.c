#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int get_tax(int income);

int main() {
	int income;

	printf("�Է� : ");
	scanf("%d", &income);

	printf("�ҵ漼�� %d�Դϴ�.", get_tax(income));
}

int get_tax(int income) {
	if (income > 1000)
		return income / 100 * 10;
	else
		return income / 100 * 8;
}