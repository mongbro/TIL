#include<stdio.h>
#include<windows.h>
#include"func.h"

int log = 0;

int main() {
	int me;
	int seats[10][10] = { 0 };
	char id[15] = "whd4607";
	char pw[20] = "rlawhddms1234";

	while (1) {
		system("cls");
		me = menu();
		if (me == 6)
			return 0;
		if (me == 1)
			reservation(seats);
		if (me == 2)
			deservation(seats);
		if (me == 3)
			print_seat(seats);
		if (me == 4)
			login(id, pw);
		if (me == 5)
			logout(id, pw);
	}
}