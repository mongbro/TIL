#include<stdio.h>
#include<string.h>

int main() {
	char a[50] = { 0 };
	char* token;
	char seps[] = " .,\n";

	printf("������ �ִ� ���ڿ��� �Է��Ͻÿ� : ");
	gets_s(a, sizeof(a));

	token = strtok(a, seps);

	for (int i = 0; token != NULL; i++) {
		printf(token);
		token = strtok(NULL, seps);
	}
	return 0;
}