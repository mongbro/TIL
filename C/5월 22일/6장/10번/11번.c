#include<stdio.h>
int main()
{
	char a;
	printf("���ڸ� �Է��Ͻÿ� : ");
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