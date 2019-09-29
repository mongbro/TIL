#pragma once
#include<stdio.h>

typedef struct experiment {
	int level;
	int fexp;
	int exp;
	int persent;
}EXP;

void initial_exp();

EXP explist[11] = { 0 };

void initial_exp() {
	for (int i = 1; i < 11; i++) {
		explist[i].level = i;
		explist[i].exp = 0;
	}
	explist[1].fexp = 100;
	explist[2].fexp = 200;
	explist[3].fexp = 400;
	explist[4].fexp = 700;
	explist[5].fexp = 1100;
	explist[6].fexp = 1600;
	explist[7].fexp = 2200;
	explist[8].fexp = 2900;
	explist[9].fexp = 3700;
	explist[10].fexp = 4600;

	for (int i = 1; i < 11; i++) {
		explist[i].persent = explist[i].exp / explist[i].fexp;
	}
}