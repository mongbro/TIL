#include<stdio.h>
#include<string.h>
int main() {
	char str1[100];
	char str2[100];
	printf("ù��° �ܾ� �Է�");
	scanf_s("%s", str1, sizeof(str1));
	printf("�ι�° �ܾ� �Է�");
	scanf_s("%s", str2, sizeof(str2));
	printf("\n\n");
	if (strcmp(str1, str2) > 0)
		printf("%s�� �ܾ ���������� ��", str2);
	else if (strcmp(str1, str2) == 0)
		printf("%s�� %s�� ����", str1, str2);
	else
		printf("%s�� �ܾ ���������� ��", str1);
	printf("\n\n");
}