#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void print_cal();

int main() {
	print_cal();
}

void print_cal() {
	printf("����������������  %4d��  %02d�� ����������������\n", 2020, 11);
	printf("�� SUN   MON   TUE   WED   THU   FRI   SAT ��\n");
	printf("�� %2d   %2d   %2d   %2d   %2d   %2d ��", 1, 2, 3, 4, 5, 6, 7);
}