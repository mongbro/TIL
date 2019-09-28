#pragma once
#include<stdio.h>
#include<conio.h>
#include<windows.h>

void print1();
void print2();
void print3();

void print1() {
	while (1) {
		char a;
		system("cls");
		printf("111111111111111111111\n1111111111111111111\n");
		a = _getch();
		if (a == '2')
			print2();
		if (a == '3')
			print3();
	}
}

void print2() {
	while (1) {

		char a;
		system("cls");
		printf("222222222222222222222\n2222222222222222222\n");
		a = _getch();
		if (a == '1')
			print1();
		if (a == '3')
			print3();
	}
}

	void print3() {
		while (1) {

			char a;
			system("cls");
			printf("33333333333333333333333\n33333333333333333333\n");
			a = _getch();
			if (a == '1')
				print1();
			if (a == '2')
				print2();
		}
	}
