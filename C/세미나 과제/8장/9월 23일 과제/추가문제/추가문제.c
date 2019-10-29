#include<stdio.h>
#include"mong.h"

int main() {
	int a = 0, b = 0, c = 0;
	int x, y, z;

	for (a = 10; a+b+c <= 1000; a++) {
		for (b = 10; a + b + c <= 1000; b++) {
			for (c = 10; a + b + c <= 1000; c++) {
				x = a * a;
				y = b * b;
				z = c * c;
				if (x + y == z) {
					if (a < b && b < c) {
						if (a + b + c == 1000) {
							printf("%d %d %d\n", a, b, c);
							printf("%d", a * b * c);
							return 0;
						}
					}
				}
			}
			c = 10;
		}
		b = 10;
	}
}