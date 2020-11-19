#ifndef MEMBERSHIP_H
#define MEMBERSHIP_H
#include"seats.h"

typedef struct member {
	char name[20];	//�̸�
	int age;		//����
	char id[15];	//���̵�
	char pw[20];	//��й�ȣ
	SEAT rseat[100];
	int res_num;
}MEMBER;

void login();
void logout();
void sign_up1();
void sign_up2();		//ȸ������ ���
int create_id(char id[15]);
void check();
int fcount();

#endif