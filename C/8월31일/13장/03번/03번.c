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

	printf("제목 : ");
	gets_s(e.title, sizeof(e.title));
	printf("수신자 : ");
	gets_s(e.sender, sizeof(e.sender));
	printf("발신자 : ");
	gets_s(e.receiver, sizeof(e.receiver));
	printf("내용 : ");
	gets_s(e.content, sizeof(e.content));
	printf("날짜 : ");
	gets_s(e.date, sizeof(e.date));
	printf("우선순위 : ");
	scanf("%d", &e.pri);
	
	printf("\n=========================================\n\n");

	printf("제목 : %s\n", e.title);
	printf("수신자 : %s\n", e.sender);
	printf("발신자 : %s\n", e.receiver);
	printf("내용 : %s\n", e.content);
	printf("날짜 : %s\n", e.date);
	printf("우선순위 : %d", e.pri);

	return 0;
}