#include<stdio.h>
#include"map.h"
#include"start_display.h"
#include"character.h"
#include"menu.h"
#include"monster.h"
#include"skill.h"
#include"stage.h"

int main() {
	//=====================        ���� ����         ==============================

	skill_set();
	initial_charac(clist, slist);
	print_initial_disp();


	//=====================        ���ѷα�         ==============================


	prologue_stage();
	prologue0();


	//=====================          ������ ����         ===========================
	
}