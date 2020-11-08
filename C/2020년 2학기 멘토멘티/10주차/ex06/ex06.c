#include<stdio.h>

typedef struct complex {
	int real, image;
}C;

C complex_add(C c1, C c2);

int main() {
	C c1 = { 3,4 }, c2 = { 5,7 }, c3;
	c3 = complex_add(c1, c2);

	printf("(%d + %di) + (%d + %di) = (%d + %di)", c1.real, c1.image, c2.real, c2.image, c3.real, c3.image);
}

C complex_add(C c1, C c2) {
	C result;
	result.real = c1.real + c2.real;
	result.image = c1.image + c2.image;
	return result;
}