#include<stdio.h>

struct email {
	char title[50];
	char sender[100];
	char receiver[100];
	char content[200];
	char date[15];
	int pri;
};

int main() {
	struct email e;

	printf("���� : ");
	gets_s(e.title, sizeof(e.title));
	printf("������ : ");
	gets_s(e.sender, sizeof(e.sender));
	printf("�߽��� : ");
	gets_s(e.receiver, sizeof(e.receiver));
	printf("���� : ");
	gets_s(e.content, sizeof(e.content));
	printf("��¥ : ");
	gets_s(e.date, sizeof(e.date));
	printf("�켱���� : ");
	scanf("%d", &e.pri);
	
	printf("\n=========================================\n\n");

	printf("���� : %s\n", e.title);
	printf("������ : %s\n", e.sender);
	printf("�߽��� : %s\n", e.receiver);
	printf("���� : %s\n", e.content);
	printf("��¥ : %s\n", e.date);
	printf("�켱���� : %d", e.pri);

	return 0;
}