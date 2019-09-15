#pragma once
#include<stdio.h>

void cal();
int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int div(int a, int b);

int addn = 0, subn = 0, muln = 0, divn = 0;

void cal()
{
	int a, b, result;
	char op;
	while (1)
	{
		printf("연산을 입력하시오 : ");
		scanf_s("%d", &a);
		scanf_s("%c", &op, 1);
		scanf_s("%d", &b);

		switch (op)
		{
		case '+':
			addn++;
			printf("덧셈은 총 %d번 실행되었습니다.\n", addn);
			result = add(a, b);
			break;
		case '-':
			subn++;
			printf("뺄셈은 총 %d번 실행되었습니다.\n", subn);
			result = sub(a, b);
			break;
		case '*':
			muln++;
			printf("곱셈은 총 %d번 실행되었습니다.\n", muln);
			result = mul(a, b);
			break;
		case '/':
			divn++;
			printf("나눗셈은 총 %d번 실행되었습니다.\n", divn);
			result = div(a, b);
			break;
		}
		printf("연산 결과 : %d\n", result);
	}
}
int add(int a, int b)
{

	return a + b;
}
int sub(int a, int b)
{

	return a - b;
}
int mul(int a, int b)
{

	return a * b;
}
int div(int a, int b)
{

	return a / b;
}