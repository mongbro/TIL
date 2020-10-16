#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<ctype.h>

void str_upper(char* s);

int main() {
	char s[100];

	printf("문자열 입력 : ");
	scanf("%s", s);

	str_upper(s);
	printf(s);
}

void str_upper(char* s) {
	int len = strlen(s);
	for (int i = 0; i < len; i++) {
		if (islower(*(s + i)))
			*(s+i) = toupper(*(s+i));
	}
}