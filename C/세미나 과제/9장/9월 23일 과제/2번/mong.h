#pragma once
#include<stdio.h>
#include<stdlib.h>

int get_dice_face();

int get_dice_face() {
	int n = rand() % 6 + 1;

	return n;
}