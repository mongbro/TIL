/*���� �������� �����ϴ� ���α׷�*/

#include<stdio.h>
int main()
{
	char c;

	printf("���ĺ��� �Է��Ͻÿ� : ");
	c = getchar();

	if (c < 65 || c>90 && c < 97 || c>122)
		printf("���ĺ��� �ƴմϴ�.");
	else
		switch (c)
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