#include<stdio.h>
#include<string.h>

int main() {
	char str[100];
	char* token;
	char reverse[100][100] = { 0 };			//2�߹迭�� ���� ������ ��ū�� �ϳ��� �迭�� ������
	int count = 0;											//��ū�� ����

	printf("���ڿ��� �Է��Ͻÿ� : ");
	gets_s(str, sizeof(str));							//get_s���� ���� ������

	token = strtok(str, " ");
	for (int i = 0; token != NULL; i++) {
		count++;
		strcpy(reverse[i], token);
		token = strtok(NULL, " ");
	}

	for (int i = count; i >= 0; i--) {
		printf("%s ", reverse[i]);
	}

	return 0;
}