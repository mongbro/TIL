#include<stdio.h>
#include<string.h>
#include<ctype.h>

int check(char* s);

int main() {
	char s[100];

	printf("���ڿ��� �Է��Ͻÿ� : ");
	gets_s(s, sizeof(s));

	if (check(s) == 1)
		printf("ȸ���Դϴ�.");
	else
		printf("ȸ���� �ƴմϴ�.");

	return 0;
}

int check(char* s) {
	for (int i = 0; i < strlen(s); i++) {
		if (isupper(s[i]))
			s[i] = tolower(s[i]);
	}

	for (int i = 0; i < strlen(s); i++) {
		if (s[i] != s[strlen(s) - i-1])
			return 0;
	}
	return 1;
}