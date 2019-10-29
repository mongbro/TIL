#include<stdio.h>
#include"mong.h"

int main() {
	int base, raised;
	printf("¹Ø¼ö : ");
	scanf("%d", &base);
	printf("Áö¼ö : ");
	scanf("%d", &raised);

	printf("%d^%d = %d", base, raised, power(base, raised));
}