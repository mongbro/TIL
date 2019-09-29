#pragma once
#include<stdio.h>
#include"character.h"
#include"skill.h"
#include"item.h"
#include"map.h"
#include"monster.h"

void print_inventory0(CHA clist[3], MON mlist[3]);

void print_inventory0(CHA clist[3], MON mlist[3]) {

	printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	printf("  1. 인벤토리\n  2. 스테이터스\n  3. 돌아가기\n\n\n\n\n\n\n\n\n");
	printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
}