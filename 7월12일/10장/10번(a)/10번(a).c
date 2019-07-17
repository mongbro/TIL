#include<stdio.h>

void vector_add(double a[], double b[], double c[]);

int main() {
	double vec1[3], vec2[3], vec3[3] = { 0 };		//ù��°, �ι�° ���� x,y,z�� 3��
	vec1[0] = 1.0;									//����° ���� = ù��° + �ι�°
	vec1[1] = 2.0;
	vec1[2] = 3.0;
	vec2[0] = 1.0;
	vec2[1] = 2.0;
	vec2[2] = 3.0;
	vector_add(vec1, vec2, vec3);
	for (int i = 0; i < 3; i++) {
		printf("%lf     %lf\n", vec1[i], vec2[i]);
	}
	printf("������ �� = [ %lf, %lf, %lf ]", vec3[0], vec3[1], vec3[2]);
	return 0;	
}

void vector_add(double a[], double b[], double c[]) {
	for (int i = 0; i < 3; i++) {
		c[i] = a[i] + b[i];
	}
}