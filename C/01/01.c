#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
double div(int a, int b);

int main() {
	int a, b, result1;
	double result2;
	char op;
	while (1) {
		printf("�����Է� : ");
		scanf("%d%c%d", &a, &op, &b);

		switch (op) {
		case '+':
			result1 = add(a, b);
			printf("������ : %d", result1);
			break;
		case '-':
			result1 = sub(a, b);
			printf("������ : %d", result1);
			break;
		case '*':
			result1 = mul(a, b);
			printf("������ : %d", result1);
			break;
		case '/':
			result2 = div(a, b);
			printf("������ : %lf", result2);
			break;
		}
		printf("\n");
	}
}

int add(int a, int b) {
	static int count = 0;
	count++;
	printf("������ �� %d�� ����Ǿ����ϴ�\n", count);
	return a + b;
}

int sub(int a, int b) {
	static int count = 0;
	count++;
	printf("������ �� %d�� ����Ǿ����ϴ�\n", count);
	return a - b;
}

int mul(int a, int b) {
	static int count = 0;
	count++;
	printf("������ �� %d�� ����Ǿ����ϴ�\n", count);
	return a * b;
}

double div(int a, int b) {
	static int count = 0;
	count++;
	printf("�������� �� %d�� ����Ǿ����ϴ�\n", count);
	return (double)a / b;
}