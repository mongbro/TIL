#include<stdio.h>
int main()
{
	char inp;
	printf("���ڸ� �Է��Ͻÿ� : ");
	scanf_s("%c", &inp, 1);
	switch (inp)
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