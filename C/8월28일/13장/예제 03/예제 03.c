#include<stdio.h>
#include<math.h>

struct point {
	int x;
	int y;
};

int main() {
	struct point p1, p2;
	double dis;

	printf("���� ��ǥ�� �Է��Ͻÿ�(x, y) : ");
	scanf("%d %d", &p1.x, &p1.y);
	printf("���� ��ǥ�� �Է��Ͻÿ�(x, y) : ");
	scanf("%d %d", &p2.x, &p2.y);

	dis = sqrt(((p1.x - p2.x) * (p1.x - p2.x)) + ((p1.y - p2.y) * (p1.y - p2.y)));

	printf("�� �� ������ �Ÿ��� %lf�Դϴ�.\n\n", dis);
	return 0;
}