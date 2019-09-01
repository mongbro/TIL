#include<stdio.h>
#include<string.h>
#include<ctype.h>

void change(char* str);

int main() {
	char str[100] = { 0 };
	
	printf("성과 이름을 대문자로 입력하시오 : ");
	gets_s(str, sizeof(str));

	change(str);

	return 0;
}

void change(char* str) {
	char* token;
	char name[2][100];

	for (int i = 0; str[i] != NULL; i++) {
		if (isupper(str[i]))
			str[i] = tolower(str[i]);
	}
	
	token = strtok(str, " ");

	for (int i = 0; token != NULL; i++) {
		strcpy(name[i], token);
		token = strtok(NULL, " ");
	}
	
	printf("%s, %s", name[1], name[0]);
	
}