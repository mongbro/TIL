#include<stdio.h>

struct email {
	char title[20];
	char sender[100];
	char receiver[100];
	char content[200];
	char date[20];
	int pri;
};

int main(){
	struct email e = { "�Ⱥθ���", "chulsoo@hankuk.ac.kr", "hsh@hankuk.ac.kr", "�ȳ��Ͻʴϱ�? ���� ����������?", "2010.9.1", 1 };
	printf("���� : %s\n", e.title);
	printf("������ : %s\n", e.sender);

	printf("�߽��� : %s\n", e.receiver);
	printf("���� : %s\n", e.content);
	printf("��¥ : %s\n", e.date);
	printf("�켱���� : %d\n", e.pri);

}