#include<stdio.h>
int main()
{
	char a;
	printf("문자를 입력하시오 : ");
	a = getchar();

	switch (a) {
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
		printf("모음입니다.");
		break;
	default:
		printf("자음입니다.");
		break;
	}
	return 0;
}