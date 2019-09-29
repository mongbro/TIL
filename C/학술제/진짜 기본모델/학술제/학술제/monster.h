#pragma once
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct monster {
	char name[20];
	int fhp;			//총 hp
	int fmp;			//총 mp
	int hp;			//남은 hp
	int mp;			//남은 mp
	int att;
	int def;
}MON;

void prologue_monster(MON mlist[3]);

MON mlist[3] = { 0 };

void prologue_monster(MON mlist[3]) {

	strcpy(mlist[0].name, "과제1");
	strcpy(mlist[1].name, "과제2");
	strcpy(mlist[2].name, "과제3");
	for (int i = 0; i < 3; i++) {
		mlist[i].fhp = 30;
		mlist[i].fmp = 10;
		mlist[i].hp = 30;
		mlist[i].mp = 10;
		mlist[i].att = 10;
		mlist[i].def = 10;
	}
}