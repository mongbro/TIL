#pragma once
#include<stdio.h>
#include<string.h>

typedef struct item {
	char name[20];
	int add_readership;
	int add_noteship;
	int add_wealth;
	int num;				//해당 아이템의 개수
}ITEM;

int gold = 0;
ITEM ilist[30] = { 0 };			//인벤토리에 있는 아이템
ITEM aitem[30] = { 0 };			//모든 종류의 아이템
ITEM ditem[10] = { 0 };			//드랍되는 아이템

void initial_item();
void all_item();
void prologue_item(ITEM ditem[10]);

void initial_item() {

}

void all_item() {
	prologue_item(ditem);
}

void prologue_item(ITEM ditem[10]) {
	strcpy(ditem[0].name, "초보 조장의 계획서");
	strcpy(ditem[1].name, "초보 서기의 연습장");
	strcpy(ditem[2].name, "가난한 지갑의 용돈");
	ditem[0].add_readership = 5;
	ditem[1].add_noteship = 5;
	ditem[2].add_wealth = 5;
	ditem[0].num = 0;
	ditem[1].num = 0;
	ditem[2].num = 0;
}