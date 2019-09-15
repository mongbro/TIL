#include<stdio.h>
#include<string.h>

int str_chr(char* s, int c);

int main() {
	char s[50];

	printf("문자열을 입력하시오 : ");
	gets_s(s, sizeof(s));

	for (char c = 'a'; c <= 'z'; c++) {
		printf("%c : %d\n", c, str_chr(s, c));
	}

	return 0;
}

int str_chr(char* s, int c) {
	int n = 0;

	for (int i = 0; i < strlen(s); i++) {
		if (s[i] == c)
			n++;
	}
	return n;
}