#include<stdio.h>
#include<windows.h>
#include<conio.h>
#include"map.h"

void gotoxy(int x, int y);

int main() {
	int x = 0, y = 0;
	char input = 0;
	while (1) {
		gotoxy(x, y);
		printf("_");
		print_map();
		if (_kbhit()) {
			input = _getch();
			switch (input) {
			case 'w':
				y--;
				break;
			case 'a':
				x--;
				break;
			case 's':
				y++;
				break;
			case 'd':
				x++;
				break;
			}
			Sleep(50);
			system("cls");
		}
	}
}

void gotoxy(int x, int y){
	COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}