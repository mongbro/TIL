#include<stdio.h>
#include<string.h>

int str_chr(char*str, int c);

int main() {
	char str[100] = { 0 };
	int c=0;

	printf("���ڿ��� �Է��Ͻÿ� : ");
	scanf("%[^\n]s", str);

	 str_chr(str, c);
}

int str_chr(char*str, int c) {
	char a;
	printf("���ڸ� �Է��Ͻÿ� : ");
	scanf("\n%c", &a);
	
	for (int i = 0; str[i] != NULL; i++) {
		if (str[i] == a)
			c++;
	}

	printf("%c�� ������ %d", a, c);
}