#define _CRT_SECURE_NO_WARINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include<windows.h>

#define MAP_Y 16
#define MAP_X 16

void GernerateMap(char aMap[MAP_Y][MAP_X]);
void PrintMap(char aMap[MAP_Y][MAP_X]);
void gotoxy(int x, int y);
void move(char aMap[MAP_Y][MAP_X]);

int main()
{
	int x, y;
	char aMap[MAP_Y][MAP_X];

	srand((unsigned)time(NULL));

	// 장애물 랜덤 설정
	for (y = 0; y < MAP_Y; y++)
	{
		for (x = 0; x < MAP_X; x++)
		{
			aMap[y][x] = (rand() & 0x0000000f) == 0x0000000f ? '#' : ' ';
		}
	}

	while (1)
	{
		system("cls");
		GernerateMap(aMap);
		PrintMap(aMap);
		move(aMap);
	}
	return 0;
}

void GernerateMap(char aMap[MAP_Y][MAP_X])
{
	int x, y;

	//맵 범위 설정
	for (y = 0; y < MAP_Y; y++)
	{
		aMap[y][0] = '#';
		aMap[y][MAP_X - 1] = '#';
	}

	for (x = 0; x < MAP_X; x++)
	{
		aMap[0][x] = '#';
		aMap[MAP_Y - 1][x] = '#';
	}
}

void PrintMap(char aMap[MAP_Y][MAP_X]) // 맵 출력
{
	int x, y;
	for (y = 0; y < MAP_Y; y++)
	{
		for (x = 0; x < MAP_X; x++)
		{
			putchar(aMap[x][y]);
		}
		printf("\n");
	}
}

//이게 좌표 이동 함수래..
void gotoxy(int x, int y)
{
	COORD Cursor;
	Cursor.X = x;
	Cursor.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cursor);
}

void move(char aMap[MAP_Y][MAP_X])
{
	char player = '&';
	static int x = 1;
	static int y = 1;
	char ch;

	gotoxy(y, x);
	printf("&");
	switch (ch = getch())
	{
	case '5':
		if (aMap[y][x + 1] != '#')
			x++;
		break;
	case '4':
		if (aMap[y - 1][x] != '#')
			y--;
		break;
	case '6':
		if (aMap[y + 1][x] != '#')
			y++;
		break;
	case '8':
		if (aMap[y][x - 1] != '#')
			x--;
		break;
	}

}