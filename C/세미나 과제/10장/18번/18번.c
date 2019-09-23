#include<stdio.h>

void menu();
int get_integer();
int add(int n, int m);
int diff(int n, int m);
int mul(int n, int m);
double div(int n, int m);
int mod(int n, int m);

int main() {
	int n, m, c;
	char cho;

	while (1) {
		menu();
		printf("원하는 메뉴를 선택하시오 : ");
		scanf(" %d", &c);
		n = get_integer();
		m = get_integer();
		switch (c) {
		case 1:
			printf("연산 결과 : %d\n", add(n, m));
			break;
		case 2:
			printf("연산 결과 : %d\n", diff(n, m));
			break;
		case 3:
			printf("연산 결과 : %d\n", mul(n, m));
			break;
		case 4:
			printf("연산 결과 : %lf\n", div(n, m));
			break;
		case 5:
			printf("연산 결과 : %d\n", mod(n, m));
			break;
		}
		printf("계속하려면 y를 누르시오 : ");
		scanf(" %c", &cho);
		if (cho != 'y')
			break;
		printf("\n");
	}
}

void menu() {
	printf("===========================\n");
	printf("MENU\n");
	printf("===========================\n");
	printf("1. 덧셈\n");
	printf("2. 뺄셈\n");
	printf("3. 곱셈\n");
	printf("4. 나눗셈\n");
	printf("5. 나머지\n");
}
int get_integer() {
	int n;
	printf("정수를 입력 : ");
	scanf("%d", &n);
	return n;
}

int add(int n, int m) {
	return n + m;
}

int diff(int n, int m) {
	return n - m;
}

int mul(int n, int m) {
	return n * m;
}

double div(int n, int m) {
	return (double)n / m;
}

int mod(int n, int m) {
	return n % m;
}