#include <stdio.h>
int main()
{
	char a, b, c, d;
	unsigned int s;
	
	printf("ù��° ���ڸ� �Է��Ͻÿ�: ");
	scanf("%c", &a);

	printf("�ι�° ���ڸ� �Է��Ͻÿ�: ");
	scanf("\n%c", &b);

	printf("����° ���ڸ� �Է��Ͻÿ�: ");
	scanf("\n%c", &c);

	printf("�׹�° ���ڸ� �Է��Ͻÿ�: ");
	scanf("\n%c", &d);

	s = a;
	s = b << 8 | s;
	s = c << 16 | s;
	s = d << 24 | s;

	printf("�����: %x", s);

}