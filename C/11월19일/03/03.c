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
	strcpy(e.title, "안부 메일");
	strcpy(e.sender, "chulsoo@hankuk.ac.kr");
	strcpy(e.receiver, "hsh@hankuk.ac.kr");
	strcpy(e.content, "안녕하십니까? 별일 없으신지요?");
	strcpy(e.data, "2010/9/1");
	e.pri = 1;

	printf("제목 : %s\n수신자  : %s\n발신자 : %s\n내용 : %s\n날짜 : %s\n우선순위 : %d", e.title, e.sender, e.receiver, e.content, e.data, e.pri);
}