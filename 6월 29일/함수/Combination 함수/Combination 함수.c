#include<stdio.h>
int get_integer();					//scanf��� ����ϴ� �Լ�
int factorial(int x);				//�Է°��� ���丮���� ���ϴ� �Լ�
int combination(int a, int b);		//aCb�� ���ϴ� �Լ�     aCb = a!/((a-b)!b!)

int main()
{
	int x = get_integer();
	int y = get_integer();
	printf("%d", combination(x, y));
	return 0;
}
int get_integer()
{
	int value;
	printf("������ �Է��Ͻÿ� : ");
	scanf_s("%d", &value);
	return value;
}
int factorial(int x)
{
	int result = 1;
	for (x; x >= 1; x--)
	{
		result *= x;
	}
	return result;
}
int combination(int a, int b)
{
	return factorial(a) / factorial(a - b) / factorial(b);
}