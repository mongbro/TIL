#pragma once
#include<stdio.h>
#include"skill.h"
#include"item.h"

typedef struct charac {
	char name[20];
	ITEM item[2];
	int hp = 100;
	int mp = 100;
	int att = 10;
	int def = 10;
	int readership = 5;				//������ : ���ݷ� ���� ����
	int noteship = 5;					//�ʱ�� : ���� ���� ����
	int wealth = 5;						//�� : ���� ���� ����              
	int stat4
}CHA;

void initial_charac();

void initial_charac() {

}