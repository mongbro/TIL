#include<stdio.h>
#include<windows.h>
#include"func.h"
#include"membership.h"

int log = 0;
int lognum;

int main() {
	int me;
	int seats[10][10] = { 0 };
	MEMBER mem[10] = { 0 };
	for (int i = 0; i < 10; i++) {
		mem[i].flag = 0;
		for (int j = 0; i < 10; i++) {
			for (int k = 0; k < 10; k++) {
				mem[i].s[j][k] = 0;
			}
		}
	}

	while (1) {
		system("cls");
		me = menu();
		if (me == 7)
			return 0;
		if (me == 1)
			reservation(seats);
		if (me == 2)
			deservation(seats);
		if (me == 3)
			print_seat(seats);
		if (me == 4)
			login(mem);
		if (me == 5)
			logout(mem);
		if (me == 6)
			sign_up1(mem);
	}
}