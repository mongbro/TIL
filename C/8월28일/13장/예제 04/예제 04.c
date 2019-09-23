#include<stdio.h>
struct point {
	int x;
	int y;
};
struct rect {
	struct point p1;
	struct point p2;
};
int main() {
	struct rect r;
	int w, h, area, peri;

	printf("왼쪽 상단의 좌표를 입력하시오 : ");
	scanf("%d %d", &r.p1.x, &r.p1.y);
	printf("오른쪽 하단의 좌표를 입력하시오 : ");
	scanf("%d %d", &r.p2.x, &r.p2.y);

	if (r.p1.x - r.p2.x >= 0)
		w = r.p1.x - r.p2.x;
	else
		w = -(r.p1.x - r.p2.x);
	if (r.p1.y - r.p2.y >= 0)
		h = r.p1.y - r.p2.y;
	else
		h = -(r.p1.y - r.p2.y);

	area = w * h;
	peri = (2 * w) + (2 * h);
	printf("면적은 %d이고 둘레는 %d입니다.\n", area, peri);
}