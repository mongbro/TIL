#include<stdio.h>
#define PIE 3.141592

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
	double a, p;
	printf("원의 중심 좌표 : ");
	scanf("%d %d", &c.center.x, &c.center.y);
	printf("원의 반지름 : ");
	scanf("%lf", &c.radius);
	a = area(c);
	p = perimeter(c);
	printf("원의 면적 : %lf\n원의 둘레 : %lf", a, p);
}

double area(CIRCLE c) {
	return PIE * c.radius * c.radius;
}

double perimeter(CIRCLE c) {
	return 2 * c.radius * PIE;
}