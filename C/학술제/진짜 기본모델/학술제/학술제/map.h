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
	printf("�������������������������������������������������������������������\n");
}

void town() {
	printf("\n");

}

void print_map(CHA clist[3], MON mlist[3]) {
	printf("\n");
	printf("  %s                                                           ��                                                        %s\n", clist[0].name, mlist[0].name);
	printf("  %s                                                           ��                                                        %s\n", clist[1].name, mlist[1].name);
	printf("  %s                                                           ��                                                        %s\n", clist[2].name, mlist[2].name);
	printf("\n");
}

void print_hp(CHA clist[3], MON mlist[3]) {
	printf("  %s�� ü�� : %3d \/ %3d                                        ��                                     %s�� ü�� : %3d \/ %3d\n", clist[0].name, clist[0].hp, clist[0].fhp, mlist[0].name, mlist[0].hp, mlist[0].fhp);
	printf("  %s�� ü�� : %3d \/ %3d                                        ��                                     %s�� ü�� : %3d \/ %3d\n", clist[1].name, clist[1].hp, clist[1].fhp, mlist[1].name, mlist[1].hp, mlist[1].fhp);
	printf("  %s�� ü�� : %3d \/ %3d                                        ��                                     %s�� ü�� : %3d \/ %3d\n", clist[2].name, clist[2].hp, clist[2].fhp, mlist[2].name, mlist[2].hp, mlist[2].fhp);
	printf("\n");
}

void dungeon(CHA clist[3], MON mlist[3]) {
	system("cls");
	print_line();
	printf("\n");
	printf("%s                                                          ��                                                          %s\n", clist[0].name, mlist[0].name);
	printf("%s                                                          ��                                                          %s\n", clist[1].name, mlist[1].name);
	printf("%s                                                          ��                                                          %s\n", clist[2].name, mlist[2].name);
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
		printf("  ���ѷα��Դϴ�.~~~~~~\n    �� ������ �������� �������� �ʽ��ϴ�!!!!!\n    �����ϰ� ������ ���ּ���!!!!!\n    ����Ű�� ������ ���� �������� �ѹ��� �Ѿ ���� �ֽ��ϴ�.�Ф�\n\n\n    ��� �Ͻ÷��� �ƹ�Ű�� ��������.\n");
		print_line();
		if (_getch())
			break;
	}
	while (1) {
		system("cls");
		print_line();
		printf("  ����1111111111111111����11111111111111����11111111111111\n\n��� �Ͻ÷��� �ƹ�Ű�� ��������.\n");
		print_line();
		if (_getch())
			break;
	}
	while (1) {
		system("cls");
		print_line();
	printf("  ����222222222222222����222222222222222����222222222222222\n\n��� �Ͻ÷��� �ƹ�Ű�� ��������.\n");
	print_line();
	if (_getch())
		break;
	}
	while (1) {
		system("cls");
		print_line();
	printf("  ����333333333333333����333333333333333����333333333333333\n\n��� �Ͻ÷��� �ƹ�Ű�� ��������.\n");
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
		printf("  1. %s                     = %s�� �����մϴ�.\n", clist[0].name, clist[0].name);
		printf("  2. %s                     = %s�� �����մϴ�.\n", clist[1].name, clist[1].name);
		printf("  3. %s                     = %s�� �����մϴ�.\n", clist[2].name, clist[2].name);
		printf("\n\n  ��� �Ͻ÷��� \'1\'�� ��������.\n");
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
		printf("  %s�� ���!!                                                   = �����ϴ� �Ʊ� ĳ������ �̸��Դϴ�.\n\n", clist[0].name);
		printf("  1. �⺻����                                                     = ĳ������ �⺻ ������ �մϴ�.\n");
		printf("  2. ��ų                                                         = ĳ������ ��ų�� �����մϴ�.\n");
		printf("  3. ������                                                       = �κ��丮���� ��� ������ �������� �����մϴ�.\n");
		printf("  4. ����ġ��!                                                    = �̹� ���������� �����մϴ�.\n");
		printf("\n\n  ��� �Ͻ÷��� '2'�� ��������.\n");
		print_line();
		printf("\n    �ؾƱ� ĳ���ʹ� ����, ����, ���� ������ ����˴ϴ�.\n    ����� ����� �������� �ʽ��ϴ�!! \n    ������ �����ϼ���.");
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
		printf("  %s�� ��ų!!                                                   = ������ ĳ������ �̸��Դϴ�.\n\n", clist[0].name);
		printf("  1. %s  : att+%2d def+%2d mp-%2d                                  = %s�� ��ų�� �����մϴ�.\n", clist[0].skill[0].name, clist[0].skill[0].add_att, clist[0].skill[0].add_def, clist[0].skill[0].diff_mp, clist[0].name);
		printf("  2. %s  : att+%2d def+%2d mp-%2d                                  = %s�� ��ų�� �����մϴ�.\n", clist[0].skill[1].name, clist[0].skill[1].add_att, clist[0].skill[1].add_def, clist[0].skill[1].diff_mp, clist[0].name);
		printf("\n\n  ��� �Ͻ÷��� '2'�� ��������.\n");
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
		printf("  %s�� %s ��ų!!                                              = ������ ĳ������ ��ų�Դϴ�.\n\n", clist[0].name, clist[0].skill[1].name);
		printf("  1. %s                                                        = %s��ų�� %s�� �����մϴ�.\n", mlist[0].name, clist[0].skill[1].name, mlist[0].name);
		printf("  2. %s                                                        = %s��ų�� %s�� �����մϴ�.\n", mlist[1].name, clist[0].skill[1].name, mlist[1].name);
		printf("  3. %s                                                        = %s��ų�� %s�� �����մϴ�.\n", mlist[2].name, clist[0].skill[1].name, mlist[2].name);
		printf("\n\n  ��� �Ͻ÷��� '3'�� ��������.\n");
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
		printf("  %s�� %s ��ų!!                                              = ������ ĳ������ ��ų�Դϴ�.\n\n", clist[0].name, clist[0].skill[1].name);
		printf("  %s�� %d�� �������� ����!!!                                   = %s�� %d�� �������� �Ծ����ϴ�.\n", mlist[2].name, hit_damage, mlist[2].name, hit_damage);
		printf("\n\n");
		printf("\n\n  ��� �Ͻ÷��� �ƹ�Ű�� ��������.\n");
		print_line();
		if(_getch())
			break;
	}
}