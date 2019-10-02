#pragma once
#include<stdio.h>
#include<string.h>

typedef struct item {
	char name[20];
	int add_readership;
	int add_noteship;
	int add_wealth;
	int add_hp;
	int add_mp;
	int ea;					//�ش� �������� ����
	int index;
	int num;
}ITEM;

int gold = 0;
ITEM ilist[40] = { 0 };				//�κ��丮�� �ִ� ������
ITEM aitem[40] = { 0 };				//��� ������ ������
ITEM dilist[10] = { 0 };			//����Ǵ� ������
ITEM emptylist[10] = { 0 };

void initial_item();
void all_item();
void prologue_ditem(ITEM ditem[10]);
void all_0_item();
void all_1_item();
void all_2_item();
void all_3_item();

void initial_item() {

}

void all_item() {
	all_0_item();
	all_1_item();
	all_2_item();
	all_3_item();
}

void all_0_item() {
	strcpy(ilist[0].name, "���γ��� C");
	strcpy(ilist[1].name, "��ī�� F");
	strcpy(ilist[2].name, "��ī�� D");
	strcpy(ilist[3].name, "��Ÿ 500");
	strcpy(ilist[4].name, "HOT 6");
	strcpy(ilist[5].name, "MONSTER");
	strcpy(ilist[6].name, "������  �� ���� Ŀ�ǿ���");

	ilist[0].add_hp = 20;
	ilist[0].add_mp = 0;
	ilist[1].add_hp = 30;
	ilist[1].add_mp = 30;
	ilist[2].add_hp = 50;
	ilist[2].add_mp = 0;
	ilist[3].add_hp = 0;
	ilist[3].add_mp = 20;
	ilist[4].add_hp = 0;
	ilist[4].add_mp = 30;
	ilist[5].add_hp = 0;
	ilist[5].add_mp = 50;
	ilist[6].add_hp = 50;
	ilist[6].add_mp = 50;

	ilist[0].ea = 0;
	ilist[1].ea = 0;
	ilist[2].ea = 0;
	ilist[3].ea = 0;
	ilist[4].ea = 0;
	ilist[5].ea = 0;
	ilist[6].ea = 0;

	ilist[0].num = 0;
	ilist[1].num = 1;
	ilist[2].num = 2;
	ilist[3].num = 3;
	ilist[4].num = 4;
	ilist[5].num = 5;
	ilist[6].num = 6;
}

void all_1_item() {
	strcpy(ilist[10].name, "�ʺ� ������ ��ȹ��");

	ilist[10].add_readership = 5;
	ilist[10].num = 10;
	ilist[10].ea = 0;
	
}

void all_2_item() {
	strcpy(ilist[20].name, "�ʺ� ������ ������");

	ilist[20].add_noteship = 5;
	ilist[20].num = 20;
	ilist[20].ea = 0;

}

void all_3_item() {
	strcpy(ilist[30].name, "������ ������ �뵷");

	ilist[30].add_wealth = 5;
	ilist[30].num = 30;
	ilist[30].ea = 0;

}
void prologue_ditem(ITEM dilist[10]) {
	strcpy(dilist[0].name, ilist[10].name);
	strcpy(dilist[1].name, ilist[20].name);
	strcpy(dilist[2].name, ilist[30].name);
	strcpy(dilist[3].name, ilist[0].name);
	strcpy(dilist[4].name, ilist[3].name);

	dilist[0].ea = 1;
	dilist[1].ea = 1;
	dilist[2].ea = 1;
	dilist[3].ea = 1;
	dilist[4].ea = 1;
	dilist[0].num = ilist[10].num;
	dilist[1].num = ilist[20].num;
	dilist[2].num = ilist[30].num;
	dilist[3].num = ilist[0].num;
	dilist[4].num = ilist[3].num;
}