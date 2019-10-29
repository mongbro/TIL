#include<stdio.h>

int get_tax(int income);
int main() {
	int income;
	printf("입력 : ");
	scanf("%d", &income);
	printf("소득세 : %d", get_tax(income));
	return 0;
}

int get_tax(int income) {
	if (income <= 1000)
		return (int)(income * 0.08);
	else
		return(int)(income * 0.1);
}