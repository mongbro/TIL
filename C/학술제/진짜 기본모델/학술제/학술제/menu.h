#pragma once
#include<stdio.h>
#include"character.h"
#include"skill.h"
#include"item.h"
#include"map.h"

void print_status(CHA clist[3]);

void print_status(CHA clist[3]) {
	while (1) {
		char a;
		system("cls");
		print_line();
		print_map(clist, mlist);
		printf("�������������������������������������������������������������������\n\n");
		print_hp(clist, mlist);
		printf("�������������������������������������������������������������������\n");
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