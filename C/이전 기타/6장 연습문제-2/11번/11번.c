#include<stdio.h>
int main()
{
	char a;
	printf("���ڸ� �Է��Ͻÿ� : ");
	a = getchar();

	switch (a) {
	case 'r':
	case 'R':
		printf("Rectangle");
		break;
	case 't':
	case 'T':
		printf("Trangle");
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