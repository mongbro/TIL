#pragma once
#include<stdio.h>
#include"item.h"
#include"monster.h"

typedef struct stage {
	int chapter;
	ITEM drop_item[10];
	MON monster[30];
	int num_item;
}STAGE;

STAGE stlist[6] = { 0 };

void prologue_stage() {
	stlist[0].num_item = 0;
	prologue_monster(mlist);
	prologue_item(ditem);
	for (int i = 0; i < 10; i++){
		stlist[0].drop_item[i] = ditem[i];
	}
	for (int i = 0; i < 10; i++) {
		if (stlist[0].drop_item->name != 0)
			stlist[0].num_item++;
	}
}