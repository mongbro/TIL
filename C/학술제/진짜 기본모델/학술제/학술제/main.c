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
	//=====================        프롤로그         ==============================
	prologue0();
	//=====================          게임시작         ===========================
	//while (1) {

	//}
}