#pragma once
/*     ��ų �������� ĳ������ �ش�ɷ�ġ�� �۵�     ex) ��ų�� = 50, ���ݷ� = 100  =>  ��ų ���� ������ = 150     
                                                                                                   ��ų�� = 50, ���� = 100  =>  ��ų ���� ���� = 150   
																								   ��ų�� = 50                            =>  ȸ����ų ���� = 50*/
#include<stdio.h>
#include<string.h>

typedef struct skill SKILL;

struct skill {
	char name[20];
	int mp;
	int dam;
};

SKILL s_list[30];

void skill_list();

void skill_list() {
	strcpy(s_list[0].name, "����");
	s_list[0].mp = 10;
	s_list[0].dam = 50;
	strcpy(s_list[1].name, "���");
	s_list[1].mp = 10;
	s_list[1].dam = 50;
	strcpy(s_list[2].name, "�⺻ ��");
	s_list[2].mp = 10;
	s_list[2].dam = 50;
}