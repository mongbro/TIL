#include<stdio.h>
#include<ctype.h>
#include<string.h>

int get_response(char* s);

int main() {
	char s[10];

	printf("������ �Ͻðڽ��ϱ�? ");
	gets_s(s, sizeof(s));

	if (get_response(s))
		printf("�������� �亯");
	else
		printf("�������� �亯");

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