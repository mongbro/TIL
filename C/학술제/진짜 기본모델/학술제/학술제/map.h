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
	printf("�������������������������������������������������������������������\n");
}
void print_upper_map() {
	system("cls");
	printf("�������������������������������������������������������������������\n");
}

void print_lower_map() {
	printf("�������������������������������������������������������������������\n");
}


void town() {
	printf("\n");

}

void dungeon(CHA list[3]) {
	system("cls");
	print_line();
	printf("\n");
	printf("%s                                                          ��                                                          %s\n", list[0].name, "monster");
	printf("%s                                                          ��                                                          %s\n", list[1].name, "monster");
	printf("%s                                                          ��                                                          %s\n", list[2].name, "monster");
	printf("\n");                                                                                                                            
	printf("�������������������������������������������������������������������\n");
	printf("\n");
	printf("%s�� ü�� : %d \/ %d                                       ��                                                  %s�� ü�� : %d \/ %d\n", list[0].name, list[0].fhp, list[0].hp, "monster", 100, 100);
	printf("%s�� ü�� : %d \/ %d                                       ��                                                  %s�� ü�� : %d \/ %d\n", list[1].name, list[1].fhp, list[1].hp, "monster", 100, 100);
	printf("%s�� ü�� : %d \/ %d                                       ��                                                  %s�� ü�� : %d \/ %d\n", list[2].name, list[2].fhp, list[2].hp, "monster", 100, 100);
	printf("\n");
	printf("�������������������������������������������������������������������\n");
	printf("\n");
}

void prologue0() {
	while (1) {
		system("cls");
		print_line();
		printf("  ���ѷα��Դϴ�.~~~~~~\n    �� ������ �ڷΰ��� �Ǵ� �������� �������� �ʽ��ϴ�!!!!!\n\n��� �Ͻ÷��� �ƹ�Ű�� ��������.\n");
		print_line();
		if (getch())
			break;
	}
	while (1) {
		system("cls");
		print_line();
		printf("  ����1111111111111111����11111111111111����11111111111111\n\n��� �Ͻ÷��� �ƹ�Ű�� ��������.\n");
		print_line();
		if (getch())
			break;
	}
	while (1) {
		system("cls");
		print_line();
	printf("  ����222222222222222����222222222222222����222222222222222\n\n��� �Ͻ÷��� �ƹ�Ű�� ��������.\n");
	print_line();
	if (getch())
		break;
	}
	while (1) {
		system("cls");
		print_line();
	printf("  ����333333333333333����333333333333333����333333333333333\n\n��� �Ͻ÷��� �ƹ�Ű�� ��������.\n");
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
		printf("  %s                                                           ��                                                        %s\n", list[0].name, "monster1");
		printf("  %s                                                           ��                                                        %s\n", list[1].name, "monster2");
		printf("  %s                                                           ��                                                        %s\n", list[2].name, "monster3");
		printf("\n");
		printf("�������������������������������������������������������������������\n\n");
		printf("  %s�� ü�� : %d \/ %d                                      ��                                       %s�� ü�� : %d \/ %d\n", list[0].name, list[0].fhp, list[0].hp, "monster1", 100, 100);
		printf("  %s�� ü�� : %d \/ %d                                      ��                                       %s�� ü�� : %d \/ %d\n", list[1].name, list[1].fhp, list[1].hp, "monster2", 100, 100);
		printf("  %s�� ü�� : %d \/ %d                                      ��                                       %s�� ü�� : %d \/ %d\n", list[2].name, list[2].fhp, list[2].hp, "monster3", 100, 100);
		printf("\n");
		printf("�������������������������������������������������������������������\n");
		printf("\n");
		printf("  1. %s                     = %s�� �����մϴ�.\n", list[0].name, list[0].name);
		printf("  2. %s                     = %s�� �����մϴ�.\n", list[1].name, list[1].name);
		printf("  3. %s                     = %s�� �����մϴ�.\n", list[2].name, list[2].name);
		printf("\n\n  ��� �Ͻ÷��� \'1\'�� ��������.\n");
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
		printf("  %s                                                           ��                                                        %s\n", list[0].name, "monster1");
		printf("  %s                                                           ��                                                        %s\n", list[1].name, "monster2");
		printf("  %s                                                           ��                                                        %s\n", list[2].name, "monster3");
		printf("\n");
		printf("�������������������������������������������������������������������\n\n");
		printf("  %s�� ü�� : %d \/ %d                                      ��                                       %s�� ü�� : %d \/ %d\n", list[0].name, list[0].fhp, list[0].hp, "monster1", 100, 100);
		printf("  %s�� ü�� : %d \/ %d                                      ��                                       %s�� ü�� : %d \/ %d\n", list[1].name, list[1].fhp, list[1].hp, "monster2", 100, 100);
		printf("  %s�� ü�� : %d \/ %d                                      ��                                       %s�� ü�� : %d \/ %d\n", list[2].name, list[2].fhp, list[2].hp, "monster3", 100, 100);
		printf("\n");
		printf("�������������������������������������������������������������������\n");
		printf("\n");
		printf("  %s�� ���!!               = ������ ĳ������ �̸��Դϴ�.\n\n", list[0].name);
		printf("  1. �⺻����                 = ĳ������ �⺻ ������ �մϴ�.\n");
		printf("  2. ��ų                     = ĳ������ ��ų�� �����մϴ�.\n");
		printf("  3. ������                   = �κ��丮���� ��� ������ �������� �����մϴ�.\n");
		printf("  4. ����ġ��!                = �̹� ���������� �����մϴ�.\n");
		printf("\n\n  ��� �Ͻ÷��� '2'�� ��������.\n");
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
		printf("  %s                                                           ��                                                        %s\n", list[0].name, "monster1");
		printf("  %s                                                           ��                                                        %s\n", list[1].name, "monster2");
		printf("  %s                                                           ��                                                        %s\n", list[2].name, "monster3");
		printf("\n");
		printf("�������������������������������������������������������������������\n\n");
		printf("  %s�� ü�� : %d \/ %d                                      ��                                       %s�� ü�� : %d \/ %d\n", list[0].name, list[0].fhp, list[0].hp, "monster1", 100, 100);
		printf("  %s�� ü�� : %d \/ %d                                      ��                                       %s�� ü�� : %d \/ %d\n", list[1].name, list[1].fhp, list[1].hp, "monster2", 100, 100);
		printf("  %s�� ü�� : %d \/ %d                                      ��                                       %s�� ü�� : %d \/ %d\n", list[2].name, list[2].fhp, list[2].hp, "monster3", 100, 100);
		printf("\n");
		printf("�������������������������������������������������������������������\n");
		printf("\n");
		printf("  %s�� ��ų!!               = ������ ĳ������ �̸��Դϴ�.\n\n", list[0].name);
		printf("  1. %s                     = %s�� ��ų�� �����մϴ�.\n", list[0].skill[0].name, list[0].name);
		printf("  2. %s                     = %s�� ��ų�� �����մϴ�.\n", list[0].skill[1].name, list[0].name);
		printf("\n\n  ��� �Ͻ÷��� '2'�� ��������.\n");
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
		printf("  %s                                                           ��                                                        %s\n", list[0].name, "monster1");
		printf("  %s                                                           ��                                                        %s\n", list[1].name, "monster2");
		printf("  %s                                                           ��                                                        %s\n", list[2].name, "monster3");
		printf("\n");
		printf("�������������������������������������������������������������������\n\n");
		printf("  %s�� ü�� : %d \/ %d                                      ��                                       %s�� ü�� : %d \/ %d\n", list[0].name, list[0].fhp, list[0].hp, "monster1", 100, 100);
		printf("  %s�� ü�� : %d \/ %d                                      ��                                       %s�� ü�� : %d \/ %d\n", list[1].name, list[1].fhp, list[1].hp, "monster2", 100, 100);
		printf("  %s�� ü�� : %d \/ %d                                      ��                                       %s�� ü�� : %d \/ %d\n", list[2].name, list[2].fhp, list[2].hp, "monster3", 100, 100);
		printf("\n");
		printf("�������������������������������������������������������������������\n");
		printf("\n");
		printf("  %s�� %s ��ų!!               = ������ ĳ������ ��ų�Դϴ�.\n\n", list[0].name, list[0].skill[1].name);
		printf("  1. monster1                     = %s��ų�� monster1�� �����մϴ�.\n", list[0].skill[0].name);
		printf("  2. monster2                     = %s��ų�� monster1�� �����մϴ�.\n", list[0].skill[1].name);
		printf("  3. monster3                     = %s��ų�� monster1�� �����մϴ�.\n", list[0].skill[1].name);
		printf("\n\n  ��� �Ͻ÷��� '3'�� ��������.\n");
		print_line();
		a = getch();
		if (a == '3')
			break;
		else
			continue;
	}
}