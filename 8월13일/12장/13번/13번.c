#include<stdio.h>
#include<string.h>

int check(char* str);

int main() {
	char str[100];

	printf("���ڿ��� �Է��Ͻÿ� : ");
	gets_s(str, sizeof(str));

	printf("�������� ������ %d�Դϴ�.", check(str));

	return 0;
}

int check(char* str) {
	int count = 0;

	for (int i = 0; str[i] != NULL; i++) {
		if (str[i] == '.' || str[i] == ',')
			count++;
	}
	return count;
}