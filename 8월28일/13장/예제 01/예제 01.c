#include<stdio.h>
#include<string.h>

struct student {
	int number;
	char name[10];				//����ü ����
	double grade;
};

int main() {
	struct student s;					//����ü ���� ����

	s.number = 20070001;				//�� ��� ����
	strcpy(s.name, "ȫ�浿");			//�� ��� ����
	s.grade = 4.3;								//�� ��� ����

	printf("�й� : %d\n", s.number);
	printf("�̸� : %s\n", s.name);
	printf("���� : %f\n", s.grade);

	return 0;
}