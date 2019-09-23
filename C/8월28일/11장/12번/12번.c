#include<stdio.h>

void get_int(int* px, int* py);

int main() {
	int x, y;

	printf("2개의 정수를 입력하시오 : ");
	scanf("%d %d", &x, &y);

	get_int(&x, &y);												// 포인터형 변수가 들어와야 할 자리니까 포인터형 변수 대신 그 포인터의 주소를 대입해준다.

	return 0;
}

void get_int(int* px, int* py) {
	int sum = *px + *py;

	printf("정수의 합은 %d", sum);
}


////////////////////////////////***   위와 조~금 다른 방법***////////////////////////////////

/*
#include<stdio.h>

void get_int(int* px, int* py);

int main() {
	int x, y;
	int* px = &x, * py = &y;									//  포인터형 변수를 따로 선언해주고

	printf("2개의 정수를 입력하시오 : ");
	scanf("%d %d", &x, &y);

	get_int(px, py);												//포인터형 변수가 들어갈 자리에 변수명을 그대로 써줘도 ok

	return 0;
}

void get_int(int* px, int* py) {
	int sum = *px + *py;

	printf("정수의 합은 %d", sum);
}
*/