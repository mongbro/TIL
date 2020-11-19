#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<time.h>
#include"menu.h"

int main(){
    int year, month, day;
    struct tm* t;
    time_t timer;

    timer = time(NULL);
    t = localtime(&timer);
    
    year = t->tm_year + 1900;
    month = t->tm_mon + 1;
    day = t->tm_mday;

    print_cal(year, month);

    printf("%4d�� %2d�� %2d��\n", year, month, day);
    print_menu(&year, &month);
}