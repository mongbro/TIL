#include<stdio.h>
#include<conio.h>
#include"map.h"

int main() {
	char a;
	a = 'c';
	while (a != '0') {
		a = _getch();
		printf("%d", a);
	}
}