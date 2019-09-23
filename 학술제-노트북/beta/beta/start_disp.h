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
		printf("                  ■■■■■■■  ■  ■              ■              ■■■■■■■  ■\n");
		printf("                        ■        ■  ■            ■  ■                      ■■  ■\n");
		printf("                        ■        ■  ■          ■      ■                  ■■    ■■■\n");
		printf("                      ■  ■      ■  ■        ■          ■              ■■      ■\n");
		printf("                      ■  ■      ■■■      ■              ■          ■■        ■\n");
		printf("                    ■      ■    ■  ■    ■■■■■■■■■■■        ■■■■■■■\n");
		printf("                    ■      ■    ■  ■              ■                ■              ■\n");
		printf("                  ■          ■  ■  ■              ■                ■              ■\n");
		printf("                  ■          ■  ■  ■              ■                  ■■■■■■■\n");
		printf("\n\n");
		printf("                                                      ■            ■        ■                          ■\n");
		printf("                                    ■■■■■■■■  ■            ■        ■        ■■■■■■■■  ■\n");
		printf("                                        ■    ■      ■      ■■■■■■■  ■                    ■■  ■\n");
		printf("                                        ■    ■      ■          ■■■      ■                  ■■    ■\n");
		printf("                                        ■    ■      ■        ■■  ■■    ■                ■■      ■\n");
		printf("                                        ■    ■      ■      ■■      ■■  ■■■          ■■        ■\n");
		printf("                                        ■    ■      ■      ■          ■  ■            ■■          ■\n");
		printf("                                    ■■■■■■■■  ■      ■■      ■■  ■          ■■            ■\n");
		printf("                                                      ■        ■■  ■■    ■        ■■              ■\n");
		printf("                                                                  ■■■      ■                            \n");
		printf("\n\n\n");
		printf("                                                       1. 게임 시작\n\n");
		printf("                                                       2. 게임 종료\n\n\n");
		printf("                                            ┌──────────────────────────────────┐\n");
		printf("                                            │  원하는 메뉴의 숫자를 입력하세요 │\n");
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