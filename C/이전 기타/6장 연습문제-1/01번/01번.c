/*영어 자음모음 구분하는 프로그램*/

#include<stdio.h>
int main()
{
	char c;

	printf("알파벳을 입력하시오 : ");
	c = getchar();

	if (c < 65 || c>90 && c < 97 || c>122)
		printf("알파벳이 아닙니다.");
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
			printf("모음입니다.");
			break;
		default:
			printf("자음입니다.");
			break;
		}

	return 0;
}