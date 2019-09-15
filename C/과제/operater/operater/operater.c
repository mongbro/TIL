#include<stdio.h>

char menu();									//�����ϴ� �Լ�
int add(int x, int y);						//���ϱ� �Լ�
int diff(int x, int y);						//���� �Լ�
int mul(int x, int y);					//���ϱ� �Լ�
double div(double x, double y);						//������ �Լ�

int main() {
	int x, y;						// + - * �϶� �޴� �μ�
	double a, b;				// / �϶� �޴� �μ�
	char op;						//���� ���ù��� ����

	while (1) {							//���ѹݺ�
		op = menu();

		if (op == 'q')					//���꿡 'q'�� �Է��ϸ�
			break;							//Ż��

		if (op == '/') {
			printf("�� ���� �Է��Ͻÿ� : ");
			scanf("%lf %lf", &a, &b);
		}
		else {
			printf("�� ���� �Է��Ͻÿ� : ");
			scanf("\n%d %d", &x, &y);
		}

		switch (op) {
		case '+':
			printf("���� ��� : %d", add(x, y));
			break;
		case '-':
			printf("���� ��� : %d", diff(x, y));
			break;
		case '*':
			printf("���� ��� : %d", mul(x, y));
			break;
		case '/':
			printf("���� ��� : %lf", div(a, b));
			break;
		}
		printf("\n");
	}
}

char menu() {
	char op;

	printf("������ �����Ͻÿ�(���� : q) : ");
	scanf("\n%c", &op);

	return op;
}

int add(int x, int y) {
	return x + y;
}

int diff(int x, int y) {
	return x - y;
}

int mul(int x, int y) {
	return x * y;
}

double div(double x, double y) {
	return x / y;
}