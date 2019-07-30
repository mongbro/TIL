#include<stdio.h>

int check(int x1, int y1, int x2, int y2, float* slope, float* y_intercept);
										//slope = 기울기	y_intercept = y절편
int main() {
	int x1, y1, x2, y2;
	float slope, y_intercept;
	printf("첫번째 좌표 : ");
	scanf_s("%d%d", &x1, &y1);
	printf("두번째 좌표 : ");
	scanf_s("%d%d", &x2, &y2);
	if (check(x1, y1, x2, y2, &slope, &y_intercept) == 0)
		printf("y절편 : 없음\n기울기 : 무한");
	else
		printf("y절편 : %f\n기울기 : %f", y_intercept, slope);
	return 0;
}
									//기울기와 y절편을 인수로 전달한다.
int check(int x1, int y1, int x2, int y2, float* slope, float* y_intercept) {
	if (x1 == x2)
		return 0;
	else {
		*slope = (float)(y2 - y1) / (float)(x2 - x1);
		//기울기의 주소에 기울기를 계산한 값을 넣어라
		*y_intercept = y1 - (*slope) * x1;
		//					 ^       ^
		//					 |       |
		//				  포인터*  곱하기*
			return 1;
	}
}