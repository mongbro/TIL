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
//		printf("�������������������������������������������������������������������\n\n\n");
//		printf("  1. �κ��丮\n\n  2. ĳ���� ����\n\n  3. ���� ����\n\n  4. ���ư���\n\n\n\n\n\n\n");
//		printf("�������������������������������������������������������������������\n");
//		printf("  ���ϴ� �޴��� �������ּ���.\n");
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
//		printf("�������������������������������������������������������������������\n\n\n");
//		printf("  1. �κ��丮\n\n  2. ĳ���� ����\n\n  3. ���ư���\n\n\n\n\n\n\n");
//		printf("�������������������������������������������������������������������\n");
//		printf("  ���ϴ� �޴��� �������ּ���.\n");
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
//		printf("�������������������������������������������������������������������\n\n\n");
//		printf("  ");
//		printf("�������������������������������������������������������������������\n");
//		printf("  ����ϰ� ���� �������� �������ּ���.\n\n  ���� �ȿ����� �Һ��� �����۸� ����� �����մϴ�.\n");
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