#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main() {
	char str[200] = { 0 };
	printf("���ڿ� : ");
	scanf("%[^\n]s", str);

	if (islower(str[0]))
		str[0] = toupper(str[0]);
	if (str[strlen(str) - 1] != '.')
		strcat(str, ".");
	printf("������ ���ڿ� : %s", str);
}