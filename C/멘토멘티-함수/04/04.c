#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int is_leap(int year);

int main() {
	int y;

	printf("입력 : ");
	scanf("%d", &y);

	printf("%d년은 %d일입니다.", y, is_leap(y));
}

int is_leap(int y) {
	if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0) 
		return 366;
	else
		return 365;
}