#pragma once
#include<stdio.h>
#include<string.h>

typedef struct item {
	char name[20];
	int add_readership;
	int add_noteship;
	int add_wealth;
	int add_hp;
	int add_mp;
	int num;				//해당 아이템의 개수
}ITEM;

int gold = 0;
ITEM ilist[40] = { 0 };			//인벤토리에 있는 아이템
ITEM aitem[40] = { 0 };			//모든 종류의 아이템
ITEM dilist[10] = { 0 };			//드랍되는 아이템

void initial_item();
void all_item();
void prologue_ditem(ITEM ditem[10]);
void spend_all_item();

void initial_item() {
	spend_all_item();
}

void all_item() {
	prologue_ditem(dilist);
}

void spend_all_item() {
	strcpy(ilist[0].name, "오로나민 C");
	strcpy(ilist[1].name, "박카스 F");
	strcpy(ilist[2].name, "박카스 D");
	strcpy(ilist[3].name, "비타 500");
	strcpy(ilist[4].name, "HOT 6");
	strcpy(ilist[5].name, "MONSTER");
	strcpy(ilist[6].name, "스누피  더 진한 커피우유");

	ilist[0].add_hp = 20;
	ilist[1].add_hp = 30;
	ilist[2].add_hp = 50;
	ilist[3].add_mp = 20;	
	ilist[4].add_mp = 30;
	ilist[5].add_mp = 50;
	ilist[6].add_hp = 50;
	ilist[6].add_mp = 50;
}

void prologue_ditem(ITEM dilist[10]) {
	strcpy(dilist[0].name, "초보 조장의 계획서");
	strcpy(dilist[1].name, "초보 서기의 연습장");
	strcpy(dilist[2].name, "가난한 지갑의 용돈");
	strcpy(dilist[3].name, "오로나민 C");
	strcpy(dilist[4].name, "비타 500");
	dilist[0].add_readership = 5;
	dilist[1].add_noteship = 5;
	dilist[2].add_wealth = 5;
	dilist[0].num = 0;
	dilist[1].num = 0;
	dilist[2].num = 0;
	dilist[3].add_hp = 20;
	dilist[4].add_mp = 20;
}