#include<stdio.h>

int round(double f);

int main() {
	double f;
	printf("실수를 입력 : ");
	scanf("%lf", &f);
	printf("반올림한 값은 %d입니다.", round(f));

	return 0;
}

int round(double f) {
	return (int)(f + 0.5);
}