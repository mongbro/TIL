#include<stdio.h>
#include<string.h>

int main() {
	char s[100];
	char* token;
	char seps[] = " .,\n";
	int n = 0;

	printf("���ڿ��� �Է��Ͻÿ� : ");
	gets_s(s, sizeof(s));

	token = strtok(s, seps);

	for (int i = 0; token != NULL; i++) {
		n++;
		token = strtok(NULL, seps);
	}

	printf("�ܾ��� ���� %d�Դϴ�.", n);

	return 0;
}