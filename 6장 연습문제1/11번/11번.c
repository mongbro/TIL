#include<stdio.h>
int main()
{
	char a;
	printf("문자를 입력하시오 : ");
	a = getchar();

	switch (a) {
	case 'r':
	case 'R':
		printf("Rectangle");
		break;
	case 't':
	case 'T':
		printf("Triangle");
		break;
	case 'c':
	case 'C':
		printf("Circle");
		break;
	default:
		printf("Unknown");
		break;
	}
	return 0;
}