#include<stdio.h>
void main()
{
	char a, b, c, d;
	unsigned int r = 0;

	printf("ù��° ���ڸ� �Է��Ͻÿ� : ");
	scanf("\n%c", &a);
	printf("�ι�° ���ڸ� �Է��Ͻÿ� : ");
	scanf("\n%c", &b);
	printf("����° ���ڸ� �Է��Ͻÿ� : ");
	scanf("\n%c", &c);
	printf("�׹�° ���ڸ� �Է��Ͻÿ� : ");
	scanf("\n%c", &d);
	
	r = a;
	r = b << 8 | r;
	r = c << 16 | r;
	r = d << 24 | r;

	printf("����� : %x", r);
	return 0;
}