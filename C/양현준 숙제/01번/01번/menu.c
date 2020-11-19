#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"main.h"

void print_menu(int* year, int* month) {
	char input;

	printf("\t\t����������������������������������������������\n");
	printf("\t\t��         MENU        ��\n");
	printf("\t\t��  d : �����޷� �ѱ�⦢\n");
	printf("\t\t��  a : �����޷� �ѱ�⦢\n");
	printf("\t\t��  s : �������� �ѱ�⦢\n");
	printf("\t\t��  w : �������� �ѱ�⦢\n");
	printf("\t\t��  1 : ������ �߰�    ��\n");
	printf("\t\t��  2 : ������ ����    ��\n");
	printf("\t\t��  3 : ������ ����    ��\n");
	printf("\t\t��  q : ���α׷� ����  ��\n");
	printf("\t\t����������������������������������������������\n");

	printf("�޴��� �Է��Ͻÿ� >>> ");
	input = _getch();
	
	switch (input) {
	case 'd':
		if (*(month) == 12) {
			*(year) += 1;
			*(month) = 1;
		}
		else {
			*(month) += 1;
		}
	}
    print_cal(*year, *month);
}

int isyoon(int a) {
    if ((a % 4 == 0) && !(a % 100 == 0) || (a % 400 == 0)) {
        return 1;
    }
    else {
        return 0;
    }
}

void print_cal(int year, int month) {
    int k; // ����� ����
    int sum = 0; // ������ ��� �� ��� ����
    int chk = 0; // ���� Ȯ�� ����
    int basicyear[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 }; // �⺻ 1~12�� �ϼ�
    if (isyoon(year)) {
        chk = 1;
        basicyear[1]++;
    }
    else
        chk = 0;

    sum = 365;
    for (int i = 1; i < year; i++) {
        if (isyoon(i))
            sum += 366;
        else
            sum += 365;
    }

    for (int i = 0; i < month - 1; i++) {
        sum += basicyear[i];
    }

    k = sum % 7;

    printf("���������������������������������������������������� %4d�� %2d�� ����������������������������������������������������\n", year, month);
    printf("��\tSUN\tMON\tTUE\tWED\tTHU\tFRI\tSAT\t��\n");
    printf("��\t");
    for (int j = 0; j < k; j++) {
        printf("\t");
    }
    for (int i = 1; i <= basicyear[month - 1]; i++) {
        if (k == 0 && i != 1)
            printf("��\t");
        printf("%d\t", i);
        if (k == 6) {
            k = -1;
            printf("��\n");
        }
        k++;
    }
    if (k != 0)
        for (int i = k; i <= 6; i++) {
            printf("\t");
            if (i == 6)
                printf("��\n");
        }
    printf("����������������������������������������������������������������������������������������������������������������������������������");
    for (int j = 0; j < k; j++) {
        printf("\t");
    }

    printf("\n");
}