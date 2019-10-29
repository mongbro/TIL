#pragma once
#include<stdio.h>

int counting(int n);

int counting(int n) {
	static count = 0;
	if (n < 10) {
		count++;
		return count;
	}
	else {
		count++;
		return counting(n / 10);
	}
}