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
	int fhp;			//총 hp
	int fmp;			//총 mp
	int hp;			//남은 hp
	int mp;			//남은 mp
	int att;
	int def;
	int readership;				//리더십 : 공격력 관련 스텟
	int noteship;					//필기력 : 방어력 관련 스텟
	int wealth;						//부 : 마나 관련 스텟              
}CHA;

void initial_charac(CHA list[3]);

CHA list[3] = { 0 };

void initial_charac(CHA list[3]) {

	strcpy(list[0].name, "조장");
	strcpy(list[1].name, "서기");
	strcpy(list[2].name, "지갑");
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
	strcpy(list[0].skill[0].name, "돌격");
	strcpy(list[0].skill[1].name, "강타");
}