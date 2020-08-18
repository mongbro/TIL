#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
double div(int a, int b);
int mod(int a, int b);

int main() {
	int choice, a, b, result1;
	double result2;
	char c;

	while (1) {
		printf("=======================\n");
		printf("MENU\n");
		printf("=======================\n");
		printf("1. 덧셈\n2. 뺄셈\n3. 곱셈\n4. 나눗셈\n5. 나머지\n");
		printf("원하는 메뉴를 선택하시오(1~5) : ");
		scanf("\n%d", &choice);
		printf("숫자 2개를 입력하시오 : ");
		scanf("\n%d %d", &a, &b);

		switch (choice) {
		case 1:
			printf("연산결과 : %d\n", add(a, b));
			break;
		case 2:
			printf("연산결과 : %d\n", sub(a, b));
			break;
		case 3:
			printf("연산결과 : %d\n", mul(a, b));
			break;
		case 4:
			printf("연산결과 : %lf\n", div(a, b));
			break;
		case 5:
			printf("연산결과 : %d\n", mod(a, b));
			break;
		}

		printf("계속하려면 y를 누르시오 : ");
		scanf("\n%c", &c);
		if (c == 'y')
			continue;
		else
			break;
	}
}

int add(int a, int b) {
	return a + b;
}

int sub(int a, int b) {
	return a - b;
}

int mul(int a, int b) {
	return a * b;
}

double div(int a, int b) {
	return (double)a / b;
}

int mod(int a, int b) {
	return a % b;
}
