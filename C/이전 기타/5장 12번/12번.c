#include <stdio.h>
int main()
{
	char a, b, c, d;
	unsigned int s;
	
	printf("첫번째 문자를 입력하시오: ");
	scanf("%c", &a);

	printf("두번째 문자를 입력하시오: ");
	scanf("\n%c", &b);

	printf("세번째 문자를 입력하시오: ");
	scanf("\n%c", &c);

	printf("네번째 문자를 입력하시오: ");
	scanf("\n%c", &d);

	s = a;
	s = b << 8 | s;
	s = c << 16 | s;
	s = d << 24 | s;

	printf("결과값: %x", s);

}