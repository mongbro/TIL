/*���� �ٲ㼭 ����ϱ�*/

#include<stdio.h>
int main()
{
	char c;
	printf("���ڸ� �Է��Ͻÿ� : ");
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