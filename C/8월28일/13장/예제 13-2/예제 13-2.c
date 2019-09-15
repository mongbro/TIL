#include<stdio.h>

typedef struct point {
	int x;
	int y;
}POINT;

POINT translate(POINT a, POINT b);

int main() {
	POINT a = { 2,3 };
	POINT b = { 10,10 };
	POINT result;

	result = translate(a, b);

	printf("���ο� ���� ��ǥ�� (%d, %d)�Դϴ�.", result.x, result.y);

	return 0;
}

POINT translate(POINT a, POINT b) {
	POINT sum;

	sum.x = a.x + b.x;
	sum.y = a.y + b.y;

	return sum;
}