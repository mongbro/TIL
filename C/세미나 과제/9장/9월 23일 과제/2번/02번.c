#include<stdio.h>
#include"mong.h"

int main() {
	int d;
	static int d1 = 0, d2 = 0, d3 = 0, d4 = 0, d5 = 0, d6 = 0;
	for (int i = 0; i < 100; i++) {
		d = get_dice_face();	
		if (d == 1)
			d1++;
		if (d == 2)
			d2++;
		if (d == 3)
			d3++;
		if (d == 4)
			d4++;
		if (d == 5)
			d5++;
		if (d == 6)
			d6++;
	}
	printf("1 => %d\n", d1);
	printf("2 => %d\n", d2);
	printf("3 => %d\n", d3);
	printf("4 => %d\n", d4);
	printf("5 => %d\n", d5);
	printf("6 => %d\n", d6);
}