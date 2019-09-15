#include<stdio.h>
int get_integer();					//scanf대신 사용하는 함수
int factorial(int x);				//입력값의 펙토리얼을 구하는 함수
int combination(int a, int b);		//aCb를 구하는 함수     aCb = a!/((a-b)!b!)

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
	printf("정수를 입력하시오 : ");
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