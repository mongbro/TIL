#pragma once
/*     스킬 데미지는 캐릭터의 해당능력치의 퍼뎀     ex) 스킬뎀 = 50, 공격력 = 100  =>  스킬 사용시 데미지 = 150     
                                                                                                   스킬뎀 = 50, 방어력 = 100  =>  스킬 사용시 방어력 = 150   
																								   스킬뎀 = 50                            =>  회복스킬 사용시 = 50*/
#include<stdio.h>
#include<string.h>

typedef struct skill SKILL;

struct skill {
	char name[20];
	int mp;
	int dam;
};

SKILL s_list[30];

void skill_list();

void skill_list() {
	strcpy(s_list[0].name, "돌격");
	s_list[0].mp = 10;
	s_list[0].dam = 50;
	strcpy(s_list[1].name, "방어");
	s_list[1].mp = 10;
	s_list[1].dam = 50;
	strcpy(s_list[2].name, "기본 힐");
	s_list[2].mp = 10;
	s_list[2].dam = 50;
}