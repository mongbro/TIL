#include<stdio.h>
void main()
{
	char a, b, c, d;
	unsigned int r = 0;

	printf("첫번째 문자를 입력하시오 : ");
	scanf("\n%c", &a);
	printf("두번째 문자를 입력하시오 : ");
	scanf("\n%c", &b);
	printf("세번째 문자를 입력하시오 : ");
	scanf("\n%c", &c);
	printf("네번째 문자를 입력하시오 : ");
	scanf("\n%c", &d);
	
	r = a;
	r = b << 8 | r;
	r = c << 16 | r;
	r = d << 24 | r;

	printf("결과값 : %x", r);
	return 0;
}