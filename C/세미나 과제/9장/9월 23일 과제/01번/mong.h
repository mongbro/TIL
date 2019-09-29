#pragma once
#include<stdio.h>

int add(int a, int b);
int diff(int a, int b);
int mul(int a, int b);
double div(int a, int b);

static int countadd = 0;
static int countdiff = 0;
static int countmul = 0;
static int countdiv = 0;

int add(int a, int b) {
	return a + b;
}

int diff(int a, int b) {
	return a - b;
}

int mul(int a, int b) {
	return a * b;
}

double div(int a, int b){
	return (double)a / b;
}