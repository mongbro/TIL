#include<stdio.h>

#define WALL 1
#define MAIN_X 30
#define MAIN_Y 30

int map[MAIN_Y][MAIN_X] = { 0 };

void initial_map();
void print_map();

int main()
{
	initial_map();
	print_map();
}

void initial_map() {
	for (int i = 0; i < MAIN_Y; i++) {
		for (int j = 0; j < MAIN_X; j ++) {
			map[0][j] = WALL;
			map[MAIN_Y - 1][j] = WALL;
		}
	}
}

void print_map() {
	for (int i = 0; i < MAIN_Y; i++) {
		for (int j = 0; j < MAIN_X; j++) {
			printf("%d", map[i][j]);
		}
		printf("\n");
	}
}