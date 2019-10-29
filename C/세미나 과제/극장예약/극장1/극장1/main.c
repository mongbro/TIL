#include<stdio.h>
#include<windows.h>
#include"func.h"

int main() {
	int me;
	int seats[10][10] = { 0 };

	while (1) {
		system("cls");
		me = menu();
		if (me == 4)
			return 0;
		if (me == 1)
			reservation(seats);
		if (me == 2)
			deservation(seats);
		if (me == 3)
			print_seat(seats);
	}
}