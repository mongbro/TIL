#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main() {
	char s[100], seps[] = " ,.\n";
	char* token;
	int count = 0;

	printf("���ڿ��Է� : ");
	scanf("%[^\n]s", s);

	token = strtok(s, seps);
	while (token != NULL) {
		count++;
		token = strtok(NULL, seps);
	}
	printf("�ܾ�� : %d", count);
}