#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include"character.h"
#include"monster.h"
#include"skill.h"
#include"item.h"

void damage_character_to_monster(CHA clist[3], MON mlist[3], int cnum, int mnum, int snum);			//캐릭터배열, 몬스터배열, 캐릭터번호, 몬스터번호, 스킬번호
void damage_monster_to_character(CHA clist[3], MON mlist[3], int cnum, int mnum);
int choice_monster_to_character();

int hit_damage;

void damage_character_to_monster(CHA clist[3], MON mlist[3], int cnum, int mnum, int snum) {
	mlist[mnum].hp = mlist[mnum].hp - ((clist[cnum].att + clist[cnum].skill[snum].add_att) * clist[cnum].readership / 10);
	hit_damage = (clist[cnum].att + clist[cnum].skill[snum].add_att) * clist[cnum].readership / 10;
}

void damage_monster_to_character(CHA clist[3], MON mlist[3], int cnum, int mnum) {
	clist[cnum].hp = clist[cnum].hp - (mlist[mnum].att);
	hit_damage = mlist[mnum].att;
}

int choice_monster_to_character() {
	srand((unsigned)time(NULL));
	int n;
	return n = rand() % 3;
}