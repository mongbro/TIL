#pragma once
#include<stdio.h>
#include<string.h>
#include"itemlist.h"
typedef struct charactor CHARAC;

struct charactor {
	char name[20];
	ITEM a;
	ITEM b;
	int hp;
	int mp;
	int att;
	int def;
};

void initial_party();

void initial_party() {
	item_list();
	CHARAC party[4];
	for (int i = 0; i < 4; i++) {
		party[i].att = 30;
		party[i].def = 30;
		party[i].hp = 100;
		party[i].mp = 100;
		party[i].a = list[i];
	}
	strcpy(party[0].name, "warrior");
	strcpy(party[1].name, "tanker");
	strcpy(party[2].name, "healer");
	strcpy(party[3].name, "supporter");
}