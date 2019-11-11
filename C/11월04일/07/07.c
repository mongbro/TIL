#include<stdio.h>
#include<string.h>
#include<ctype.h>

int get_response(char* prompt);

int main() {
	char str[10] = { 0 };
	printf("response : ");
	scanf("%s", str);
	if (get_response(str) == 1)
		printf("positive\n");
	else if (get_response(str) == 0)
		printf("negative\n");
	else
		printf("none\n");
	return 0;
}

int get_response(char* prompt) {
	for (int i = 0; i < strlen(prompt); i++) {
		if (isupper(*(prompt+i)))
			*(prompt + i) = tolower(*(prompt + i));
	}
	if (strcmp(prompt, "yes") == 0 || strcmp(prompt, "ok") == 0)
		return 1;
	else if (strcmp(prompt, "no") == 0)
		return 0;
	else
		return 2;
}