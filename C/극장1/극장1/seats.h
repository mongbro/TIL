#ifndef SEATS_H
#define SEATS_H
#include<stdio.h>

typedef struct point {
	int x;
	int y;
}SEAT;

void seat(int seats[][10]);
void print_seat(int seats[][10]);

#endif