#pragma once
#include<stdio.h>
#include<string.h>

typedef struct skill {
	char name[20];
	int add_att;
	int add_def;
	int add_hp;
	int diff_mp;
}SKILL;

SKILL slist[30] = { 0 };

void skill_set() {
	strcpy(slist[0].name, "����");
	strcpy(slist[1].name, "��Ÿ");
	slist[0].add_att = 20;
	slist[0].diff_mp = 20;
	slist[1].add_att = 10;
	slist[1].diff_mp = 10;
}