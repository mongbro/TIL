#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main() {
	char s[100], seps[] = " ,.\n";
	char* token;

	printf("���ڿ� �Է� : ");
	scanf("%[^\n]s", s);

	token = strtok(s, seps);

	while (token != NULL) {
		printf(token);
		token = strtok(NULL, seps);
	}
}