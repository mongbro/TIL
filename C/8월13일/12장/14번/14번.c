#include<stdio.h>
#include<string.h>

void change(char* str, char* find);

int main() {
	char str[300] = { 0 };				//����
	char find[100] = { 0 };			//ã�� �ܾ�

	printf("���ڿ��� �Է��Ͻÿ� : ");
	gets_s(str, sizeof(str));
	printf("ã�� ���ڿ� : ");
	gets_s(find, sizeof(find));

	change(str, find);

	return 0;
}

void change(char* str, char* find) {
	char chan[100] = { 0 };			//�ٲ� �ܾ�
	char* token;

	printf("�ٲ� ���ڿ� : ");
	gets_s(chan, sizeof(chan));

	token = strtok(str, " ");
	for (int i = 0; token != NULL; i++) {
		if (strcmp(find, token) == 0)			//ã�� �ܾ�� ���� ��ū�� �������
			token = chan;									//�� ��ū�� �ٲٴ� �ܾ�� �ٲ۴�.
		printf("%s ", token);
		token = strtok(NULL, " ");
	}
}