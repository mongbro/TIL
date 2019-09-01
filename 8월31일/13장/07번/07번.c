#include<stdio.h>

struct point {
	int x, y;
};

int quadrant(struct point p);

int main() {
	struct point p;

	printf("�Է� : ");
	scanf("%d %d", &p.x, &p.y);

	printf("(%d, %d)�� ��и� = %d", p.x, p.y, quadrant(p));

	return 0;
}

int quadrant(struct point p) {
	if (p.x > 0 && p.y > 0)
		return 1;
	if (p.x > 0 && p.y < 0)
		return 4;
	if (p.x < 0 && p.y>0)
		return 2;
	if (p.x < 0 && p.y < 0)
		return 3;
}