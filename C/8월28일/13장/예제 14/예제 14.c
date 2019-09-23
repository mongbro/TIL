#include<stdio.h>

typedef struct student{
	char name[10];
	int number;
	double grade;
}stu;			//���� ������ Ÿ���� �̸� : stu

stu competition(stu list[]);

int main() {
	struct student list[5] = {
		{"ȫ�浿", 20120001, 4.5},
		{"������", 20120002, 4.4},
		{"�����ż�", 20120003, 4.3},
		{"�̼���", 20120004, 4.2},
		{"������", 20120005, 4.0}
	};
	stu best;

	best = competition(list);

	printf("������ ���� ���� �л��� (�̸� : %s, �й� : %d, ���� : %lf)�Դϴ�.\n", best.name, best.number, best.grade);

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