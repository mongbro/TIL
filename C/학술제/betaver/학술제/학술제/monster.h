#pragma once
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct monster {
	char name[20];
	int fhp;			//�� hp
	int fmp;			//�� mp
	int hp;			//���� hp
	int mp;			//���� mp
	int att;
	int def;
	int condition;				//0�� ��� �������, 1�ϰ�� �׾�����
	int mexp;
}MON;

MON mlist[3] = { 0 };

void prologue_monster(MON mlist[3]) {

	strcpy(mlist[0].name, "����1");
	strcpy(mlist[1].name, "����2");
	strcpy(mlist[2].name, "����3");
	for (int i = 0; i < 3; i++) {
		mlist[i].fhp = 30;
		mlist[i].fmp = 10;
		mlist[i].hp = 30;
		mlist[i].mp = 10;
		mlist[i].att = 10;
		mlist[i].def = 10;
		mlist[i].condition = 0;
		mlist[i].mexp = 50;
	}
}