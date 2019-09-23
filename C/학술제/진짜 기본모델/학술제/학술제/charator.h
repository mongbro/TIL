#pragma once
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"skill.h"
#include"item.h"
#include"map.h"

typedef struct charac {
	char name[20];
	ITEM item[2];
	SKILL skill[2];
	int fhp;			//�� hp
	int fmp;			//�� mp
	int hp;			//���� hp
	int mp;			//���� mp
	int att;
	int def;
	int readership;				//������ : ���ݷ� ���� ����
	int noteship;					//�ʱ�� : ���� ���� ����
	int wealth;						//�� : ���� ���� ����              
}CHA;

void initial_charac(CHA list[3]);

CHA list[3] = { 0 };

void initial_charac(CHA list[3]) {

	strcpy(list[0].name, "����");
	strcpy(list[1].name, "����");
	strcpy(list[2].name, "����");
	for (int i = 0; i < 3; i++) {
		list[i].fhp = 100;
		list[i].fmp = 100;
		list[i].hp = 100;
		list[i].mp = 100;
		list[i].att = 10;
		list[i].def = 10;
		list[i].readership = rand() % 5 + 5;
		list[i].noteship = rand() % 5 + 5;
		list[i].wealth = rand() % 5 + 5;
	}
	strcpy(list[0].skill[0].name, "����");
	strcpy(list[0].skill[1].name, "��Ÿ");
}