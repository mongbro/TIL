#include<stdio.h>
#include"mong.h"

int main() {
	int base, raised;
	printf("�ؼ� : ");
	scanf("%d", &base);
	printf("���� : ");
	scanf("%d", &raised);

	printf("%d^%d = %d", base, raised, power(base, raised));
}