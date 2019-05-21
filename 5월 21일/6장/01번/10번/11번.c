/*문자출력*/

#include<stdio.h>
int main()
{
	char a;
	printf("문자를 입력하시오 : ");
	a = getchar();

	switch (a) 
	{
	case 'c':
	case 'C':
		printf("Circle");
		break;
	case 't':
	case 'T':
		printf("Triangle");
		break;
	case 'r':
	case 'R':
		printf("Rectangle");
		break;
	}
	return 0;
}