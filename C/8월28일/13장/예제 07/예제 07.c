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

	printf("�й� : ");
	scanf("%d", &s.number);
	printf("�̸� : ");
	scanf("\n%s", s.name);
	printf("���� : ");
	scanf("\n%lf", &s.grade);
	printf("�¾ �� : ");
	scanf("\n%d", &s.d->month);
	printf("�¾ �� : ");
	scanf("\n%d", &s.d->day);
	printf("�¾ �� : ");
	scanf("\n%d", &s.d->year);

	printf("\n\n�й� : %d\n", s.number);
	printf("�̸� : %s\n", s.name);
	printf("���� : %lf\n", s.grade);
	printf("������� : %d�� %d�� %d��\n", s.d->year, s.d->month, s.d->day);
	return 0;
}