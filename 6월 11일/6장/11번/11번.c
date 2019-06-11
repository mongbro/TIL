#include<stdio.h>
int main()
{
	char a;
	printf("문자를 입력하시오 : ");
	scanf_s("%c", &a, 1);
	switch (a)
	{
	case 'R':
	case 'r':
		printf("Rectangle");
		break;
	case 'T':
	case 't':
		printf("triangle");
		break;
	case 'C':
	case 'c':
		printf("Circle");
		break;
	default:
		printf("Unknown");
		break;
	}
	return 0;
}