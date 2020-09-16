#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void add(int a, int b);
void sub(int a, int b);
void mul(int a, int b);
void div(int a, int b);

int main() {
	int a, b;
	char op;
	while (1) {
		printf("연산을 입력하시오 : ");
		scanf("%d%c%d", &a, &op, &b);
		switch (op) {
		case '+':
			add(a, b);
			break;
		case '-':
			sub(a, b);
			break;
		case '*':
			mul(a, b);
			break;
		case '/':
			div(a, b);
			break;
		}
	}
}

void add(int a, int b) {
	static int count = 0;
	count++;
	printf("덧셈은 총 %d번 실행되었습니다.\n", count);
	printf("연산결과 : %d\n\n", a + b);
}

void sub(int a, int b) {
	static int count = 0;
	count++;
	printf("뺄셈은 총 %d번 실행되었습니다.\n", count);
	printf("연산결과 : %d\n\n", a - b);
}

void mul(int a, int b) {
	static int count = 0;
	count++;
	printf("곱셈은 총 %d번 실행되었습니다.\n", count);
	printf("연산결과 : %d\n\n", a * b);
}

void div(int a, int b) {
	static int count = 0;
	count++;
	printf("나눗셈은 총 %d번 실행되었습니다.\n", count);
	printf("연산결과 : %lf\n\n", (double)a / b);
}