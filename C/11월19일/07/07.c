#include<stdio.h>

struct point {
	int x, y;
};

int main() {
	struct point p1;
	printf("��ǥ�Է� : ");
	scanf("%d %d", &p1.x, &p1.y);
	if (p1.x > 0)
		if (p1.y > 0)
			printf("(%d, %d) == 1��и�", p1.x, p1.y);
		else if (p1.y < 0)
			printf("(%d, %d) == 4��и�", p1.x, p1.y);
		else
			printf("y����");
	else if (p1.x < 0)
		if (p1.y > 0)
			printf("(%d, %d) == 2��и�", p1.x, p1.y);
		else if (p1.y < 0)
			printf("(%d, %d) == 3��и�", p1.x, p1.y);
		else
			printf("y����");
	else
		printf("x����");
}