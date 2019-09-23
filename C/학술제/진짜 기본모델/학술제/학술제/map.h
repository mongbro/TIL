#pragma once
#include<stdio.h>
#include<windows.h>
#include<conio.h>
#include"charator.h"

void print_upper_map();
void print_lower_map();
void town();
void dungeon(CHA list[3]);
void prologue0();
void prologue1(CHA list[3]);
void prologue2(CHA list[3]);
void prologue3(CHA list[3]);
void prologue4(CHA list[3]);

void print_line() {
	printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
}
void print_upper_map() {
	system("cls");
	printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
}

void print_lower_map() {
	printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
}


void town() {
	printf("\n");

}

void dungeon(CHA list[3]) {
	system("cls");
	print_line();
	printf("\n");
	printf("%s                                                          ○                                                          %s\n", list[0].name, "monster");
	printf("%s                                                          ○                                                          %s\n", list[1].name, "monster");
	printf("%s                                                          ○                                                          %s\n", list[2].name, "monster");
	printf("\n");                                                                                                                            
	printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	printf("\n");
	printf("%s의 체력 : %d \/ %d                                       ○                                                  %s의 체력 : %d \/ %d\n", list[0].name, list[0].fhp, list[0].hp, "monster", 100, 100);
	printf("%s의 체력 : %d \/ %d                                       ○                                                  %s의 체력 : %d \/ %d\n", list[1].name, list[1].fhp, list[1].hp, "monster", 100, 100);
	printf("%s의 체력 : %d \/ %d                                       ○                                                  %s의 체력 : %d \/ %d\n", list[2].name, list[2].fhp, list[2].hp, "monster", 100, 100);
	printf("\n");
	printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	printf("\n");
}

void prologue0() {
	while (1) {
		system("cls");
		print_line();
		printf("  프롤로그입니다.~~~~~~\n    이 게임은 뒤로가기 또는 저장기능을 지원하지 않습니다!!!!!\n\n계속 하시려면 아무키나 누르세요.\n");
		print_line();
		if (getch())
			break;
	}
	while (1) {
		system("cls");
		print_line();
		printf("  설명1111111111111111설명11111111111111설명11111111111111\n\n계속 하시려면 아무키나 누르세요.\n");
		print_line();
		if (getch())
			break;
	}
	while (1) {
		system("cls");
		print_line();
	printf("  설명222222222222222설명222222222222222설명222222222222222\n\n계속 하시려면 아무키나 누르세요.\n");
	print_line();
	if (getch())
		break;
	}
	while (1) {
		system("cls");
		print_line();
	printf("  설명333333333333333설명333333333333333설명333333333333333\n\n계속 하시려면 아무키나 누르세요.\n");
	print_line();
	if (getch())
		break;
	}
	
}

void prologue1(CHA list[3]) {
	while (1) {
		char a;
		system("cls");
		print_line();
		printf("\n");
		printf("  %s                                                           ○                                                        %s\n", list[0].name, "monster1");
		printf("  %s                                                           ○                                                        %s\n", list[1].name, "monster2");
		printf("  %s                                                           ○                                                        %s\n", list[2].name, "monster3");
		printf("\n");
		printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n\n");
		printf("  %s의 체력 : %d \/ %d                                      ○                                       %s의 체력 : %d \/ %d\n", list[0].name, list[0].fhp, list[0].hp, "monster1", 100, 100);
		printf("  %s의 체력 : %d \/ %d                                      ○                                       %s의 체력 : %d \/ %d\n", list[1].name, list[1].fhp, list[1].hp, "monster2", 100, 100);
		printf("  %s의 체력 : %d \/ %d                                      ○                                       %s의 체력 : %d \/ %d\n", list[2].name, list[2].fhp, list[2].hp, "monster3", 100, 100);
		printf("\n");
		printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("\n");
		printf("  1. %s                     = %s를 선택합니다.\n", list[0].name, list[0].name);
		printf("  2. %s                     = %s를 선택합니다.\n", list[1].name, list[1].name);
		printf("  3. %s                     = %s를 선택합니다.\n", list[2].name, list[2].name);
		printf("\n\n  계속 하시려면 \'1\'을 누르세요.\n");
		print_line();
		a = getch();
		if (a == '1')
			break;
		else
			continue;
	}
}

void prologue2(CHA list[3]) {
	while (1) {
		char a;
		system("cls");
		print_line();
		printf("\n");
		printf("  %s                                                           ○                                                        %s\n", list[0].name, "monster1");
		printf("  %s                                                           ○                                                        %s\n", list[1].name, "monster2");
		printf("  %s                                                           ○                                                        %s\n", list[2].name, "monster3");
		printf("\n");
		printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n\n");
		printf("  %s의 체력 : %d \/ %d                                      ○                                       %s의 체력 : %d \/ %d\n", list[0].name, list[0].fhp, list[0].hp, "monster1", 100, 100);
		printf("  %s의 체력 : %d \/ %d                                      ○                                       %s의 체력 : %d \/ %d\n", list[1].name, list[1].fhp, list[1].hp, "monster2", 100, 100);
		printf("  %s의 체력 : %d \/ %d                                      ○                                       %s의 체력 : %d \/ %d\n", list[2].name, list[2].fhp, list[2].hp, "monster3", 100, 100);
		printf("\n");
		printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("\n");
		printf("  %s의 기술!!               = 선택한 캐릭터의 이름입니다.\n\n", list[0].name);
		printf("  1. 기본공격                 = 캐릭터의 기본 공격을 합니다.\n");
		printf("  2. 스킬                     = 캐릭터의 스킬을 선택합니다.\n");
		printf("  3. 아이템                   = 인벤토리에서 사용 가능한 아이템을 선택합니다.\n");
		printf("  4. 도망치기!                = 이번 스테이지는 포기합니다.\n");
		printf("\n\n  계속 하시려면 '2'를 누르세요.\n");
		print_line();
		a = getch();
		if (a == '2')
			break;
		else
			continue;
	}
}

void prologue3(CHA list[3]) {
	while (1) {
		char a;
		system("cls");
		print_line();
		printf("\n");
		printf("  %s                                                           ○                                                        %s\n", list[0].name, "monster1");
		printf("  %s                                                           ○                                                        %s\n", list[1].name, "monster2");
		printf("  %s                                                           ○                                                        %s\n", list[2].name, "monster3");
		printf("\n");
		printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n\n");
		printf("  %s의 체력 : %d \/ %d                                      ○                                       %s의 체력 : %d \/ %d\n", list[0].name, list[0].fhp, list[0].hp, "monster1", 100, 100);
		printf("  %s의 체력 : %d \/ %d                                      ○                                       %s의 체력 : %d \/ %d\n", list[1].name, list[1].fhp, list[1].hp, "monster2", 100, 100);
		printf("  %s의 체력 : %d \/ %d                                      ○                                       %s의 체력 : %d \/ %d\n", list[2].name, list[2].fhp, list[2].hp, "monster3", 100, 100);
		printf("\n");
		printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("\n");
		printf("  %s의 스킬!!               = 선택한 캐릭터의 이름입니다.\n\n", list[0].name);
		printf("  1. %s                     = %s의 스킬을 선택합니다.\n", list[0].skill[0].name, list[0].name);
		printf("  2. %s                     = %s의 스킬을 선택합니다.\n", list[0].skill[1].name, list[0].name);
		printf("\n\n  계속 하시려면 '2'를 누르세요.\n");
		print_line();
		a = getch();
		if (a == '2')
			break;
		else
			continue;
	}
}

void prologue4(CHA list[3]) {
	while (1) {
		char a;
		system("cls");
		print_line();
		printf("\n");
		printf("  %s                                                           ○                                                        %s\n", list[0].name, "monster1");
		printf("  %s                                                           ○                                                        %s\n", list[1].name, "monster2");
		printf("  %s                                                           ○                                                        %s\n", list[2].name, "monster3");
		printf("\n");
		printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n\n");
		printf("  %s의 체력 : %d \/ %d                                      ○                                       %s의 체력 : %d \/ %d\n", list[0].name, list[0].fhp, list[0].hp, "monster1", 100, 100);
		printf("  %s의 체력 : %d \/ %d                                      ○                                       %s의 체력 : %d \/ %d\n", list[1].name, list[1].fhp, list[1].hp, "monster2", 100, 100);
		printf("  %s의 체력 : %d \/ %d                                      ○                                       %s의 체력 : %d \/ %d\n", list[2].name, list[2].fhp, list[2].hp, "monster3", 100, 100);
		printf("\n");
		printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
		printf("\n");
		printf("  %s의 %s 스킬!!               = 선택한 캐릭터의 스킬입니다.\n\n", list[0].name, list[0].skill[1].name);
		printf("  1. monster1                     = %s스킬로 monster1을 공격합니다.\n", list[0].skill[0].name);
		printf("  2. monster2                     = %s스킬로 monster1을 공격합니다.\n", list[0].skill[1].name);
		printf("  3. monster3                     = %s스킬로 monster1을 공격합니다.\n", list[0].skill[1].name);
		printf("\n\n  계속 하시려면 '3'를 누르세요.\n");
		print_line();
		a = getch();
		if (a == '3')
			break;
		else
			continue;
	}
}