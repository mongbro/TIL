#include<stdio.h>
#include<string.h>

struct email {
	char title[100] ;
	char sender[100];
	char receiver[100];
	char content[100];
	char data[100];
	int pri;
};

int main() {
	struct email e;
	strcpy(e.title, "�Ⱥ� ����");
	strcpy(e.sender, "chulsoo@hankuk.ac.kr");
	strcpy(e.receiver, "hsh@hankuk.ac.kr");
	strcpy(e.content, "�ȳ��Ͻʴϱ�? ���� ����������?");
	strcpy(e.data, "2010/9/1");
	e.pri = 1;

	printf("���� : %s\n������  : %s\n�߽��� : %s\n���� : %s\n��¥ : %s\n�켱���� : %d", e.title, e.sender, e.receiver, e.content, e.data, e.pri);
}