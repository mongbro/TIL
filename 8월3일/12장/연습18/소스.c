#include<stdio.h>
#include<ctype.h>
#include<string.h>
int count_word(char* s);
int main() {
	char str[100];
	printf("���ڸ� �Է��Ͻÿ� : ");
	scanf("%[^\n]s", str);									//" %[^\n]s " ����Ű�� �����ϰ� ��� �޴´�.     �׳� %s�� ���� ���鿡�� ��������.***********************
	printf("%s�� %d���� �ܾ��Դϴ�.\n", str, count_word(str));
	return 0;
}

int count_word(char* s) {
	int wc = 0, waiting=1;
	for (int i = 0; s[i] != '\0'; i++) {
		if (isalpha(s[i])) {
			if (waiting) {
				wc++;
				waiting = 0;
			}
		}
		else
			waiting = 1;
	}
	return wc;
}