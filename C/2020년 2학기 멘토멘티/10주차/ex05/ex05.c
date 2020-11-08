#include<stdio.h>

typedef struct point {
	int x, y;
}Po;

int equal(Po p1, Po p2);

int main() {
	Po p1 = { 1,2 }, p2 = { 3,5 };
	printf("(%d, %d) ", p1.x, p1.y);
	if (equal(p1, p2))
		printf("==");
	else
		printf("!=");
	printf(" (%d, %d)", p2.x, p2.y);
}

int equal(Po p1, Po p2) {
	if (p1.x == p2.x && p1.y == p2.y)
		return 1;
	else
		return 0;
}