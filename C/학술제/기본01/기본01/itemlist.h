#pragma once
#include<stdio.h>
#include<string.h>

typedef struct item ITEM;

struct item {
	char name[50];
	int a;
	int b;
};

ITEM i_list[30];

void item_list();

void item_list() {
	strcpy(i_list[0].name, "�콼 ���");
	strcpy(i_list[1].name, "�콼 ����");
	strcpy(i_list[2].name, "�η��� �� ���� ������");
	strcpy(i_list[3].name, "�콼 �ܰ�");
	
	for (int i = 0; i < 4; i++) {
		i_list[i].a = 0;
		i_list[i].b = 0;
	}
}