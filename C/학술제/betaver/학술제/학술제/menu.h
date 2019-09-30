#pragma once
#include<stdio.h>
#include<windows.h>
#include"character.h"
#include"skill.h"
#include"item.h"
#include"map.h"
#include"monster.h"

//void dun_menu(CHA clist[3], MON mlist[3]);
//void town_menu(CHA clist[3]);
//void town_inventory(CHA clist[3]);
//void town_inf_cha(CHA clist[3]);
//void dun_inventory(CHA clist[3]);
//void dun_inf_cha(CHA clist[3]);
//void dun_inf_mon(MON mlist[3]);
//
//
//
//void dun_menu(CHA clist[3], MON mlist[3]) {
//	while (1) {
//		char a;
//		system("cls");
//		printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n\n\n");
//		printf("  1. 인벤토리\n\n  2. 캐릭터 정보\n\n  3. 몬스터 정보\n\n  4. 돌아가기\n\n\n\n\n\n\n");
//		printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
//		printf("  원하는 메뉴를 선택해주세요.\n");
//		a = (_getch());
//		if (a == '1')
//			inventory(clist);
//		if (a == '2')
//			inf_cha(clist);
//		if (a == '3')
//			inf_mon(mlist);
//		if (a == '4')
//			break;
//	}
//}
//
//void town_menu(CHA clist[3]) {
//	while (1) {
//		char a;
//		system("cls");
//		printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n\n\n");
//		printf("  1. 인벤토리\n\n  2. 캐릭터 정보\n\n  3. 돌아가기\n\n\n\n\n\n\n");
//		printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
//		printf("  원하는 메뉴를 선택해주세요.\n");
//		a = (_getch());
//		if (a == '1')
//			inventory(clist);
//		if (a == '2')
//			inf_cha(clist);
//		if (a == '3')
//			break;
//	}
//}
//
//void town_inventory(CHA clist[3]) {
//
//}
//
//void town_inf_cha(CHA clist[3]) {
//
//}
//
//void dun_inventory(CHA clist[3]) {
//	while (1) {
//		char a;
//		system("cls");
//		printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n\n\n");
//		printf("  ");
//		printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
//		printf("  사용하고 싶은 아이템을 선택해주세요.\n\n  던전 안에서는 소비형 아이템만 사용이 가능합니다.\n");
//		a = (_getch());
//		if (a == '1')
//			inventory(clist);
//		if (a == '2')
//			inf_cha(clist);
//		if (a == '3')
//			inf_mon(mlist);
//		if (a == '4')
//			break;
//	}
//}
//
//void dun_inf_cha(CHA clist[3]) {
//
//}
//
//void dun_inf_mon(MON mlist[3]) {
//
//}