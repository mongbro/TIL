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
		printf("1. ����\n2. ����\n3. ����\n4. ������\n5. ������\n");
		printf("���ϴ� �޴��� �����Ͻÿ�(1~5) : ");
		scanf("\n%d", &choice);
		printf("���� 2���� �Է��Ͻÿ� : ");
		scanf("\n%d %d", &a, &b);

		switch (choice) {
		case 1:
			printf("������ : %d\n", add(a, b));
			break;
		case 2:
			printf("������ : %d\n", sub(a, b));
			break;
		case 3:
			printf("������ : %d\n", mul(a, b));
			break;
		case 4:
			printf("������ : %lf\n", div(a, b));
			break;
		case 5:
			printf("������ : %d\n", mod(a, b));
			break;
		}

		printf("����Ϸ��� y�� �����ÿ� : ");
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
