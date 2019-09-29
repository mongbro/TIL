#include<stdio.h>
#include"mong.h"

//int pytha(int a, int b, int c);

int main() {
	int a = 0, b = 0, c = 0;
	int x, y, z;

	for (a = 10; a+b+c <= 1000; a++) {
		for (b = 10; a + b + c <= 1000; b++) {
			for (c = 10; a + b + c <= 1000; c++) {
				x = pow(a, 2);
				y = pow(b, 2);
				z = pow(c, 2);
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

//int pytha(int a, int b, int c) {
//	if(pow(a,2)+pow(b,2)==pow(c,2))
//
//}