#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<ctype.h>

int get_response(char* prompt);

int main() {
	char answer[5];
	printf("����? ");
	scanf("%s", answer);

	if (get_response(answer) == 1)
		printf("����");
	else if (get_response(answer) == 0)
		printf("����");
	else if (get_response(answer) == 2)
		printf("unknown");
}

int get_response(char* prompt) {
	int len = strlen(prompt);

	for (int i = 0; i < len; i++) {
		if (isupper(*(prompt + i)))
			*(prompt + i) = tolower(*(prompt + i));
	}
	if (strcmp(prompt, "yes") == 0 || strcmp(prompt, "ok") == 0)
		return 1;
	else if (strcmp(prompt, "no") == 0)
		return 0;
	else return 2;
}