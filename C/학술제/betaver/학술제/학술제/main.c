// made by 김종은 & 김주윤 & 선종범

#include<stdio.h>
#include<string.h>
#include"map.h"
#include"start_display.h"
#include"character.h"
#include"menu.h"
#include"monster.h"
#include"skill.h"
#include"stage.h"

int main() {
	//=====================        게임 시작         ==============================

	skill_set();
	all_item();

	initial_charac(clist, slist);
	print_initial_disp();


	////=====================        프롤로그         ==============================


	prologue_stage();
	prologue0();


	//=====================          본게임 시작         ===========================








	///////////////////////////        아이템 시험               //////////////////////////////

	//strcpy(ilist[3].name, "소비1");
	//strcpy(ilist[7].name, "소비2");
	//strcpy(ilist[13].name, "조장1");
	//strcpy(ilist[17].name, "조장2");
	//strcpy(ilist[23].name, "서기1");
	//strcpy(ilist[27].name, "서기2");
	//strcpy(ilist[33].name, "지갑1");
	//strcpy(ilist[37].name, "지갑2");
	//ilist[3].check = 1;
	//ilist[7].check = 1;
	//ilist[13].check = 1;
	//ilist[17].check = 1;
	//ilist[23].check = 1;
	//ilist[27].check = 1;
	//ilist[33].check = 1;
	//ilist[37].check = 1;
	//
	//ilist[3].add_hp = 10;
	//ilist[7].add_mp = 10;
	//ilist[13].add_readership = 10;
	//ilist[17].add_readership = 20;
	//ilist[23].add_noteship = 10;
	//ilist[27].add_noteship = 20;
	//ilist[33].add_wealth = 10;
	//ilist[37].add_wealth = 20;

	//ilist[3].ea = 1;
	//ilist[7].ea = 1;
	//ilist[13].ea = 1;
	//ilist[17].ea = 1;
	//ilist[23].ea = 1;
	//ilist[27].ea = 1;
	//ilist[33].ea = 1;
	//ilist[37].ea = 1;

	dun_inventory(clist);
	//town_inventory0(clist);
	///////////////////////////        아이템 시험               //////////////////////////////
}