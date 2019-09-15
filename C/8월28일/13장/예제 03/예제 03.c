#include<stdio.h>
#include<math.h>

struct point {
	int x;
	int y;
};

int main() {
	struct point p1, p2;
	double dis;

	printf("점의 좌표를 입력하시오(x, y) : ");
	scanf("%d %d", &p1.x, &p1.y);
	printf("점의 좌표를 입력하시오(x, y) : ");
	scanf("%d %d", &p2.x, &p2.y);

	dis = sqrt(((p1.x - p2.x) * (p1.x - p2.x)) + ((p1.y - p2.y) * (p1.y - p2.y)));

	printf("두 점 사이의 거리는 %lf입니다.\n\n", dis);
	return 0;
}