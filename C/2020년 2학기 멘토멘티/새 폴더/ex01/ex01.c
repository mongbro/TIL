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
		printf("������ �Է��Ͻÿ� : ");
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
	printf("������ �� %d�� ����Ǿ����ϴ�.\n", count);
	printf("������ : %d\n\n", a + b);
}

void sub(int a, int b) {
	static int count = 0;
	count++;
	printf("������ �� %d�� ����Ǿ����ϴ�.\n", count);
	printf("������ : %d\n\n", a - b);
}

void mul(int a, int b) {
	static int count = 0;
	count++;
	printf("������ �� %d�� ����Ǿ����ϴ�.\n", count);
	printf("������ : %d\n\n", a * b);
}

void div(int a, int b) {
	static int count = 0;
	count++;
	printf("�������� �� %d�� ����Ǿ����ϴ�.\n", count);
	printf("������ : %lf\n\n", (double)a / b);
}