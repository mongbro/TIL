#include<stdio.h>

struct date {
	int month;
	int day;
	int year;
};

struct student {
	int number;
	char name[10];
	double grade;
	struct date* d;
};

int main() {
	struct date d;
	struct student s;

	s.d = &d;

	printf("학번 : ");
	scanf("%d", &s.number);
	printf("이름 : ");
	scanf("\n%s", s.name);
	printf("학점 : ");
	scanf("\n%lf", &s.grade);
	printf("태어난 월 : ");
	scanf("\n%d", &s.d->month);
	printf("태어난 날 : ");
	scanf("\n%d", &s.d->day);
	printf("태어난 년 : ");
	scanf("\n%d", &s.d->year);

	printf("\n\n학번 : %d\n", s.number);
	printf("이름 : %s\n", s.name);
	printf("학점 : %lf\n", s.grade);
	printf("생년월일 : %d년 %d월 %d일\n", s.d->year, s.d->month, s.d->day);
	return 0;
}