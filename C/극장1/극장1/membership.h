#ifndef MEMBERSHIP_H
#define MEMBERSHIP_H

typedef struct member {
	char name[20];	//이름
	int age;		//나이
	char id[15];	//아이디
	char pw[20];	//비밀번호
	int flag;		//회원가입여부
	int memnum;		//회원번호
	int s[10][10];	//예약좌석
}MEMBER;

void login(MEMBER mem[10]);
void logout();
void sign_up1(MEMBER mem[10]);
void sign_up2(MEMBER mem[10]);		//회원가입 양식
void create_id(MEMBER mem[10], int num);

#endif