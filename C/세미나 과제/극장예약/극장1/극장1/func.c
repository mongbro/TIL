#include<stdio.h>
#include<windows.h>
#include<conio.h>
#include<ctype.h>

int menu() {
	int a;
	extern int log;
	while (1) {
		system("cls");
		printf("����������������������������\n\n");
		if (log == 0)
			printf("                                           �α��� �ȵ�\n");
		else
			printf("                                             �α��� ��\n");
		printf("1. ����\n\n");
		printf("2. ���� ���\n\n");
		printf("3. �¼�����\n\n");
		printf("4. �α���\n\n");
		printf("5. �α׾ƿ�\n\n");
		printf("6. ȸ������\n\n");
		printf("7. ����\n\n");
		printf("����������������������������\n");
		a = _getch();
		if (a == '1') {
			if (log == 1)
				return 1;
			else {
				printf("�α����� �ʿ��մϴ�.\n");
				if (getch())
					continue;
			}
		}
		if (a == '2') {
			if (log == 1)
				return 2;
			else {
				printf("�α����� �ʿ��մϴ�.\n");
				if (getch())
					continue;
			}
		}
		if (a == '3')
			return 3;
		if (a == '4')
			return 4;
		if (a == '5') {
			if (log == 1)
				return 5;
			else {
				printf("�α����� �ʿ��մϴ�.\n");
				if (getch())
					continue;
			}
		}
		if (a == '6')
			return 6;
		if (a == '7')
			return 7;
		else
			continue;
	}
}

void seat(int seats[][10]) {
	printf("����������������������������\n");
	printf("    | 1. | 2. | 3. | 4. | 5. | 6. | 7. | 8. | 9. | 10.\n");
	printf("�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�\n");
	for (int i = 0; i < 10; i++) {
		printf("%2d.", i + 1);
		for (int j = 0; j < 10; j++) {
			printf(" |  %d", seats[i][j]);
		}
		printf("\n�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�\n");
	}

	printf("����������������������������\n");
}

void reservation(int seats[][10]) {
	extern void reservation_c(int seats[][10]);
	char op;
	while (1) {
		system("cls");
		seat(seats);
		reservation_c(seats);
		printf("������ �����ðڽ��ϱ�? Y or N\n");
		op = _getch();
		if (op == 'y' || op == 'Y')
			break;
		if (op == 'n' || op == 'N')
			continue;
	}
}

void deservation(int seats[][10]) {
	extern void deservation_c(int seats[][10]);
	char op;
	while (1) {
		system("cls");
		seat(seats);
		deservation_c(seats);
		printf("���� ��Ҹ� �����ðڽ��ϱ�? Y or N\n");
		op = _getch();
		if (op == 'y' || op == 'Y')
			break;
		if (op == 'n' || op == 'N')
			continue;
	}
}

void reservation_c(int seats[][10]) {
	int row, col, num;

	while (1) {
		printf("�� �� �� ���� �����Ͻðڽ��ϱ�?(ex. 1 1      3 5)(�ڷΰ���� -1 -1) : ");
		scanf("\n%d%d", &row, &col);
		if (row==-1) {
			break;
		}
		if (row > 10 || col>10) {
			printf("1~10 ���̿��� �������ּ���.\n");
			continue;
		}
		else {
			if (seats[row - 1][col - 1] == 0) {
				seats[row - 1][col - 1] = 1;
				break;
			}
			if (seats[row - 1][col - 1] == 1) {
				printf("�̹� ������ �Ǿ��ִ� �ڸ��Դϴ�. �ٸ� �ڸ��� �������ּ���.\n");
				continue;
			}
			else
				continue;
		}
	}
}

void deservation_c(int seats[][10]) {
	int row, col;

	while (1) {
		printf("�� �� �� ���� ����Ͻðڽ��ϱ�?(ex. 1 1      3 5)(�ڷΰ���� -1 -1) : ");
		scanf("\n%d%d", &row, &col);
		if (row == -1) {
			break;
		}
		if (row > 10 || col > 10) {
			printf("1~10 ���̿��� �������ּ���.\n");
			continue;
		}
		if (seats[row - 1][col - 1] == 1) {
			seats[row - 1][col - 1] = 0;
			break;
		}
		if (seats[row - 1][col - 1] == 0) {
			printf("����Ǿ����� ���� �ڸ��Դϴ�. �ٸ� �ڸ��� �������ּ���.\n");
			continue;
		}
		else
			continue;
	}
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
