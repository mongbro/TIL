#include<stdio.h>
#include"map.h"
#include"start_display.h"
#include"character.h"
#include"menu.h"
#include"monster.h"
#include"skill.h"

int main() {
	skill_set();
	initial_charac(clist, slist);
	print_initial_disp();
	prologue_monster(mlist);
	//=====================        ���ѷα�         ==============================
	prologue0();
	//prologue1(clist, mlist);
	prologue2(clist, mlist);
	prologue3(clist, mlist);
	prologue4(clist, mlist);
	event_hit();
	prologue5(clist, mlist);

	//=====================          ���ӽ���         ===========================
	//while (1) {

	//}
}