#include<stdio.h>
#include<string.h>

int str_chr(char* str, char c);

int main() {
	char str[100] = { 0 };
	char c;

	printf("���ڿ��� �Է��Ͻÿ� : ");
	scanf("%[^\n]s", str);

	printf("������ �� ���ڸ� �Է��Ͻÿ� : ");
	scanf("\n%c", &c);
	
	printf("%c�� ���� : %d", c, str_chr(str, c));
}

int str_chr(char* str, char c) {
	int n=0;

	for (int i = 0; str[i] != NULL; i++) {
		if (str[i] == c)
			n++;
	}
	return n;
}