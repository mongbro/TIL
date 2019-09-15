#pragma once
#include<stdio.h>
#include<string.h>
#include"itemlist.h"
#include"skill.h"

typedef struct charactor CHARAC;

struct charactor {
	char name[20];
	ITEM a[10];
	SKILL b[10];
	int hp;
	int mp;
	int att;
	int def;

};

void initial_party();

void initial_party() {
	item_list();
	CHARAC party[4] = { 0 };
	for (int i = 0; i < 4; i++) {
		party[i].att = 30;
		party[i].def = 30;
		party[i].hp = 100;
		party[i].mp = 100;
		party[i].a[0] = i_list[i];
		party[i].b[0] = s_list[i];
	}
	strcpy(party[0].name, "warrior");
	strcpy(party[1].name, "tanker");
	strcpy(party[2].name, "healer");
	strcpy(party[3].name, "supporter");
}