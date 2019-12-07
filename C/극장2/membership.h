#ifndef MEMBERSHIP_H
#define MEMBERSHIP_H
#include"seats.h"

typedef struct member {
	char name[20];	//이름
	int age;		//나이
	char id[15];	//아이디
	char pw[20];	//비밀번호
	SEAT rseat[100];
	int res_num;
}MEMBER;

void login();
void logout();
void sign_up1();
void sign_up2();		//회원가입 양식
int create_id(char id[15]);
void check();
int fcount();

#endif