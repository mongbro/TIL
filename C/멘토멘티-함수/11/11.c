#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

double f_rand();

int main() {
	srand((unsigned)time(NULL));
	printf("%lf ", f_rand());
	printf("%lf ", f_rand());
	printf("%lf ", f_rand());
	printf("%lf ", f_rand());
	printf("%lf ", f_rand());
}

double f_rand() {
	double r = (double)rand() / RAND_MAX;
	return r;
}