#include<stdio.h>

void get_sum_diff(int x, int y, int* p_sum, int* p_diff);
		   //int형 매개변수 2개,,,, int*형 매개변수 2개
int main() {
	int x, y, sum, diff;
	int* p_sum = &sum, *p_diff = &diff;
	printf("x값 입력 : ");
	scanf_s("%d", &x);
	printf("y값 입력 : ");
	scanf_s("%d", &y);

	get_sum_diff(x, y, p_sum, p_diff);

	printf("합 : %d\n차 : %d", sum, diff);
	return 0;
}

void get_sum_diff(int x, int y, int* p_sum, int* p_diff) {
	*p_sum = x + y;		//sum의 주소를 찾아서 x + y의 값을 넣는다
	*p_diff = x - y;	//diff의 주소를 찾아서 x - y의 값을 넣는다
}