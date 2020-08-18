#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void b_rand();

int main() {
	srand((unsigned)time(NULL));
	b_rand();
	b_rand();
	b_rand();
	b_rand();
	b_rand();
}

void b_rand() {
	printf("%d ", rand() % 2);
}