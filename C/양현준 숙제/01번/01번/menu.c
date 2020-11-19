#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"main.h"

void print_menu(int* year, int* month) {
	char input;

	printf("\t\t┌─────────────────────┐\n");
	printf("\t\t│         MENU        │\n");
	printf("\t\t│  d : 다음달로 넘기기│\n");
	printf("\t\t│  a : 이전달로 넘기기│\n");
	printf("\t\t│  s : 다음날로 넘기기│\n");
	printf("\t\t│  w : 이전날로 넘기기│\n");
	printf("\t\t│  1 : 스케줄 추가    │\n");
	printf("\t\t│  2 : 스케줄 삭제    │\n");
	printf("\t\t│  3 : 수케줄 수정    │\n");
	printf("\t\t│  q : 프로그램 종료  │\n");
	printf("\t\t└─────────────────────┘\n");

	printf("메뉴를 입력하시오 >>> ");
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
    int k; // 저장용 변수
    int sum = 0; // 현재의 모든 일 계산 변수
    int chk = 0; // 윤년 확인 변수
    int basicyear[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 }; // 기본 1~12월 일수
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

    printf("┌───────────────────────── %4d년 %2d월 ─────────────────────────┐\n", year, month);
    printf("│\tSUN\tMON\tTUE\tWED\tTHU\tFRI\tSAT\t│\n");
    printf("│\t");
    for (int j = 0; j < k; j++) {
        printf("\t");
    }
    for (int i = 1; i <= basicyear[month - 1]; i++) {
        if (k == 0 && i != 1)
            printf("│\t");
        printf("%d\t", i);
        if (k == 6) {
            k = -1;
            printf("│\n");
        }
        k++;
    }
    if (k != 0)
        for (int i = k; i <= 6; i++) {
            printf("\t");
            if (i == 6)
                printf("│\n");
        }
    printf("└───────────────────────────────────────────────────────────────┘");
    for (int j = 0; j < k; j++) {
        printf("\t");
    }

    printf("\n");
}