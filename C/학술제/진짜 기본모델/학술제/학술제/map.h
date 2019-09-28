#pragma once
#include<stdio.h>
#include<windows.h>
#include<conio.h>
#include"character.h"
#include"monster.h"
#include"combet.h"

void print_line();
void town();
void hit1();
void hit2();
void event_hit();
void print_map(CHA clist[3], MON mlist[3]);
void print_hp(CHA clist[3], MON mlist[3]);
void dungeon(CHA clist[3], MON mlist[3]);
void prologue0();
void prologue1(CHA clist[3], MON mlist[3]);
void prologue2(CHA clist[3], MON mlist[3]);
void prologue3(CHA clist[3], MON mlist[3]);
void prologue4(CHA clist[3], MON mlist[3]);
void prologue5(CHA clist[3], MON mlist[3]);
void prologue6(CHA clist[3], MON mlist[3]);

void print_line() {
	printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
}

void town() {
	printf("\n");

}

void print_map(CHA clist[3], MON mlist[3]) {
	printf("\n");
	printf("  %s                                                           ○                                                        %s\n", clist[0].name, mlist[0].name);
	printf("  %s                                                           ○                                                        %s\n", clist[1].name, mlist[1].name);
	printf("  %s                                                           ○                                                        %s\n", clist[2].name, mlist[2].name);
	printf("\n");
}

void print_hp(CHA clist[3], MON mlist[3]) {
	printf("  %s의 체력 : %3d \/ %3d                                        ○                                     %s의 체력 : %3d \/ %3d\n", clist[0].name, clist[0].hp, clist[0].fhp, mlist[0].name, mlist[0].hp, mlist[0].fhp);
	printf("  %s의 체력 : %3d \/ %3d                                        ○                                     %s의 체력 : %3d \/ %3d\n", clist[1].name, clist[1].hp, clist[1].fhp, mlist[1].name, mlist[1].hp, mlist[1].fhp);
	printf("  %s의 체력 : %3d \/ %3d                                        ○                                     %s의 체력 : %3d \/ %3d\n", clist[2].name, clist[2].hp, clist[2].fhp, mlist[2].name, mlist[2].hp, mlist[2].fhp);
	printf("\n");
}

void dungeon(CHA clist[3], MON mlist[3]) {
	system("cls");
	print_line();
	printf("\n");
	printf("%s                                                          ○                                                          %s\n", clist[0].name, mlist[0].name);
	printf("%s                                                          ○                                                          %s\n", clist[1].name, mlist[1].name);
	printf("%s                                                          ○                                                          %s\n", clist[2].name, mlist[2].name);
	printf("\n");
	print_line();
	print_hp(clist, mlist);
	print_line();
	printf("\n");
}


void hit1() {
	system("cls");
	print_line();
	print_line();
	print_line();
	print_line();
	print_line();
	print_line();
	print_line();
	print_line();
	print_line();
	print_line();
	print_line();
	print_line();
	print_line();
}

void hit2() {
	system("cls");
	printf("\n\n\n\n\n\n\n\n\n\n\n\n");
}

void event_hit() {
	hit1();
	hit2();
	hit1();
	hit2();
	hit1();
	hit2();
	hit1();
	hit2();
}

void prologue0() {
	while (1) {
		system("cls");
		print_line();
		printf("  프롤로그입니다.~~~~~~\n    이 게임은 저장기능을 지원하지 않습니다!!!!!\n    신중하게 선택을 해주세요!!!!!\n    방향키를 누르면 여러 페이지가 한번에 넘어갈 수도 있습니다.ㅠㅠ\n\n\n    계속 하시려면 아무키나 누르세요.\n");
		print_line();
		if (_getch())
			break;
	}
	while (1) {
		system("cls");
		print_line();
		printf("  설명1111111111111111설명11111111111111설명11111111111111\n\n계속 하시려면 아무키나 누르세요.\n");
		print_line();
		if (_getch())
			break;
	}
	while (1) {
		system("cls");
		print_line();
	printf("  설명222222222222222설명222222222222222설명222222222222222\n\n계속 하시려면 아무키나 누르세요.\n");
	print_line();
	if (_getch())
		break;
	}
	while (1) {
		system("cls");
		print_line();
	printf("  설명333333333333333설명333333333333333설명333333333333333\n\n계속 하시려면 아무키나 누르세요.\n");
	print_line();
	if (_getch())
		break;
	}
	
}

void prologue1(CHA clist[3], MON mlist[3]) {
	while (1) {
		char a;
		system("cls");
		print_line();
		print_map(clist, mlist);
		print_line();
		printf("\n");
		print_hp(clist, mlist);
		print_line();
		printf("\n");
		printf("  1. %s                     = %s를 선택합니다.\n", clist[0].name, clist[0].name);
		printf("  2. %s                     = %s를 선택합니다.\n", clist[1].name, clist[1].name);
		printf("  3. %s                     = %s를 선택합니다.\n", clist[2].name, clist[2].name);
		printf("\n\n  계속 하시려면 \'1\'을 누르세요.\n");
		print_line();
		a = _getch();
		if (a == '1')
			break;
		else
			continue;
	}
}

void prologue2(CHA clist[3], MON mlist[3]) {
	while (1) {
		char a;
		system("cls");
		print_line();
		print_map(clist, mlist);
		print_line();
		printf("\n");
		print_hp(clist, mlist);
		print_line();
		printf("\n");
		printf("  %s의 기술!!                                                   = 공격하는 아군 캐릭터의 이름입니다.\n\n", clist[0].name);
		printf("  1. 기본공격                                                     = 캐릭터의 기본 공격을 합니다.\n");
		printf("  2. 스킬                                                         = 캐릭터의 스킬을 선택합니다.\n");
		printf("  3. 아이템                                                       = 인벤토리에서 사용 가능한 아이템을 선택합니다.\n");
		printf("  4. 도망치기!                                                    = 이번 스테이지는 포기합니다.\n");
		printf("\n\n  계속 하시려면 '2'를 누르세요.\n");
		print_line();
		printf("\n    ※아군 캐릭터는 조장, 서기, 지갑 순으로 진행됩니다.\n    ※취소 기능은 지원하지 않습니다!! \n    신중히 선택하세요.");
		a = _getch();
		if (a == '2')
			break;
		else
			continue;
	}
}

void prologue3(CHA clist[3], MON mlist[3]) {
	while (1) {
		char a;
		system("cls");
		print_line();
		print_map(clist, mlist);
		print_line();
		printf("\n");
		print_hp(clist, mlist);
		print_line();
		printf("\n");
		printf("  %s의 스킬!!                                                   = 선택한 캐릭터의 이름입니다.\n\n", clist[0].name);
		printf("  1. %s  : att+%2d def+%2d mp-%2d                                  = %s의 스킬을 선택합니다.\n", clist[0].skill[0].name, clist[0].skill[0].add_att, clist[0].skill[0].add_def, clist[0].skill[0].diff_mp, clist[0].name);
		printf("  2. %s  : att+%2d def+%2d mp-%2d                                  = %s의 스킬을 선택합니다.\n", clist[0].skill[1].name, clist[0].skill[1].add_att, clist[0].skill[1].add_def, clist[0].skill[1].diff_mp, clist[0].name);
		printf("\n\n  계속 하시려면 '2'를 누르세요.\n");
		print_line();
		a = _getch();
		if (a == '2')
			break;
		else
			continue;
	}
}

void prologue4(CHA clist[3], MON mlist[3]) {
	while (1) {
		char a;
		system("cls");
		print_line();
		print_map(clist, mlist);
		print_line();
		printf("\n");
		print_hp(clist, mlist);
		print_line();
		printf("\n");
		printf("  %s의 %s 스킬!!                                              = 선택한 캐릭터의 스킬입니다.\n\n", clist[0].name, clist[0].skill[1].name);
		printf("  1. %s                                                        = %s스킬로 %s을 공격합니다.\n", mlist[0].name, clist[0].skill[1].name, mlist[0].name);
		printf("  2. %s                                                        = %s스킬로 %s을 공격합니다.\n", mlist[1].name, clist[0].skill[1].name, mlist[1].name);
		printf("  3. %s                                                        = %s스킬로 %s을 공격합니다.\n", mlist[2].name, clist[0].skill[1].name, mlist[2].name);
		printf("\n\n  계속 하시려면 '3'를 누르세요.\n");
		print_line();
		a = _getch();
		if (a == '3')
			break;
		else
			continue;
	}
}

void prologue5(CHA clist[3], MON mlist[3]) {
	while (1) {
		system("cls");
		print_line();
		print_map(clist, mlist);
		print_line();
		printf("\n");
		damage_character_to_monster(clist, mlist, 0, 2, 1);
		print_hp(clist, mlist);
		print_line();
		printf("\n");
		printf("  %s의 %s 스킬!!                                              = 선택한 캐릭터의 스킬입니다.\n\n", clist[0].name, clist[0].skill[1].name);
		printf("  %s가 %d의 데미지를 입음!!!                                   = %s가 %d의 데미지를 입었습니다.\n", mlist[2].name, hit_damage, mlist[2].name, hit_damage);
		printf("\n\n");
		printf("\n\n  계속 하시려면 아무키나 누르세요.\n");
		print_line();
		if(_getch())
			break;
	}
}