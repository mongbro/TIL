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

	printf("���� ����� ��ǥ�� �Է��Ͻÿ� : ");
	scanf("%d %d", &r.p1.x, &r.p1.y);
	printf("������ �ϴ��� ��ǥ�� �Է��Ͻÿ� : ");
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
	printf("������ %d�̰� �ѷ��� %d�Դϴ�.\n", area, peri);
}