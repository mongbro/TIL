#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int get_dice_face();

int get_dice_face()
{
	int n;
	n = rand() % 6 + 1;
	return n;
}