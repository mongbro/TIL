#include<stdio.h>
#define SIZE 10

void convert(double* grade, double* score, int size);

int main() {
	double grade[SIZE] = { 00.00,00.50,01.00, 01.50,02.00,02.50,03.00,03.50,04.00,04.30 };
	double score[SIZE];
	convert(grade, score, SIZE);
	for (int i = 0; i < SIZE; i++) {
		printf("%05.2lf ", grade[i]);		//05.2 의미 => 소수점(.)을 포함해서 5개의 숫자로 표현하되 빈칸은 0으로 채워라
	}
	printf("\n");
	for (int i = 0; i < SIZE; i++) {
		printf("%05.2lf ", score[i]);
	}
}

void convert(double* grade, double* score, int size) {
	for (int i = 0; i < size; i++) {
		*(score + i) = 100 / 4.3 * *(grade + i);		//100점 만점의 점수에는 원점수*100/4.3 을 대입한다.
	}
}