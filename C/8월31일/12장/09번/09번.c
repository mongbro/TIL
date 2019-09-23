#include<stdio.h>
#include<string.h>
#include<ctype.h>

void change_string(char* s);

int main() {
	char s[100];

	printf("문자열을 입력하시오 : ");
	gets_s(s, sizeof(s));

	change_string(s);

	printf("수정된 문자열 : %s", s);

	return 0;
}

void change_string(char* s) {
	if (s[strlen(s) - 1] != '.')
		strcat(s, ".");
	if (islower(s[0]))
		s[0] = toupper(s[0]);
}