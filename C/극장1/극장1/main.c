#include<stdio.h>
#include<windows.h>
#include"main.h"

int log = 0;
int lognum;

int main() {
	int me;
	int seats[10][10] = { 0 };
	MEMBER mem[10], d;
	FILE* fp;
	
	fp = fopen("info.dat", "ab");
	fclose(fp);

	fp = fopen("info.dat", "rb");
	while (1) {
		fread(&d, sizeof(MEMBER), 1, fp);
		if (feof(fp) != 0)
			break;
	}
	fclose(fp);

	while (1) {
		system("cls");
		me = menu();
		if (me == 8) {
			return 0;
		}
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
		if (me == 7)
			check(mem);
	}
}