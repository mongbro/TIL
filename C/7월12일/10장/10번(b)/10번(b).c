#include<stdio.h>

double vector_dot_product(double a[], double b[]);

int main() {
	double vec1[3] = { 1.0,2.0,3.0 }, vec2[3] = { 1.0,2.0,3.0 };
	printf("벡터의 내적 = %lf", vector_dot_product(vec1, vec2));
	return 0;
}

double vector_dot_product(double a[], double b[]) {
	double r = 0;
	for (int i = 0; i < 3; i++) {
		r += a[i] * b[i];
	}
	return r;
}