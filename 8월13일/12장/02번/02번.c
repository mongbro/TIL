#include<stdio.h>
#include<string.h>

int main() {
	char str[100];				//��ũ����¡ �ҰŴϱ� �ʱ�ȭ ����
	char seps[] = " ,.";
	char* token;

	printf("�Է� : ");
	scanf("%[^\n]s", str);				//���ͻ����Է� �־��ֱ� �ȱ׷��� ������ �ν����� ����

	token = strtok(str, seps);

	while (token != NULL) {
		printf("%s", token);
		token = strtok(NULL, seps);
	}
}