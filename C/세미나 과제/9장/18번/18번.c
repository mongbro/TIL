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
		printf("���ϴ� �޴��� �����Ͻÿ� : ");
		scanf(" %d", &c);
		n = get_integer();
		m = get_integer();
		switch (c) {
		case 1:
			printf("���� ��� : %d\n", add(n, m));
			break;
		case 2:
			printf("���� ��� : %d\n", diff(n, m));
			break;
		case 3:
			printf("���� ��� : %d\n", mul(n, m));
			break;
		case 4:
			printf("���� ��� : %lf\n", div(n, m));
			break;
		case 5:
			printf("���� ��� : %d\n", mod(n, m));
			break;
		}
		printf("����Ϸ��� y�� �����ÿ� : ");
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
	printf("1. ����\n");
	printf("2. ����\n");
	printf("3. ����\n");
	printf("4. ������\n");
	printf("5. ������\n");
}
int get_integer() {
	int n;
	printf("������ �Է� : ");
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