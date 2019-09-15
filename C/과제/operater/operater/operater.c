#include<stdio.h>

char menu();									//선택하는 함수
int add(int x, int y);						//더하기 함수
int diff(int x, int y);						//빼기 함수
int mul(int x, int y);					//곱하기 함수
double div(double x, double y);						//나누기 함수

int main() {
	int x, y;						// + - * 일때 받는 인수
	double a, b;				// / 일때 받는 인수
	char op;						//연산 선택받을 변수

	while (1) {							//무한반복
		op = menu();

		if (op == 'q')					//연산에 'q'를 입력하면
			break;							//탈출

		if (op == '/') {
			printf("두 수를 입력하시오 : ");
			scanf("%lf %lf", &a, &b);
		}
		else {
			printf("두 수를 입력하시오 : ");
			scanf("\n%d %d", &x, &y);
		}

		switch (op) {
		case '+':
			printf("연산 결과 : %d", add(x, y));
			break;
		case '-':
			printf("연산 결과 : %d", diff(x, y));
			break;
		case '*':
			printf("연산 결과 : %d", mul(x, y));
			break;
		case '/':
			printf("연산 결과 : %lf", div(a, b));
			break;
		}
		printf("\n");
	}
}

char menu() {
	char op;

	printf("연산을 선택하시오(종료 : q) : ");
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