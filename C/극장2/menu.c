#include"main.h"

int menu() {
	int a;
	extern int log;
	extern char log_id[15];
	while (1) {
		system("cls");
		printf("����������������������������\n\n");
		if (log == 0)
			printf("                                           �α��� �ȵ�\n");
		else
			printf("                              %15s �α��� ��\n", log_id);
		printf("1. ����\n\n");
		printf("2. ���� ���\n\n");
		printf("3. �¼�����\n\n");
		printf("4. �α���\n\n");
		printf("5. �α׾ƿ�\n\n");
		printf("6. ȸ������\n\n");
		printf("7. ���� ����\n\n");
		printf("8. ����\n\n");
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
		if (a == '8')
			return 8;
		else
			continue;
	}
}