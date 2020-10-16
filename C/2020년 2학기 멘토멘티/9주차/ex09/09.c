#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main() {
	char s[100];
	int len;

	printf("문자열 입력 : ");
	scanf("%[^\n]s", s);

	len = strlen(s);

	if (islower(s[0]))
		s[0] = toupper(s[0]);
	
	if (s[len - 1] != '.')
		strcat(s, ".");
	printf("수정된 입력 : %s", s);
}