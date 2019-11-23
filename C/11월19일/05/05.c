#include<stdio.h>

struct point {
	int x, y;
};

int main() {
	struct point p1, p2;
	printf("1의 좌표 입력 : ");
	scanf("%d %d", &p1.x, &p1.y);
	printf("2의 좌표 입력 : ");
	scanf("%d %d", &p2.x, &p2.y);
	if (p1.x == p2.x && p1.y == p2.y)
		printf("(%d, %d) == (%d, %d)", p1.x, p1.y, p2.x, p2.y);
	else
		printf("(%d, %d) != (%d, %d)", p1.x, p1.y, p2.x, p2.y);
}