// made by ������

#pragma once
#include<stdio.h>
#include<windows.h>
#include"character.h"
#include"skill.h"
#include"item.h"
#include"map.h"
#include"monster.h"

void dun_menu(CHA clist[3], MON mlist[3]);
void town_menu(CHA clist[3]);
void town_inventory0(CHA clist[3]);
void town_inventory1();
void town_inventory2();
void town_inventory3();
void town_inventory4();
void town_inventory5();
void town_equip(int cnum, int inum);
void town_inf_cha(CHA clist[3]);
void dun_inventory(CHA clist[3]);
void dun_inf_cha(CHA clist[3]);
void dun_inf_mon(MON mlist[3]);
void use_item(CHA clist[3], ITEM ilist[40], int inum);
void effect_item(CHA clist[3], ITEM ilist[40], int cnum, int inum);

void dun_menu(CHA clist[3], MON mlist[3]) {
	while (1) {
		char a;
		system("cls");
		printf("�������������������������������������������������������������������\n\n\n");
		printf("  1. �κ��丮\n\n  2. ĳ���� ����\n\n  3. ���� ����\n\n  4. ���ư���\n\n\n\n\n\n\n");
		printf("�������������������������������������������������������������������\n");
		printf("  ���ϴ� �޴��� �������ּ���.\n");
		a = (_getch());
		if (a == '1')
			dun_inventory(clist);
		if (a == '2')
			dun_inf_cha(clist);
		if (a == '3')
			dun_inf_mon(mlist);
		if (a == '4')
			break;
	}
}

void town_menu(CHA clist[3]) {
	while (1) {
		char a;
		system("cls");
		printf("�������������������������������������������������������������������\n\n\n");
		printf("  1. �κ��丮\n\n  2. ĳ���� ����\n\n  3. ���ư���\n\n\n\n\n\n\n");
		printf("�������������������������������������������������������������������\n");
		printf("  ���ϴ� �޴��� �������ּ���.\n");
		a = (_getch());
		if (a == '1')
			town_inventory0(clist);
		if (a == '2')
			town_inf_cha(clist);
		if (a == '3')
			break;
	}
}

void town_inventory0(CHA clist[3]) {
	while (1) {
		char a;
		system("cls");
		printf("�������������������������������������������������������������������\n\n\n");
		printf("  1. ���� ���� ������\n\n");
		printf("  2. ���� ���� ������\n\n");
		printf("  3. ���� ���� ������\n\n");
		printf("  4. �Һ� ������\n\n");
		printf("  5. ��ü ������\n\n");
		printf("�������������������������������������������������������������������\n");
		printf("  �����ϰ� ���� �������� �������ּ���.\n\n  �ڷΰ���� 'b'�� �������ּ���.\n\n  ���� �ȿ����� ����� �����۸� ������ �����մϴ�.\n");
		a = (_getch());
		if (a == '1')
			town_inventory1();
		if (a == '2')
			town_inventory2();
		if (a == '3')
			town_inventory3();
		if (a == '4')
			town_inventory4();
		if (a == '5')
			town_inventory5();
		if (a == 'b')
			break;
	}
}

void town_inventory1() {
	while (1) {
		char a;
		int n[10] = { 0 };
		int index = 1;
		system("cls");
		printf("�������������������������������������������������������������������\n\n\n");
		for (int i = 10; i < 20; i++) {
				if (ilist[i].ea > 0) {
					printf("  %d. %s                   ������(���ݷ�) : %d   �ʱ��(����) : %d   ��(�ִ븶��) : %d   ���� ���� : %d\n\n", index, ilist[i].name, ilist[i].add_readership, ilist[i].add_noteship, ilist[i].add_wealth, ilist[i].ea);
					n[i - 10] = i;
					index++;
				}
			
		}
		printf("�������������������������������������������������������������������\n");
		printf("  �����ϰ� ���� �������� �������ּ���.\n\n  �ڷΰ���� 'b'�� �������ּ���.\n\n  ���� �ȿ����� ����� �����۸� ������ �����մϴ�.\n");
		a = (_getch());
		if (a == '1')
			if (ilist[0].name != 0)
				town_equip(0, ilist[n[0]].num);
			else
				continue;
		if (a == '2')
			if (ilist[1].name != 0)
				town_equip(0, ilist[n[1]].num);
			else
				continue;
		if (a == '3')
			if (ilist[2].name != 0)
				town_equip(0, ilist[n[2]].num);
			else
				continue;
		if (a == '4')
			if (ilist[3].name != 0)
				town_equip(0, ilist[n[3]].num);
			else
				continue;
		if (a == '5')
			if (ilist[4].name != 0)
				town_equip(0, ilist[n[4]].num);
			else
				continue;
		if (a == '6')
			if (ilist[5].name != 0)
				town_equip(0, ilist[n[5]].num);
			else
				continue;
		if (a == '7')
			if (ilist[6].name != 0)
				town_equip(0, ilist[n[6]].num);
			else
				continue;
		if (a == '8')
			if (ilist[7].name != 0)
				town_equip(0, ilist[n[7]].num);
			else
				continue;
		if (a == '9')
			if (ilist[8].name != 0)
				town_equip(0, ilist[n[8]].num);
			else
				continue;
		if (a == '0')
			if (ilist[9].name != 0)
				town_equip(0, ilist[n[9]].num);
			else
				continue;
		if (a == 'b')
			break;
	}
}

void town_inventory2() {
	while (1) {
		char a;
		int n[10] = { 0 };
		int index = 1;
		system("cls");
		printf("�������������������������������������������������������������������\n\n\n");
		for (int i = 20; i < 30; i++) {
				if (ilist[i].ea > 0) {
					printf("  %d. %s                   ������(���ݷ�) : %d   �ʱ��(����) : %d   ��(�ִ븶��) : %d   ���� ���� : %d\n\n", index, ilist[i].name, ilist[i].add_readership, ilist[i].add_noteship, ilist[i].add_wealth, ilist[i].ea);
					n[i - 20] = i;
					index++;
				}
			
		}
		printf("�������������������������������������������������������������������\n");
		printf("  �����ϰ� ���� �������� �������ּ���.\n\n  �ڷΰ���� 'b'�� �������ּ���.\n\n  ���� �ȿ����� ����� �����۸� ������ �����մϴ�.\n");
		a = (_getch());
		if (a == '1')
			if (ilist[0].name != 0)
				town_equip(1, ilist[n[0]].num);
			else
				continue;
		if (a == '2')
			if (ilist[1].name != 0)
				town_equip(1, ilist[n[1]].num);
			else
				continue;
		if (a == '3')
			if (ilist[2].name != 0)
				town_equip(1, ilist[n[2]].num);
			else
				continue;
		if (a == '4')
			if (ilist[3].name != 0)
				town_equip(1, ilist[n[3]].num);
			else
				continue;
		if (a == '5')
			if (ilist[4].name != 0)
				town_equip(1, ilist[n[4]].num);
			else
				continue;
		if (a == '6')
			if (ilist[5].name != 0)
				town_equip(1, ilist[n[5]].num);
			else
				continue;
		if (a == '7')
			if (ilist[6].name != 0)
				town_equip(1, ilist[n[6]].num);
			else
				continue;
		if (a == '8')
			if (ilist[7].name != 0)
				town_equip(1, ilist[n[7]].num);
			else
				continue;
		if (a == '9')
			if (ilist[8].name != 0)
				town_equip(1, ilist[n[8]].num);
			else
				continue;
		if (a == '0')
			if (ilist[9].name != 0)
				town_equip(1, ilist[n[9]].num);
			else
				continue;
		if (a == 'b')
			break;
	}
}

void town_inventory3() {
	while (1) {
		char a;
		int n[10] = { 0 };
		int index = 1;
		system("cls");
		printf("�������������������������������������������������������������������\n\n\n");
		for (int i = 30; i < 40; i++) {
				if (ilist[i].ea > 0) {
					printf("  %d. %s                   ������(���ݷ�) : %d   �ʱ��(����) : %d   ��(�ִ븶��) : %d   ���� ���� : %d\n\n", index, ilist[i].name, ilist[i].add_readership, ilist[i].add_noteship, ilist[i].add_wealth, ilist[i].ea);
					n[i - 30] = i;
					index++;
				}
			
		}
		printf("�������������������������������������������������������������������\n");
		printf("  �����ϰ� ���� �������� �������ּ���.\n\n  �ڷΰ���� 'b'�� �������ּ���.\n\n  ���� �ȿ����� ����� �����۸� ������ �����մϴ�.\n");
		a = (_getch());
		if (a == '1')
			if (ilist[0].name != 0)
				town_equip(2, ilist[n[0]].num);
			else
				continue;
		if (a == '2')
			if (ilist[1].name != 0)
				town_equip(2, ilist[n[1]].num);
			else
				continue;
		if (a == '3')
			if (ilist[2].name != 0)
				town_equip(2, ilist[n[2]].num);
			else
				continue;
		if (a == '4')
			if (ilist[3].name != 0)
				town_equip(2, ilist[n[3]].num);
			else
				continue;
		if (a == '5')
			if (ilist[4].name != 0)
				town_equip(2, ilist[n[4]].num);
			else
				continue;
		if (a == '6')
			if (ilist[5].name != 0)
				town_equip(2, ilist[n[5]].num);
			else
				continue;
		if (a == '7')
			if (ilist[6].name != 0)
				town_equip(2, ilist[n[6]].num);
			else
				continue;
		if (a == '8')
			if (ilist[7].name != 0)
				town_equip(2, ilist[n[7]].num);
			else
				continue;
		if (a == '9')
			if (ilist[8].name != 0)
				town_equip(2, ilist[n[8]].num);
			else
				continue;
		if (a == '0')
			if (ilist[9].name != 0)
				town_equip(2, ilist[n[9]].num);
			else
				continue;
		if (a == 'b')
			break;
	}
}
/////////�Һ���///////////
void town_inventory4() {
	while (1) {
		char a;
		int n[10] = { 0 };
		int index = 1;
		system("cls");
		printf("�������������������������������������������������������������������\n\n\n");
		for (int i = 0; i < 10; i++) {
				if (ilist[i].ea > 0) {
					printf("  %d. %s                   hp ȸ�� : %d    mp ȸ�� : %d    ���� ���� : %d\n\n", index, ilist[i].name, ilist[i].add_hp, ilist[i].add_mp, ilist[i].ea);
					n[i] = i;
					index++;
				}
			
		}
		printf("�������������������������������������������������������������������\n");
		printf("  ���� �ȿ����� �Һ��� �������� ����� �� �����ϴ�.\n\n  �ڷΰ���� 'b'�� �������ּ���.\n\n  ���� �ȿ����� ����� �����۸� ������ �����մϴ�.\n");
		a = (_getch());
		if (a == 'b')
			break;
	}
}
/////////�Һ���///////////

void town_inventory5() {
	while (1) {
		char a;
		int n[40] = { 0 };
		int index = 1;
		system("cls");
		printf("�������������������������������������������������������������������\n\n\n");
		for (int i = 0; i < 40; i++) {
				if (ilist[i].ea > 0) {
					if (i < 10) {
						printf("  %d. %s                   hp ȸ�� : %d    mp ȸ�� : %d    ���� ���� : %d\n\n", index, ilist[i].name, ilist[i].add_hp, ilist[i].add_mp, ilist[i].ea);
						n[i] = i;
						index++;
					}
					if (i >= 10 && i < 40) {
						printf("  %d. %s                   ������(���ݷ�) : %d   �ʱ��(����) : %d   ��(�ִ븶��) : %d   ���� ���� : %d\n\n", index, ilist[i].name, ilist[i].add_readership, ilist[i].add_noteship, ilist[i].add_wealth, ilist[i].ea);
						n[i] = i;
						index++;
					}
				}
			
		}
		printf("�������������������������������������������������������������������\n");
		printf("  �� ȭ�鿡���� ������ ���� ��Ȳ�� Ȯ�θ� �� �� �ֽ��ϴ�.\n\n  �ڷΰ���� 'b'�� �������ּ���.\n\n  ���� �ȿ����� ����� �����۸� ������ �����մϴ�.\n");
		a = (_getch());
		if (a == 'b')
			break;
	}
}

////////////////////////	�̰žƷ� ��ĥ ����//////////////////////////////////////////

void town_equip(int cnum, int inum) {
	while (1) {
		char a;
		system("cls");
		printf("�������������������������������������������������������������������\n\n\n");

		printf("�������������������������������������������������������������������\n");
		printf("  �� ȭ�鿡���� ������ ���� ��Ȳ�� Ȯ�θ� �� �� �ֽ��ϴ�.\n\n  �ڷΰ���� 'b'�� �������ּ���.\n\n  ���� �ȿ����� ����� �����۸� ������ �����մϴ�.\n");
		a = (_getch());
		if (a == 'b')
			break;
	}
}

////////////////////////	�̰����� ��ĥ ����//////////////////////////////////////////

void town_inf_cha(CHA clist[3]) {

}

//////////////////////  �̰� �Ʒ� ����  /////////////////////////

void dun_inventory(CHA clist[3]) {
	while (1) {
		char a;
		int n[10] = { 0 };
		int index = 1;
		system("cls");
		printf("�������������������������������������������������������������������\n\n\n");
		for (int i = 0; i < 10; i++) {
				if (ilist[i].ea > 0) {
					printf("  %d. %s                   hp ȸ�� : %d    mp ȸ�� : %d    ���� ���� : %d\n\n", index, ilist[i].name, ilist[i].add_hp, ilist[i].add_mp, ilist[i].ea);
					n[i] = i;
					ilist[i].index = index;
					index++;
				}
			
		}
		printf("�������������������������������������������������������������������\n");
		printf("  ����ϰ� ���� �������� �������ּ���.\n\n  �ڷΰ���� 'b'�� �������ּ���.\n\n  ���� �ȿ����� �Һ��� �����۸� ����� �����մϴ�.\n");
		a = (_getch());

		if (a == '1') {
			if (ilist[0].ea != 0)
				use_item(clist, ilist, 0);
			else
				continue;
		}
		if (a == '2') {
			if (ilist[1].ea != 0)
				use_item(clist, ilist, 1);
			else
				continue;
		}
		if (a == '3') {
			if (ilist[2].ea != 0)
				use_item(clist, ilist, 2);
			else
				continue;
		}
		if (a == '4') {
			if (ilist[3].ea != 0)
				use_item(clist, ilist, 3);
			else
				continue;
		}
		if (a == '5') {
			if (ilist[4].ea != 0)
				use_item(clist, ilist, 4);
			else
				continue;
		}
		if (a == '6') {
			if (ilist[5].ea != 0)
				use_item(clist, ilist, 5);
			else
				continue;
		}
		if (a == '7') {
			if (ilist[6].ea != 0)
				use_item(clist, ilist, 6);
			else
				continue;
		}
		if (a == '8') {
			if (ilist[7].ea != 0)
				use_item(clist, ilist, 7);
			else
				continue;
		}
		if (a == '9') {
			if (ilist[8].ea != 0)
				use_item(clist, ilist, 8);
			else
				continue;
		}
		if (a == '0') {
			if (ilist[9].ea != 0)
				use_item(clist, ilist, 9);
			else
				continue;
		}

		if (a == 'b')
			break;
	}
}

//////////////////////  �̰� ���� ����  /////////////////////////

void dun_inf_cha(CHA clist[3]) {

}

void dun_inf_mon(MON mlist[3]) {

}

void use_item(CHA clist[3], ITEM ilist[40], int index) {
	while (1) {
		int check=0;
		for (int i = 0; i < 10; i++) {
			if (ilist[i].index == index) {
				check = i-1;
				break;
			}
		}
		char a;
		system("cls");
		printf("�������������������������������������������������������������������\n\n\n");
		printf("\n");
		if (clist[0].hp > 0)
			printf("  %s                                                           ��                                                        \n", clist[0].name);
		if (clist[0].hp <= 0)
			printf("                                                                   ��                                                        \n");

		if (clist[1].hp > 0)
			printf("  %s                                                           ��                                                        \n", clist[1].name);
		if (clist[1].hp <= 0)
			printf("                                                                   ��                                                        \n");

		if (clist[2].hp > 0)
			printf("  %s                                                           ��                                                        \n", clist[2].name);
		if (clist[2].hp <= 0)
			printf("                                                                   ��                                                        \n");
		
		printf("\n");
		printf("�������������������������������������������������������������������\n");
		
		if (clist[0].hp > 0)
			printf("  %s�� ü�� : %3d / %3d    ���� : %3d / %3d                     ��                                     \n", clist[0].name, clist[0].hp, clist[0].fhp, clist[0].mp, clist[0].fmp);
		if (clist[0].hp <= 0)
			printf("                                                                 ��                                     \n");

		if (clist[1].hp > 0)
			printf("  %s�� ü�� : %3d / %3d    ���� : %3d / %3d                     ��                                     \n", clist[1].name, clist[1].hp, clist[1].fhp, clist[1].mp, clist[1].fmp);
		if (clist[1].hp <= 0)
			printf("                                                                 ��                                     \n");

		if (clist[2].hp > 0)
			printf("  %s�� ü�� : %3d / %3d    ���� : %3d / %3d                     ��                                     \n", clist[2].name, clist[2].hp, clist[2].fhp, clist[2].mp, clist[2].fmp);
		if (clist[2].hp <= 0)
			printf("                                                                 ��                                     \n");

		printf("\n\n\n");

		printf("  ������ �̸� : %s             hp : %d   mp : %d   ���� ���� : %d", ilist[check].name, ilist[check].add_hp, ilist[check].add_mp, ilist[check].ea);

		printf("\n");
		printf("�������������������������������������������������������������������\n");
		printf("  ����� ĳ���͸� �������ּ���.\n\n  �ڷΰ���� 'b'�� �������ּ���.\n\n  ���� �ȿ����� �Һ��� �����۸� ����� �����մϴ�.\n");
		a = (_getch());
		if (a == '1') {
			effect_item(clist, mlist, 0, index);
		}
		if (a == '2') {
			effect_item(clist, mlist, 1, index);
		}
		if (a == '3') {
			effect_item(clist, mlist, 2, index);
		}
		if (a == 'b')
			break;
	}
}

void effect_item(CHA clist[3], ITEM ilist[40], int cnum, int inum) {
	if (ilist[inum].add_hp > 0 && ilist[inum].add_mp == 0) {
		if (clist[cnum].hp + ilist[inum].add_hp >= clist[cnum].fhp)
			clist[cnum].hp = clist[cnum].fhp;
		else
			clist[cnum].hp += ilist[inum].add_hp;
	}
	if (ilist[inum].add_hp == 0 && ilist[inum].add_mp > 0) {
		if (clist[cnum].mp + ilist[inum].add_mp >= clist[cnum].fmp)
			clist[cnum].mp = clist[cnum].fmp;
		else
			clist[cnum].mp += ilist[inum].add_mp;
	}
	if (ilist[inum].add_hp > 0 && ilist[inum].add_mp > 0) {
		if (clist[cnum].hp + ilist[inum].add_hp >= clist[cnum].fhp)
			clist[cnum].hp = clist[cnum].fhp;
		else
			clist[cnum].hp += ilist[inum].add_hp;
		if (clist[cnum].mp + ilist[inum].add_mp >= clist[cnum].fmp)
			clist[cnum].mp = clist[cnum].fmp;
		else
			clist[cnum].mp += ilist[inum].add_mp;
	}

	ilist[inum].ea--;

}