#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int isyoon(int);
int main() {
    int year; // 사용자 입력 변수
    int month; // 사용자 입력 변수
    int i; // for문용 변수
    int j; // for문용 변수
    int k; // 저장용 변수
    int sum = 0; // 현재의 모든 일 계산 변수
    int chk = 0; // 윤년 확인 변수
    int basicyear[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 }; // 기본 1~12월 일수
    printf("출력할 년,달 입력 ex)2018 03 : ");
    scanf("%d %d", &year, &month);

    //알고리즘

    //윤달 확인
    if (isyoon(year)) {
        chk = 1;
        basicyear[1]++;
    }
    else
        chk = 0;

    //0년부터 작년까지 며칠인지 셈
    sum = 365;
    for (i = 1; i < year; i++) {
        if (isyoon(i))
            sum += 366;
        else
            sum += 365;
    }

    //입력한 달까지 며칠인지 
    for (i = 0; i < month - 1; i++) {
        sum += basicyear[i];
    }

    //1월1일 무슨 요일인지 계산
    k = sum % 7;

    //출력
    printf("SUN\tMON\tTUS\tWED\tTHU\tFRI\tSAT\n");
    printf("===================================================\n");

    //시작 요일에 맞춰 정렬
    for (j = 0; j < k; j++) {
        printf("\t");
    }

    for (i = 1; i <= basicyear[month - 1]; i++) {

        printf("%d\t", i);
        if (k == 6) {
            k = -1;
            printf("\n");
        }
        k++;
    }
    printf("\n");
}
int isyoon(int a) {
    if ((a % 4 == 0) && !(a % 100 == 0) || (a % 400 == 0)) {
        return 1;
    }
    else {
        return 0;
    }
}