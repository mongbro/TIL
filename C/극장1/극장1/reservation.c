#include<stdio.h>
#include<windows.h>
#include<conio.h>
#include<ctype.h>

void reservation(int seats[][10]) {
	extern void reservation_c(int seats[][10]);
	char op;
	int num;
	while (1) {
		system("cls");
		seat(seats);
		printf("��� �����Ͻðڽ��ϱ�?(1~5) : ");
		scanf("%d", &num);
		for (int i = 0; i < num; i++)
			reservation_c(seats);
		system("cls");
		seat(seats);
		printf("������ �����ðڽ��ϱ�? Y or N\n");
		op = _getch();
		if (op == 'y' || op == 'Y')
			break;
		if (op == 'n' || op == 'N')
			continue;
	}
}

void reservation_c(int seats[][10]) {
	int row, col;
	char c1, c2;

	while (1) {
		system("cls");
		seat(seats);
		printf("������ ���� �������ּ���.(�ڷΰ���� b) : ");
		c1 = _getch();
		if (c1 == 'b') {
			printf("\n");
			break;
		}
		row = c1 - 48;
		printf("\n");
		if (row >= 10) {
			printf("1~10 ���̿��� �������ּ���.\n");
			if (getch())
				continue;
		}
		system("cls");
		printf("����������������������������\n");
		printf("    | 0. | 1. | 2. | 3. | 4. | 5. | 6. | 7. | 8. | 9.\n");
		printf("�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�\n");
		printf("%d. ", row);
		for (int j = 0; j < 10; j++) {
			printf(" |  %d", seats[row][j]);
		}
		printf("\n�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�\n");
		printf("����������������������������\n");
		printf("������ ���� �������ּ���.(�ڷΰ���� b) : ");
		c2 = _getch();
		if (c2 == 'b') {
			printf("\n");
			break;
		}
		col = c2 - 48;
		printf("\n");
		if (col > 10) {
			printf("1~10 ���̿��� �������ּ���.\n");
			if (getch())
				continue;
		}
		else {
			if (seats[row][col] == 0) {
				seats[row][col] = 1;
				break;
			}
			if (seats[row][col] == 1) {
				printf("�̹� ������ �Ǿ��ִ� �ڸ��Դϴ�. �ٸ� �ڸ��� �������ּ���.\n");
				if (getch())
					continue;
			}
			else
				continue;
		}
	}
}