/*�������*/

#include<stdio.h>
int main()
{
	char a;
	printf("���ڸ� �Է��Ͻÿ� : ");
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