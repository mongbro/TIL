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

	printf("�й��� �Է��Ͻÿ� : ");
	scanf("%d", &s.number);
	printf("�̸��� �Է��Ͻÿ� : ");
	scanf("\n%s", s.name);
	printf("������ �Է��Ͻÿ�(�Ǽ�) : ");
	scanf("\n%lf", &s.grade);

	printf("�й� : %d\n�̸� : %s\n���� : %lf\n", s.number, s.name, s.grade);

	return 0;
}