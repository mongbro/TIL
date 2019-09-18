#pragma once
#include<stdio.h>
#include"skill.h"
#include"item.h"

typedef struct charac {
	char name[20];
	ITEM item[2];
	int hp = 100;
	int mp = 100;
	int att = 10;
	int def = 10;
	int readership = 5;				//리더십 : 공격력 관련 스텟
	int noteship = 5;					//필기력 : 방어력 관련 스텟
	int wealth = 5;						//부 : 마나 관련 스텟              
	int stat4
}CHA;

void initial_charac();

void initial_charac() {

}