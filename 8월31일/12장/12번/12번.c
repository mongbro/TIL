#include<stdio.h>
#include<string.h>
#include<ctype.h>

void str_lower(char* name);

int main() {
	char name[50] = { 0 };
	char* token;
	char seps[] = " .,\n";
	char s[2][30] = { 0 };

	printf("성과 이름을 대문자로 입력하시오 : ");
	gets_s(name, sizeof(name));

	str_lower(name);

	token = strtok(name, seps);
	for (int i = 0; token != NULL; i++) {
		strcpy(s[i], token);
		token = strtok(NULL, seps);
	}

	printf("%s, %s", s[1], s[0]);

	return 0;
}

void str_lower(char* name) {
	for (int i = 0; i < strlen(name); i++) {
		if(isupper(name[i]))
			name[i] = tolower(name[i]);
	}
}