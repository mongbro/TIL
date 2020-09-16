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
		printf("¿¬»êÀÔ·Â : ");
		scanf("%d%c%d", &a, &op, &b);

		switch (op) {
		case '+':
			result1 = add(a, b);
			printf("¿¬»ê°á°ú : %d", result1);
			break;
		case '-':
			result1 = sub(a, b);
			printf("¿¬»ê°á°ú : %d", result1);
			break;
		case '*':
			result1 = mul(a, b);
			printf("¿¬»ê°á°ú : %d", result1);
			break;
		case '/':
			result2 = div(a, b);
			printf("¿¬»ê°á°ú : %lf", result2);
			break;
		}
		printf("\n");
	}
}

int add(int a, int b) {
	static int count = 0;
	count++;
	printf("µ¡¼ÀÀº ÃÑ %d¹ø ½ÇÇàµÇ¾ú½À´Ï´Ù\n", count);
	return a + b;
}

int sub(int a, int b) {
	static int count = 0;
	count++;
	printf("»¬¼ÀÀº ÃÑ %d¹ø ½ÇÇàµÇ¾ú½À´Ï´Ù\n", count);
	return a - b;
}

int mul(int a, int b) {
	static int count = 0;
	count++;
	printf("°ö¼ÀÀº ÃÑ %d¹ø ½ÇÇàµÇ¾ú½À´Ï´Ù\n", count);
	return a * b;
}

double div(int a, int b) {
	static int count = 0;
	count++;
	printf("³ª´°¼ÀÀº ÃÑ %d¹ø ½ÇÇàµÇ¾ú½À´Ï´Ù\n", count);
	return (double)a / b;
}