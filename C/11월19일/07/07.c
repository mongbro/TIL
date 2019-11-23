#include<stdio.h>

struct point {
	int x, y;
};

int main() {
	struct point p1;
	printf("좌표입력 : ");
	scanf("%d %d", &p1.x, &p1.y);
	if (p1.x > 0)
		if (p1.y > 0)
			printf("(%d, %d) == 1사분면", p1.x, p1.y);
		else if (p1.y < 0)
			printf("(%d, %d) == 4사분면", p1.x, p1.y);
		else
			printf("y절편");
	else if (p1.x < 0)
		if (p1.y > 0)
			printf("(%d, %d) == 2사분면", p1.x, p1.y);
		else if (p1.y < 0)
			printf("(%d, %d) == 3사분면", p1.x, p1.y);
		else
			printf("y절편");
	else
		printf("x절편");
}