#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main() {
	char s[100];
	int count[25] = { 0 }, len;

	printf("문자열 입력 : ");
	scanf("%[^\n]s", s);

	len = strlen(s);

	for (int i = 0; i < len; i++) {
		count[s[i] - 97]++;
	}

	for (int i = 0; i < 25; i++) {
		printf("%c : %d\n", 'a' + i, count[i]);
	}
}