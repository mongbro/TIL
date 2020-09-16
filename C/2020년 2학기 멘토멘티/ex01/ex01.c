#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int a[1];
	char string[100];

	printf("input : ");
	scanf("%d", a);
	printf("%d", a[0]);

	printf("\ninput : ");
	scanf("%s", string);
	printf(string);
}