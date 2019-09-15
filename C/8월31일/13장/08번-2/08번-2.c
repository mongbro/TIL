#include<stdio.h>
#define PIE 3.14

struct point {
	int x, y;
};

typedef struct circle {
	struct point center;
	double radius;
}CIRCLE;

double area(CIRCLE c);
double perimeter(CIRCLE c);

int main() {
	CIRCLE c;
	c.center.x = 0;
	c.center.y = 0;
	c.radius = 10;

	printf("원의 중심점 : %d %d\n", c.center.x, c.center.y);
	printf("원의 둘레 : %lf\n", c.radius);
	printf("원의 면적 = %lf     원의 둘레 = %lf", area(c), perimeter(c));

	return 0;
}

double area(CIRCLE c) {
	double area;
	area = (c.radius) * (c.radius) * PIE;
	return area;
}

double perimeter(CIRCLE c) {
	double perimeter;
	perimeter = (c.radius) * 2 * PIE;
	return perimeter;
}