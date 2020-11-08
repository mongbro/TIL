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
	struct email e = { "안부메일", "chulsoo@hankuk.ac.kr", "hsh@hankuk.ac.kr", "안녕하십니까? 별일 없으신지요?", "2010.9.1", 1 };
	printf("제목 : %s\n", e.title);
	printf("수신자 : %s\n", e.sender);

	printf("발신자 : %s\n", e.receiver);
	printf("내용 : %s\n", e.content);
	printf("날짜 : %s\n", e.date);
	printf("우선순위 : %d\n", e.pri);

}