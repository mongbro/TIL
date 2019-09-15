#include<stdio.h>

struct student {
	int number;
	char name[10];
	double grade;
};

int main() {
	struct student s[3];

	for (int i = 0; i < 3; i++) {
		printf("학번을 입력하시오 : ");
		scanf("%d", &s[i].number);
		printf("이름을 입력하시오 : ");
		scanf("%s", &s[i].name);
		printf("학점을 입력하시오 : ");
		scanf("%lf", &s[i].grade);
	}

	for (int i = 0; i < 3; i++) {
		printf("학번 : %d, 이름 : %s, 학점 : %lf\n", s[i].number, s[i].name, s[i].grade);
	}
	return 0;
}