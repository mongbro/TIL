#include<stdio.h>
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
	initial_charac(clist, slist);
	print_initial_disp();


	//=====================        프롤로그         ==============================


	prologue_stage();
	prologue0();


	//=====================          본게임 시작         ===========================
	
}