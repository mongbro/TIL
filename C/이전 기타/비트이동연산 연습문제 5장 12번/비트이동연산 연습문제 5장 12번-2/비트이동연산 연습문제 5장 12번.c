#include<stdio.h>
void main()
{
	char a, b, c, d;
	unsigned int x;
	printf("ù��° ���ڸ� �Է��Ͻÿ� : ");
	scanf("%c", &a);
	printf("�ι�° ���ڸ� �Է��Ͻÿ� : ");
	scanf("\r%c", &b);
	printf("����° ���ڸ� �Է��Ͻÿ� : ");
	scanf("\r%c", &c);
	printf("�׹�° ���ڸ� �Է��Ͻÿ� : ");
	scanf("\r%c", &d);

	x = a;
	x = b << 8 | x;
	x = c << 16 | x;
	x = d << 24 | x;

	printf("����� : %x", x);
	return 0;
}