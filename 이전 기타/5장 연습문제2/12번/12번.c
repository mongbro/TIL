#include<stdio.h>
int main(void)
{
	char a, b, c, d;
	unsigned int result;

	printf("ù��° ���ڸ� �Է��Ͻÿ� : ");
	scanf_s("%c", &a);
	printf("�ι�° ���ڸ� �Է��Ͻÿ� : ");
	scanf_s("\n%c", &b);
	printf("����° ���ڸ� �Է��Ͻÿ� : ");
	scanf_s("\n%c", &c);
	printf("�׹�° ���ڸ� �Է��Ͻÿ� : ");
	scanf_s("\n%c", &d);

	result = a;
	result = b << 8 | result;
	result = c << 16 | result;
	result = d << 24 | result;

	printf("����� : %x", result);
	return 0;
}