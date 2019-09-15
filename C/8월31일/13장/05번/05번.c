#include<stdio.h>

struct point {
	int x, y;
};

int equal(struct point p1, struct point p2);

int main() {
	struct point p1, p2;

	printf("첫번째 점의 좌표 입력 : ");
	scanf("%d %d", &p1.x, &p1.y);
	printf("두번째 점의 좌표 입력 : ");
	scanf("%d %d", &p2.x, &p2.y);

	if (equal(p1, p2) == 1)
		printf("(%d, %d) == (%d, %d)\n", p1.x, p1.y, p2.x, p2.y);
	else
		printf("(%d, %d) != (%d, %d)\n", p1.x, p1.y, p2.x, p2.y);

	return 0;
}

int equal(struct point p1, struct point p2) {
	if (p1.x == p2.x && p1.y == p2.y)
		return 1;
	else
		return 0;
}