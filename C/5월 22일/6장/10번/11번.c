#include<stdio.h>
int main()
{
	char a;
	printf("문자를 입력하시오 : ");
	a = getchar();

	switch (a)
	{
	case 'R':
	case 'r':
		printf("Rectangle");
		break;
	case 'T':
	case 't':
		printf("Triangle");
		break;
	case 'C':
	case 'c':
		printf("Circle");
		break;
	}
	return 0;
}