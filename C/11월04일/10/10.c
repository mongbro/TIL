#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main() {
	char str[200] = { 0 };
	printf("���ڿ� �Է� : ");
	scanf("%[^\n]s", str);
	for (int i = 0; i < strlen(str); i++)
		if (isupper(str[i]))
			str[i] = tolower(str[i]);
	for (int i = 0; i < strlen(str)/2; i++) {
		if (str[i] != str[strlen(str) - 1 - i]) {
			printf("ȸ���� �ƴմϴ�.\n");
			return 0;
		}
	}
	printf("ȸ���Դϴ�.\n");
	return 0;
}