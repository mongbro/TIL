#include<stdio.h>
int main()
{
	char c;

	printf("문자를 입력하시오 : ");
	c = getchar();

	switch (c) 
	{
	case 'a': case 'i': case 'u': case 'e': case 'o': case 'A': case 'I': case 'U': case 'E': case 'O':
		printf("모음입니다.");
		break;
	default :
		if (c < 65 || c > 90 && c < 97 || c > 122)
			printf("문자가 아닙니다.");
		else
			printf("자음입니다.");
	}

	return 0;

}