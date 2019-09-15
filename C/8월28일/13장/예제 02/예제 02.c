#include<stdio.h>
#include<string.h>

struct student {
	int number;
	char name[10];
	double grade;
};

int main() {
	struct student s;
	int number;
	char name[10];
	double grade;

	printf("학번을 입력하시오 : ");
	scanf("%d", &s.number);
	printf("이름을 입력하시오 : ");
	scanf("\n%s", s.name);
	printf("학점을 입력하시오(실수) : ");
	scanf("\n%lf", &s.grade);

	printf("학번 : %d\n이름 : %s\n학점 : %lf\n", s.number, s.name, s.grade);

	return 0;
}