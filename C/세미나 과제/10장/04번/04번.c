#include<stdio.h>

int is_leap(int year);

int main() {
	int year;

	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &year);

	printf("%d���� %d���Դϴ�.", year, is_leap(year));

	return 0;
}

int is_leap(int year) {
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
		return 366;
	else
		return 365;
}