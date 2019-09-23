#pragma once
#include<stdio.h>

void menu();
void loop();
int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int div(int a, int b);
int mod(int a, int b);

void menu()
{
	printf("===============================\n");
	printf("MENU\n");
	printf("===============================\n");
	printf("1. 덧셈\n");
	printf("2. 뺄셈\n");
	printf("3. 곱셈\n");
	printf("4. 나눗셈\n");
	printf("5. 나머지\n");
	loop();
}
void loop()
{
	int a, b, op, result;
	char con;
	while (1)
	{
		printf("원하는 메뉴를 입력하시오(1~5) : ");
		scanf_s("%d", &op);
		printf("숫자 2개를 입력하시오 : ");
		scanf_s("%d%d", &a, &b);

		switch (op)
		{
		case 1:
			result = add(a, b);
			break;
		case 2:
			result = sub(a, b);
			break;
		case 3:
			result = mul(a, b);
			break;
		case 4:
			result = div(a, b);
			break;
		case 5:
			result = mod(a, b);
			break;
		}

		printf("연산결과 : %d\n", result);
		printf("계속하려면 y를 누르시오 : ");
		scanf_s("\n%c", &con, 1);
		if (con != 'y' && con != 'Y')
			break;
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
int mod(int a, int b)
{
	return a % b;
}