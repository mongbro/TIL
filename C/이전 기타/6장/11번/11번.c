#include<stdio.h>
int main()
{
	char c;
	printf("���ڸ� �Է��Ͻÿ� : ");
	c = getchar();

	switch (c) {
	case 'r':
	case 'R':
		printf("Rectangle");
		break;
	case 'T':
	case 't':
		printf("Triangle");
		break;
	case'C':
	case'c':
		printf("Circle");
		break;
	default:
		printf("Unknown");
		break;
	}
	return 0;
}