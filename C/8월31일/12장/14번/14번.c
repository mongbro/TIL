#include<stdio.h>
#include<string.h>

void change(char* s, char* find);

int main() {
	char s[100] = { 0 };
	char find[20];

	printf("���� ���ڿ� : ");
	gets_s(s, sizeof(s));
	printf("ã�� ���ڿ� : ");
	gets_s(find, sizeof(find));

	change(s, find);

	return 0;
}

void change(char* s, char* find) {
	char cha[20];
	char* token;
	
	printf("�ٲ� ���ڿ� : ");
	gets_s(cha, sizeof(cha));
	
	printf("�ٲ� ���ڿ� : ");

	token = strtok(s, " ");
	for (int i = 0; token != NULL; i++) {
		if (strcmp(token, find) == 0)
			strcpy(token, cha);
		printf("%s ", token);
		token = strtok(NULL, " ");
	}
}