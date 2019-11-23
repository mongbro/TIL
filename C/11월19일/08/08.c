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
	printf("���� �߽� ��ǥ : ");
	scanf("%d %d", &c.center.x, &c.center.y);
	printf("���� ������ : ");
	scanf("%lf", &c.radius);
	a = area(c);
	p = perimeter(c);
	printf("���� ���� : %lf\n���� �ѷ� : %lf", a, p);
}

double area(CIRCLE c) {
	return PIE * c.radius * c.radius;
}

double perimeter(CIRCLE c) {
	return 2 * c.radius * PIE;
}