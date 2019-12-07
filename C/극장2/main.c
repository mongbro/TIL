#include"main.h"

int log = 0;
char log_id[15];

int main() {
	int me;
	int seats[10][10];
	MEMBER* d;
	FILE* fp = NULL;

	if ((fp = fopen("seats.dat", "rb")) == NULL) {
		for (int i = 0; i < 10; i++) {
			for (int j = 0; j < 10; j++) {
				seats[i][j] = 0;
			}
		}
		fp = fopen("seats.dat", "wb");
		for (int i = 0; i < 10; i++) {
			for (int j = 0; j < 10; j++) {
				fwrite(&seats[i][j], sizeof(int), 1, fp);
			}
		}
		fclose(fp);
	}
	else
		fclose(fp);
	fp = fopen("info.dat", "ab");
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
			print_seat();
		if (me == 4)
			login();
		if (me == 5)
			logout();
		if (me == 6)
			sign_up1();
		if (me == 7)
			check();
	}
}