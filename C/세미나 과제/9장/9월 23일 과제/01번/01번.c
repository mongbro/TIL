#include<stdio.h>
#include<conio.h>
#include"mong.h"

int main() {
	int a, b, result;
	double result2;
	char op;
	while (1) {
		printf("연산을 입력하시오 : ");
		scanf("%d%c%d", &a, &op, &b);
	
		switch (op) {
		case '+':
			countadd++;
			result = add(a, b);
			printf("덧셈 연산은 총 %d번 실행되었습니다.\n", countadd);
			printf("연산 결과 : %d\n", result);
			break;
		case '-':
			countdiff++;
			result = diff(a, b);
			printf("뺄셈 연산은 총 %d번 실행되었습니다.\n", countdiff);
			printf("연산 결과 : %d\n", result);
			break;
		case '*':
			countmul++;
			result = mul(a, b);
			printf("곱셈 연산은 총 %d번 실행되었습니다.\n", countmul);
			printf("연산 결과 : %d\n", result);
			break;
		case '/':
			countdiv++;
			result2 = div(a, b);
			printf("나눗셈 연산은 총 %d번 실행되었습니다.\n", countdiv);
			printf("연산 결과 : %lf\n", result2);
			break;
		}
	}
}