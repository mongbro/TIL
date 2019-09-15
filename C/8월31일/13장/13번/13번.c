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
	
	printf("도형의 타입을 입력하시오(0:삼각형 1:사각형  2:원) : ");
	scanf("%d", &s.data.type);
	
	switch (s.data.type) {
	case 0:
		printf("가로와 세로의 길이를 입력하시오 : ");
		scanf("%d %d", &s.data.tri.base, &s.data.tri.height);
		printf("면적은 %d", (s.data.tri.base) * (s.data.tri.height) / 2);
		break;

	case 1:
		printf("가로와 세로의 길이를 입력하시오 : ");
		scanf("%d %d", &s.data.rect.width, &s.data.rect.height);
		printf("면적은 %d", (s.data.rect.width) * (s.data.rect.height));
		break;

	case 2:
		printf("반지름의 길이를 입력하시오 : ");
		scanf("%d", &s.data.circ.radius);
		printf("면적은 %lf", (s.data.circ.radius) * (s.data.circ.radius) * 3.14);
		break;

	default:
		printf("잘못된 입력");
	}
}