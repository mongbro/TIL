#include<stdio.h>
#include<string.h>

int str_chr(char* s, int c);

int main() {
	char s[50];
	char c;

	printf("���ڿ��� �Է��Ͻÿ� : ");
	gets_s(s, sizeof(s));
	printf("������ �� ���ڸ� �Է��Ͻÿ� : ");
	scanf("%c", &c);

	printf("%s���� %c�� ���� : %d", s, c, str_chr(s, c));

	return 0;
}

int str_chr(char* s, int c) {
	int n = 0;

	for (char* p = s; *p != '\0'; p++) {				//�������� ���� p�� ���ڿ�s�� ���������� �ΰ� ���ڿ��� ������ ����(\0)���� �ݺ��Ѵ�.
		if (*p == c)													//�����Ͱ� ����Ű�� ���ڰ� c�� ���ٸ�
			n++;
	}
	return n;
}