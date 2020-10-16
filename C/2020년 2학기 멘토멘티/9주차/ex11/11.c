#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main() {
	char s1[100], s2[100][100], * token, seps[] = " ,.";
	int count = 0;

	printf("string input : ");
	scanf("%[^\n]s", s1);

	token = strtok(s1, seps);
	for (int i = 0; token != NULL; i++) {
		count++;
		strcpy(s2[i], token);
		token = strtok(NULL, seps);
	}

	for (int i = count - 1; i >= 0; i--)
		printf("%s ", s2[i]);
}