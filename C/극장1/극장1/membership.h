#ifndef MEMBERSHIP_H
#define MEMBERSHIP_H

typedef struct member {
	char name[20];	//�̸�
	int age;		//����
	char id[15];	//���̵�
	char pw[20];	//��й�ȣ
	int flag;		//ȸ�����Կ���
	int memnum;		//ȸ����ȣ
	int s[10][10];	//�����¼�
}MEMBER;

void login(MEMBER mem[10]);
void logout();
void sign_up1(MEMBER mem[10]);
void sign_up2(MEMBER mem[10]);		//ȸ������ ���
void create_id(MEMBER mem[10], int num);

#endif