#include<stdio.h>
#include<windows.h>
#include<conio.h>
#include<ctype.h>

void seat(int seats[][10]) {
	printf("����������������������������\n");
	printf("    | 0. | 1. | 2. | 3. | 4. | 5. | 6. | 7. | 8. | 9.\n");
	printf("�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�\n");
	for (int i = 0; i < 10; i++) {
		printf("%2d.", i );
		for (int j = 0; j < 10; j++) {
			printf(" |  %d", seats[i][j]);
		}
		printf("\n�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�\n");
	}

	printf("����������������������������\n");
}

void print_seat(int seats[][10]) {
	while (1) {
		system("cls");
		seat(seats);
		printf("�¼����⸦ �����÷��� �ƹ�Ű�� ��������.\n");
		if (getch())
			break;
	}
}
