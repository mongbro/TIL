#include<stdio.h>
int main()
{
	char a;
	printf("���ڸ� �Է��Ͻÿ� : ");
	scanf_s("%c", &a, 1);
	switch (a)
	{
	case 'a':
	case 'i':
	case 'u':
	case 'e':
	case 'o':
	case 'A':
	case 'I':
	case 'U':
	case 'E':
	case 'O':
		printf("�����Դϴ�.");
		break;
	default:
		printf("�����Դϴ�.");
		break;
	}
	return 0;
}