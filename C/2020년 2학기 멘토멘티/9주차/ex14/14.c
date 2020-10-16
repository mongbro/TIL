#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main() {
	char s[100], search[30], change[30], seps[] = ",. \n";
	char* token;

	printf("string input : ");
	scanf("%[^\n]s", s);

	printf("search string : ");
	scanf("%s", search);
	printf("change string : ");
	scanf("%s", change);

	token = strtok(s, seps);
	while (token != NULL) {
		if (strcmp(token, search) == 0)
			token = change;
		printf("%s ", token);
		token = strtok(NULL, seps);
	}
}