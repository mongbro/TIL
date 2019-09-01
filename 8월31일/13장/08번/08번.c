#include<stdio.h>
#define PIE 3.14

struct point {
	int x, y;
};

struct circle {
	struct point center;
	double radius;
};

double area(struct circle c);
double perimeter(struct circle c);

int main() {
	struct circle c;

	c.center.x = 0;
	c.center.y = 0;
	c.radius = 10;

	printf("원의 중심점 : %d %d\n", c.center.x, c.center.y);
	printf("원의 반지름 : %lf\n", c.radius);
	printf("원의 면적 = %lf     원의 둘레 = %lf", area(c), perimeter(c));

	return 0;
}

double area(struct circle c) {
	double area;

	area = PIE * (c.radius) * (c.radius);

	return area;
}

double perimeter(struct circle c) {
	double perimeter;

	perimeter = 2 * c.radius * PIE;

	return perimeter;
}