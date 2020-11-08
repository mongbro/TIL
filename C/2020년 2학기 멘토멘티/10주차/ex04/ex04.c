#include<stdio.h>

struct complex {
	double real; double image;
};

struct complex complex_add(struct complex c1, struct complex c2);

int main() {
	struct complex c1, c2, c3;
	c1.real = 1; c1.image = 2;
	c2.real = 2; c2.image = 3;
	c3 = complex_add(c1, c2);

	printf("%lf + %lfi\n", c1.real, c1.image);
	printf("%lf + %lfi\n", c2.real, c2.image);
	printf("%lf + %lfi\n", c3.real, c3.image);
}

struct complex complex_add(struct complex c1, struct complex c2) {
	struct complex result;
	result.real = c1.real + c2.real;
	result.image = c1.image + c2.image;
	return result;
}