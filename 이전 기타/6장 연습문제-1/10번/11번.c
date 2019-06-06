/*문자 바꿔서 출력하기*/

#include<stdio.h>
int main()
{
	char c;
	printf("문자를 입력하시오 : ");
	c = getchar();

	switch (c) 
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
		printf("Ractangle");
		break;
	default:
		printf("Uknown");
		break;
	}

	return 0;
}