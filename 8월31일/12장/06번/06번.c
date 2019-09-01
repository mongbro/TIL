#include<stdio.h>
#include<string.h>
#include<ctype.h>

void str_upper(char* s);

int main() {
	char s[100];

	printf("문자열을 입력하시오 : ");
	gets_s(s, sizeof(s));

	str_upper(s);

	printf("변환된 문자열 : %s", s);

	return 0;
}

void str_upper(char* s) {
	for (int i = 0; i < strlen(s); i++) {
		if (islower(s[i]))
			s[i] = toupper(s[i]);
	}
}