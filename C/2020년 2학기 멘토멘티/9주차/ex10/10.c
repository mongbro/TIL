#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main() {
	char s[100];
	int len, is_palin = 1;

	printf("string input : ");
	scanf("%[^\n]s", s);

	len = strlen(s);

	for (int i = 0; i < len; i++) {
		if (s[i] != s[len - i - 1])
			is_palin = 0;
	}
	if (is_palin == 1)
		printf("회문");
	else
		printf("회문 아님");
}