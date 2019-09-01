#include<stdio.h>

struct shape {
	union {
		int type;
		struct { int base, height; }tri;
		struct { int width, height; }rect;
		struct { int radius; }circ;
	}data;
};

int main() {
	struct shape s;
	
	printf("������ Ÿ���� �Է��Ͻÿ�(0:�ﰢ�� 1:�簢��  2:��) : ");
	scanf("%d", &s.data.type);
	
	switch (s.data.type) {
	case 0:
		printf("���ο� ������ ���̸� �Է��Ͻÿ� : ");
		scanf("%d %d", &s.data.tri.base, &s.data.tri.height);
		printf("������ %d", (s.data.tri.base) * (s.data.tri.height) / 2);
		break;

	case 1:
		printf("���ο� ������ ���̸� �Է��Ͻÿ� : ");
		scanf("%d %d", &s.data.rect.width, &s.data.rect.height);
		printf("������ %d", (s.data.rect.width) * (s.data.rect.height));
		break;

	case 2:
		printf("�������� ���̸� �Է��Ͻÿ� : ");
		scanf("%d", &s.data.circ.radius);
		printf("������ %lf", (s.data.circ.radius) * (s.data.circ.radius) * 3.14);
		break;

	default:
		printf("�߸��� �Է�");
	}
}