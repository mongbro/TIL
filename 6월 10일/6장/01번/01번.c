#include<stdio.h>
int main()
{
	char inp;
	printf("문자를 입력하시오 : ");
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
		printf("모음입니다.");
		break;
	default:
		printf("자음입니다.");
		break;
	}
	return 0;
}