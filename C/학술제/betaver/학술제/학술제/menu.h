//#pragma once
//#include<stdio.h>
//#include<windows.h>
//#include"character.h"
//#include"skill.h"
//#include"item.h"
//#include"map.h"
//#include"monster.h"
//
//void dun_menu(cha clist[3], mon mlist[3]);
//void town_menu(cha clist[3]);
//void town_inventory0(cha clist[3]);
//void town_inf_cha(cha clist[3]);
//void dun_inventory(cha clist[3]);
//void dun_inf_cha(cha clist[3]);
//void dun_inf_mon(mon mlist[3]);
//void use_item(cha clist[3], item ilist[40], int inum);
//
//void dun_menu(cha clist[3], mon mlist[3]) {
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
//void town_menu(cha clist[3]) {
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
//
//////////////////////////	이거아래 만들 차례//////////////////////////////////////////
//
//
//void town_inventory0(cha clist[3]) {
//	while (1) {
//		char a;
//		system("cls");
//		printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n\n\n");
//		printf("  1. 조장 전용 아이템\n\n");
//		printf("  2. 서기 전용 아이템\n\n");
//		printf("  3. 지갑 전용 아이템\n\n");
//		printf("  4. 소비 아이템\n\n");
//		printf("  5. 전체 아이템\n\n");
//		printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
//		printf("  열람하고 싶은 아이템을 선택해주세요.\n\n  뒤로가기는 'b'를 선택해주세요.\n\n  마을 안에서는 장비형 아이템만 장착이 가능합니다.\n");
//		a = (_getch());
//		if (a == '1')
//			town_inventory1();
//		if (a == '2')
//			town_inventory2();
//		if (a == '3')
//			town_inventory3();
//		if (a == '4')
//			town_inventory4();
//		if (a == '5')
//			town_inventory5();
//		if (a == 'b')
//			break;
//	}
//}
//
//void town_inventory1() {
//	while (1) {
//		char a;
//		system("cls");
//		printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n\n\n");
//		for (int i = 10; i < 20; i++) {
//			if (ilist[i].name != 0) {
//				for (int j = 1; j < 11; j++){
//					printf("  %d. %s             리더십(공격력) : %d   필기력(방어력) : %d   부(최대mp량) : %d   개수 : %d", j, ilist[i].name, ilist[i].add_readership, ilist[i].add_noteship, ilist[i].add_wealth, ilist[i].num);
//				}
//			}
//		}
//		printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
//		printf("  열람하고 싶은 아이템을 선택해주세요.\n\n  뒤로가기는 'b'를 선택해주세요.\n\n  마을 안에서는 장비형 아이템만 장착이 가능합니다.\n");
//		a = (_getch());
//		if (a == '1')
//			town_inventory1();
//		if (a == '2')
//			town_inventory2();
//		if (a == '3')
//			town_inventory3();
//		if (a == '4')
//			town_inventory4();
//		if (a == '5')
//			town_inventory5();
//		if (a == 'b')
//			break;
//	}
//}
//
//////////////////////////	이거위에 만들 차례//////////////////////////////////////////
//
//void town_inf_cha(cha clist[3]) {
//
//}
//
//void dun_inventory(cha clist[3]) {
//	while (1) {
//		char a;
//		system("cls");
//		printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n\n\n");
//		for (int i = 0; i < 10; i++) {
//			if (ilist[i].name != 0) {
//				for (int j = 1; j < 11; j++) {
//					printf("  %d. %s                   hp 회복 : %d    mp 회복 : %d    남은 개수 : %d\n\n", j, ilist[i].name, ilist[i].add_hp, ilist[i].add_mp, ilist[i].num);
//				}
//			}
//		}
//		printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
//		printf("  사용하고 싶은 아이템을 선택해주세요.\n\n  뒤로가기는 'b'를 선택해주세요.\n\n  던전 안에서는 소비형 아이템만 사용이 가능합니다.\n");
//		a = (_getch());
//		if (a == '1')
//			if (ilist[0].name != 0)
//				use_item(clist, ilist, 0);
//			else
//				continue;
//		if (a == '2')
//			if (ilist[1].name != 0)
//				use_item(clist, ilist, 1);
//			else
//				continue;
//		if (a == '3')
//			if (ilist[2].name != 0)
//				use_item(clist, ilist, 2);
//			else
//				continue;
//		if (a == '4')
//			if (ilist[3].name != 0)
//				use_item(clist, ilist, 3);
//			else
//				continue;
//		if (a == '5')
//			if (ilist[4].name != 0)
//				use_item(clist, ilist, 4);
//			else
//				continue;
//		if (a == '6')
//			if (ilist[5].name != 0)
//				use_item(clist, ilist, 5);
//			else
//				continue;
//		if (a == '7')
//			if (ilist[6].name != 0)
//				use_item(clist, ilist, 6);
//			else
//				continue;
//		if (a == '8')
//			if (ilist[7].name != 0)
//				use_item(clist, ilist, 7);
//			else
//				continue;
//		if (a == '9')
//			if (ilist[8].name != 0)
//				use_item(clist, ilist, 8);
//			else
//				continue;
//		if (a == '0')
//			if (ilist[9].name != 0)
//				use_item(clist, ilist, 9);
//			else
//				continue;
//		if (a == 'b')
//			break;
//	}
//}
//
//void dun_inf_cha(cha clist[3]) {
//
//}
//
//void dun_inf_mon(mon mlist[3]) {
//
//}
//
//void use_item(cha clist[3], item ilist[40], int inum) {
//	while (1) {
//		char a;
//		system("cls");
//		printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n\n\n");
//		printf("\n");
//		if (clist[0].hp > 0)
//			printf("  %s                                                           ○                                                        \n", clist[0].name);
//		if (clist[0].hp <= 0)
//			printf("                                                                   ○                                                        \n");
//
//		if (clist[1].hp > 0)
//			printf("  %s                                                           ○                                                        \n", clist[1].name);
//		if (clist[1].hp <= 0)
//			printf("                                                                   ○                                                        \n");
//
//		if (clist[2].hp > 0)
//			printf("  %s                                                           ○                                                        \n", clist[2].name);
//		if (clist[2].hp <= 0)
//			printf("                                                                   ○                                                        \n");
//		
//		printf("\n");
//		printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
//		
//		if (clist[0].hp > 0)
//			printf("  %s의 체력 : %3d / %3d                                        ○                                     \n", clist[0].name, clist[0].hp, clist[0].fhp);
//		if (clist[0].hp <= 0)
//			printf("                                                                 ○                                     \n");
//
//		if (clist[1].hp > 0)
//			printf("  %s의 체력 : %3d / %3d                                        ○                                     \n", clist[1].name, clist[1].hp, clist[1].fhp);
//		if (clist[1].hp <= 0)
//			printf("                                                                 ○                                     \n");
//
//		if (clist[2].hp > 0)
//			printf("  %s의 체력 : %3d / %3d                                        ○                                     \n", clist[2].name, clist[2].hp, clist[2].fhp);
//		if (clist[2].hp <= 0)
//			printf("                                                                 ○                                     \n");
//
//		printf("\n");
//
//		printf("  사용할 캐릭터를 선택해주세요.\n\n  뒤로가기는 'b'를 선택해주세요.\n\n  던전 안에서는 소비형 아이템만 사용이 가능합니다.\n");
//		a = (_getch());
//		if (a == '1') {
//			if (ilist[inum].add_hp > 0 && ilist[inum].add_mp == 0) {
//				if (clist[0].hp + ilist[inum].add_hp >= clist[0].fhp)
//					clist[0].hp += clist[0].fhp;
//				else
//					clist[0].hp += ilist[inum].add_hp;
//			}
//			if (ilist[inum].add_mp > 0 && ilist[inum].add_hp == 0) {
//				if (clist[0].mp + ilist[inum].add_mp >= clist[0].fmp)
//					clist[0].mp += clist[0].fmp;
//				else
//					clist[0].mp += ilist[inum].add_mp;
//			}
//			if (ilist[inum].add_mp > 0 && ilist[inum].add_hp > 0) {
//				if (clist[0].hp + ilist[inum].add_hp >= clist[0].fhp)
//					clist[0].hp += clist[0].fhp;
//				else
//					clist[0].hp += ilist[inum].add_hp;
//				if (clist[0].mp + ilist[inum].add_mp >= clist[0].fmp)
//					clist[0].mp += clist[0].fmp;
//				else
//					clist[0].mp += ilist[inum].add_mp;
//			}
//		}
//		if (a == '2') {
//			if (ilist[inum].add_hp > 0 && ilist[inum].add_mp == 0) {
//				if (clist[1].hp + ilist[inum].add_hp >= clist[1].fhp)
//					clist[1].hp += clist[1].fhp;
//				else
//					clist[1].hp += ilist[inum].add_hp;
//			}
//			if (ilist[inum].add_mp > 0 && ilist[inum].add_hp == 0) {
//				if (clist[1].mp + ilist[inum].add_mp >= clist[1].fmp)
//					clist[1].mp += clist[1].fmp;
//				else
//					clist[1].mp += ilist[inum].add_mp;
//			}
//			if (ilist[inum].add_mp > 0 && ilist[inum].add_hp > 0) {
//				if (clist[1].hp + ilist[inum].add_hp >= clist[1].fhp)
//					clist[1].hp += clist[1].fhp;
//				else
//					clist[1].hp += ilist[inum].add_hp;
//				if (clist[1].mp + ilist[inum].add_mp >= clist[1].fmp)
//					clist[1].mp += clist[1].fmp;
//				else
//					clist[1].mp += ilist[inum].add_mp;
//			}
//		}
//		if (a == '3') {
//			if (ilist[inum].add_hp > 0 && ilist[inum].add_mp == 0) {
//				if (clist[2].hp + ilist[inum].add_hp >= clist[2].fhp)
//					clist[2].hp += clist[2].fhp;
//				else
//					clist[2].hp += ilist[inum].add_hp;
//			}
//			if (ilist[inum].add_mp > 0 && ilist[inum].add_hp == 0) {
//				if (clist[2].mp + ilist[inum].add_mp >= clist[2].fmp)
//					clist[2].mp += clist[2].fmp;
//				else
//					clist[2].mp += ilist[inum].add_mp;
//			}
//			if (ilist[inum].add_mp > 0 && ilist[inum].add_hp > 0) {
//				if (clist[2].hp + ilist[inum].add_hp >= clist[2].fhp)
//					clist[2].hp += clist[2].fhp;
//				else
//					clist[2].hp += ilist[inum].add_hp;
//				if (clist[2].mp + ilist[inum].add_mp >= clist[2].fmp)
//					clist[2].mp += clist[2].fmp;
//				else
//					clist[2].mp += ilist[inum].add_mp;
//			}
//		}
//		if (a == 'b')
//			break;
//	}
//}