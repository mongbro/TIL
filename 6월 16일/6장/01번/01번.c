#include<stdio.h>
int main()
{
	char a;
	printf("���ڸ� �Է��Ͻÿ� : ");
	scanf_s("%c", &a, 1);
	switch (a)
	{
	case 'O':
	case 'E':
	case 'U':
	case 'I':
	case 'A':
	case 'o':
	case 'e':
	case 'u':
	case 'i':
	case 'a':
		printf("�����Դϴ�.");
		break;
	default:
		printf("�����Դϴ�.");
		break;
	}
	return 0;
}