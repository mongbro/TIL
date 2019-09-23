#include<stdio.h>
#include<string.h>

void change(char* s, char* find);

int main() {
	char s[100] = { 0 };
	char find[20];

	printf("원본 문자열 : ");
	gets_s(s, sizeof(s));
	printf("찾을 문자열 : ");
	gets_s(find, sizeof(find));

	change(s, find);

	return 0;
}

void change(char* s, char* find) {
	char cha[20];
	char* token;
	
	printf("바꿀 문자열 : ");
	gets_s(cha, sizeof(cha));
	
	printf("바뀐 문자열 : ");

	token = strtok(s, " ");
	for (int i = 0; token != NULL; i++) {
		if (strcmp(token, find) == 0)
			strcpy(token, cha);
		printf("%s ", token);
		token = strtok(NULL, " ");
	}
}