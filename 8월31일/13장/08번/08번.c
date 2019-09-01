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

	printf("���� �߽��� : %d %d\n", c.center.x, c.center.y);
	printf("���� ������ : %lf\n", c.radius);
	printf("���� ���� = %lf     ���� �ѷ� = %lf", area(c), perimeter(c));

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