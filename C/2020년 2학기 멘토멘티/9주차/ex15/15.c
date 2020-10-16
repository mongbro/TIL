#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main() {
	char s[5];
	int a, b, result;
	double result2;

	printf("연산 : ");
	scanf("%s %d %d", s, &a, &b);

	if (strcmp(s, "add") == 0) {
		result = a + b;
		printf("결과 : %d", result);
	}
	if (strcmp(s, "sub") == 0) {
		result = a - b;
		printf("결과 : %d", result);
	}
	if (strcmp(s, "mul") == 0) {
		result = a * b;
		printf("결과 : %d", result);
	}
	if (strcmp(s, "div") == 0) {
		result2 = a / b;
		printf("결과 : %lf", result2);
	}

}