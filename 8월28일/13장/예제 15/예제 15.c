#include<stdio.h>

typedef struct student {
	int number;
	char name[12];
	double grade;
}stu;

stu get_max_stu(stu list[]);

int main() {
	stu list[5];
	stu best;

	for (int i = 0; i < 5; i++) {
		printf("번호 입력 : ");
		scanf("\n%d", &list[i].number);
		printf("이름 입력 : ");
		scanf("\n%s", list[i].name);
		printf("평점 입력 : ");
		scanf("\n%lf", &list[i].grade);
	}

	best = get_max_stu(list);

	printf("평점이 가장 높은 학생은 (이름 : %s, 학번 : %d, 학점 : %lf)입니다.\n", best.name, best.number, best.grade);

	return 0;
}

stu get_max_stu(stu list[]) {
	stu best = list[0];

	for (int i = 1; i < 5; i++) {
		if (best.grade < list[i].grade)
			best = list[i];
	}

	return best;
}