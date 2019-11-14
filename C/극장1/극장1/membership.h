#ifndef MEMBERSHIP_H
#define MEMBERSHIP_H

typedef struct member {
	char name[20];
	int age;
	char id[15];
	char pw[20];
	int flag;
}MEMBER;

void login(MEMBER mem[10]);
void logout();
void sign_up1(MEMBER mem[10]);
void sign_up2(MEMBER mem[10]);
void create_id(MEMBER mem[10], int num);

#endif