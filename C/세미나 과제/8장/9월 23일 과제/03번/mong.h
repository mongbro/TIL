#pragma once
#include<stdio.h>

int check(int pw);

int count = 0;

int check(int pw) {
	int upw = 1234;
	count++;
	if (upw == pw)
		return 1;
	else
		return 0;
}