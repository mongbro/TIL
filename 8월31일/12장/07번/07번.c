#include<stdio.h>
#include<ctype.h>
#include<string.h>

int get_response(char* s);

int main() {
	char s[10];

	printf("게임을 하시겠습니까? ");
	gets_s(s, sizeof(s));

	if (get_response(s))
		printf("긍정적인 답변");
	else
		printf("부정적인 답변");

	return 0;
}

int get_response(char* s) {
	for (int i = 0; i < strlen(s); i++) {
		if (isupper(s[i]))
			s[i] = tolower(s[i]);
	}

	if (strcmp(s, "yes") == 0 || strcmp(s, "ok") == 0)
		return 1;
	else 
		return 0;
}