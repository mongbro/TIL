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
		printf("������ �Է��Ͻÿ� : ");
		scanf_s("%d", &a);
		scanf_s("%c", &op, 1);
		scanf_s("%d", &b);

		switch (op)
		{
		case '+':
			addn++;
			printf("������ �� %d�� ����Ǿ����ϴ�.\n", addn);
			result = add(a, b);
			break;
		case '-':
			subn++;
			printf("������ �� %d�� ����Ǿ����ϴ�.\n", subn);
			result = sub(a, b);
			break;
		case '*':
			muln++;
			printf("������ �� %d�� ����Ǿ����ϴ�.\n", muln);
			result = mul(a, b);
			break;
		case '/':
			divn++;
			printf("�������� �� %d�� ����Ǿ����ϴ�.\n", divn);
			result = div(a, b);
			break;
		}
		printf("���� ��� : %d\n", result);
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