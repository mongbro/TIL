#include<stdio.h>

typedef struct student{
	char name[10];
	int number;
	double grade;
}stu;			//새로 정의한 타입의 이름 : stu

stu competition(stu list[]);

int main() {
	struct student list[5] = {
		{"홍길동", 20120001, 4.5},
		{"김유신", 20120002, 4.4},
		{"박혁거세", 20120003, 4.3},
		{"이성계", 20120004, 4.2},
		{"김좌진", 20120005, 4.0}
	};
	stu best;

	best = competition(list);

	printf("평점이 가장 높은 학생은 (이름 : %s, 학번 : %d, 학점 : %lf)입니다.\n", best.name, best.number, best.grade);

	return 0;
}

stu competition(stu list[]) {
	stu best = list[0];

	for (int i = 1; i < 5; i++) {
		if (list[i].grade > list[i - 1].grade)
			best = list[i];
	}

	return best;
}