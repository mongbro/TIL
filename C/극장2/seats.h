#ifndef SEATS_H
#define SEATS_H
#include<stdio.h>
#include<windows.h>
#include<conio.h>
#include<ctype.h>

typedef struct point {
	int x;
	int y;
}SEAT;

void seat(int seats[][10]);
void print_seat();

#endif