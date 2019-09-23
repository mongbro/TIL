#include<stdio.h>
#include"check.h"					//check_alpha 함수를 가지고 있는 헤더파일

int check_alpha(char a);			//char a를 검사해서 알파벳이면 1을 반환, 아니면 0을 반환할거다.

int main()
{
	char a;
	int result;
	printf("문자를 입력하시오 : ");
	scanf_s("%c", &a, 1);
	result = check_alpha(a);
	if (result == 1)
		printf("%c는 알파벳 문자 입니다.", a);
	else
		printf("%c는 알파벳이 아닙니다.", a);
	return 0;
}