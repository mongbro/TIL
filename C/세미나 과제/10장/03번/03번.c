#include<stdio.h>
#define PIE 3.141592

double cal_area(double radius);

int main() {
	double r;
	printf("������ �Է� : ");
	scanf("%lf", &r);

	printf("���� ������ %lf", cal_area(r));
	
	return 0;
}

double cal_area(double radius) {
	return PIE * radius * radius;
}