#pragma once
#include<stdio.h>
#include<string.h>

typedef struct item {
	char name[20];
	int add_readership;
	int add_noteship;
	int add_wealth;
	int num;				//�ش� �������� ����
}ITEM;

int gold = 0;
ITEM ilist[30] = { 0 };			//�κ��丮�� �ִ� ������
ITEM aitem[30] = { 0 };			//��� ������ ������
ITEM ditem[10] = { 0 };			//����Ǵ� ������

void initial_item();
void all_item();
void prologue_item(ITEM ditem[10]);

void initial_item() {

}

void all_item() {
	prologue_item(ditem);
}

void prologue_item(ITEM ditem[10]) {
	strcpy(ditem[0].name, "�ʺ� ������ ��ȹ��");
	strcpy(ditem[1].name, "�ʺ� ������ ������");
	strcpy(ditem[2].name, "������ ������ �뵷");
	ditem[0].add_readership = 5;
	ditem[1].add_noteship = 5;
	ditem[2].add_wealth = 5;
	ditem[0].num = 0;
	ditem[1].num = 0;
	ditem[2].num = 0;
}