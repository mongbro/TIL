#include<stdio.h>
void main()
{
	char a, b, c, d;
	unsigned int x;
	printf("첫번째 문자를 입력하시오 : ");
	scanf("%c", &a);
	printf("두번째 문자를 입력하시오 : ");
	scanf("\r%c", &b);
	printf("세번째 문자를 입력하시오 : ");
	scanf("\r%c", &c);
	printf("네번째 문자를 입력하시오 : ");
	scanf("\r%c", &d);

	x = a;
	x = b << 8 | x;
	x = c << 16 | x;
	x = d << 24 | x;

	printf("결과값 : %x", x);
	return 0;
}