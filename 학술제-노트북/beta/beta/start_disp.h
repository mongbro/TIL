#pragma once
#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<ctype.h>

void print_initial_disp();

void print_initial_disp() {
	int n;
	while (1) {
		system("cls");
		printf("\n\n\n");
		printf("                  ��������  ��  ��              ��              ��������  ��\n");
		printf("                        ��        ��  ��            ��  ��                      ���  ��\n");
		printf("                        ��        ��  ��          ��      ��                  ���    ����\n");
		printf("                      ��  ��      ��  ��        ��          ��              ���      ��\n");
		printf("                      ��  ��      ����      ��              ��          ���        ��\n");
		printf("                    ��      ��    ��  ��    ������������        ��������\n");
		printf("                    ��      ��    ��  ��              ��                ��              ��\n");
		printf("                  ��          ��  ��  ��              ��                ��              ��\n");
		printf("                  ��          ��  ��  ��              ��                  ��������\n");
		printf("\n\n");
		printf("                                                      ��            ��        ��                          ��\n");
		printf("                                    ���������  ��            ��        ��        ���������  ��\n");
		printf("                                        ��    ��      ��      ��������  ��                    ���  ��\n");
		printf("                                        ��    ��      ��          ����      ��                  ���    ��\n");
		printf("                                        ��    ��      ��        ���  ���    ��                ���      ��\n");
		printf("                                        ��    ��      ��      ���      ���  ����          ���        ��\n");
		printf("                                        ��    ��      ��      ��          ��  ��            ���          ��\n");
		printf("                                    ���������  ��      ���      ���  ��          ���            ��\n");
		printf("                                                      ��        ���  ���    ��        ���              ��\n");
		printf("                                                                  ����      ��                            \n");
		printf("\n\n\n");
		printf("                                                       1. ���� ����\n\n");
		printf("                                                       2. ���� ����\n\n\n");
		printf("                                            ������������������������������������������������������������������������\n");
		printf("                                            ��  ���ϴ� �޴��� ���ڸ� �Է��ϼ��� ��\n");
		scanf("%d", &n);
		if (n == 1)
			break;
		if (n == 2)
			exit(1);
		if (isdigit(n) == 0) {
			continue;
		}
	}
}