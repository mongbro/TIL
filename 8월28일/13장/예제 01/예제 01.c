#include<stdio.h>
#include<string.h>

struct student {
	int number;
	char name[10];				//구조체 선언
	double grade;
};

int main() {
	struct student s;					//구조체 변수 선언

	s.number = 20070001;				//각 멤버 참조
	strcpy(s.name, "홍길동");			//각 멤버 참조
	s.grade = 4.3;								//각 멤버 참조

	printf("학번 : %d\n", s.number);
	printf("이름 : %s\n", s.name);
	printf("학점 : %f\n", s.grade);

	return 0;
}