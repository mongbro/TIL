#include<stdio.h>
#define PIE 3.141592

double cal_area(double radius);

int main() {
	double r;
	printf("반지름 입력 : ");
	scanf("%lf", &r);

	printf("원의 면적은 %lf", cal_area(r));
	
	return 0;
}

double cal_area(double radius) {
	return PIE * radius * radius;
}