#include<stdio.h>
#include"mong.h"

int main() {
	int list[3][2] = { 60,70,40,60,50,62 };

	for (int i = 0; i < 3; i++) {
		printf("ÇÐ»ý%dÀÇ Æò±Õ = %2.2lf\n", i + 1, get_average(list[i], 2));
	}

	return 0;
}