#include<stdio.h>
int main()
{
	char a;
	printf("문자를 입력하시오 : ");
	scanf_s("%c", &a, 1);
	switch (a)
	{
	case 'r':
	case 'R':
		printf("Rectangle");
		break;
	case 'c':
	case 'C':
		printf("Circle");
		break;
	case 't':
	case 'T':
		printf("Triangle");
		break;
	default:
		printf("Unknown");
		break;
	}
	return 0;
}