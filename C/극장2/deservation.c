#include"main.h"

void deservation() {
	char op;
	int num;
	int seats[10][10];
	FILE* fp;
	fp = fopen("seats.dat", "rb");
	fread(seats, sizeof(seats), 1, fp);
	fclose(fp);

	while (1) {
		system("cls");
		seat(seats);
		printf("��� ����Ͻðڽ��ϱ�?(1~100) : ");
		scanf("%d", &num);
		for (int i = 0; i < num; i++)
			deservation_c(seats);
		system("cls");
		seat(seats);
		printf("���� ��Ҹ� �����ðڽ��ϱ�? Y or N\n");
		op = _getch();
		if (op == 'y' || op == 'Y')
			break;
		if (op == 'n' || op == 'N')
			continue;
	}
	fp = fopen("seats.dat", "wb");
	fwrite(seats, sizeof(seats), 1, fp);
	fclose(fp);
}

void deservation_c(int seats[][10]) {
	int row, col, num = fcount(), check, abc;			//num = ��ü ȸ�� ����, abc = ���� ȸ���� ��ȣ(���߿� ��ü ȸ������ �ش� ȸ�� ã���� ���)
	char c1, c2;
	extern char log_id[15];
	FILE* fp;
	MEMBER* list, * d;

	d = (MEMBER*)malloc(1 * sizeof(MEMBER));			//���� �α��� �� ȸ������ �޸� �Ҵ�
	fp = fopen("info.dat", "rb");
	for (int i = 0; i < num; i++) {
		fread(d, sizeof(MEMBER), 1, fp);				//���Ͽ��� ȸ������ �ϳ��� �о����
		if (strcmp(log_id, d->id) == 0) {				//���� �α��� �� ȸ���� ���ؼ� ���� ���� ã��
			abc = i;									//ȸ����ȣ(?)
			break;										//���� ȸ���� ���� ������ ã���� ���� ����������
		}
	}
	fclose(fp);

	while (1) {
		system("cls");
		seat(seats);
		printf("����� ���� �������ּ���.(�ڷΰ���� b) : ");
		c1 = _getch();
		if (c1 == 'b') {
			printf("\n");
			break;
		}
		row = c1 - 48;
		printf("\n");
		if (row > 10) {
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
		printf("����� ���� �������ּ���.(�ڷΰ���� b) : ");
		c2 = _getch();
		if (c2 == 'b') {
			printf("\n");
			break;
		}
		col = c2 - 48;
		check = 0;
		printf("\n");
		if (col > 10) {
			printf("1~10 ���̿��� �������ּ���.\n");
			if (getch())
				continue;
		}
		else {
			if (seats[row][col] == 1) {
				for (int i = 0; i < d->res_num; i++) {						//���� ȸ���� ������ �¼��� �ϳ��� ���鼭
					if (d->rseat[i].x == row && d->rseat[i].y == col) {		//�Է��� �¼��� ���� �����ȣ�� ã��
						for (int j = i; j < d->res_num; j++) {
							d->rseat[j].x = d->rseat[j + 1].x;
							d->rseat[j].y = d->rseat[j + 1].y;
						}
						d->rseat[d->res_num - 1].x = -1;
						d->rseat[d->res_num - 1].y = -1;
						check = 1;
						(d->res_num)--;												//�¼� ���� ���� ����
						seats[row][col] = 0;										//�¼� ���� ���
						break;
					}
				}
				if (check == 0) {											//������ �Ǿ������� �ٸ� ȸ���� ������ �¼�
					printf("�ٸ� ȸ������ ������ �ڸ��Դϴ�.\n�ٸ� �ڸ��� �������ּ���.\n");
					if (getch())
						continue;											//���� ���� ���ư���. 60�������� �̵�
				}
				break;
			}
			if (seats[row][col] == 0) {
				printf("����Ǿ����� ���� �ڸ��Դϴ�. �ٸ� �ڸ��� �������ּ���.\n");
				if (getch())
					continue;												//60�������� �̵�
			}
		}
	}

	list = (MEMBER*)malloc(num * sizeof(MEMBER));
	fp = fopen("info.dat", "rb");
	fread(list, sizeof(MEMBER), num, fp);
	fclose(fp);

	for (int i = 0; i < d->res_num + 1; i++) {
		(list + abc)->rseat[i].x = d->rseat[i].x;
		(list + abc)->rseat[i].y = d->rseat[i].y;
	}
	(list + abc)->res_num = d->res_num;

	fp = fopen("info.dat", "wb");
	fwrite(list, sizeof(MEMBER), num, fp);
	fclose(fp);
	free(list);
	free(d);
}