#include<stdio.h>

int check(int x1, int y1, int x2, int y2, float* slope, float* y_intercept);
										//slope = ����	y_intercept = y����
int main() {
	int x1, y1, x2, y2;
	float slope, y_intercept;
	printf("ù��° ��ǥ : ");
	scanf_s("%d%d", &x1, &y1);
	printf("�ι�° ��ǥ : ");
	scanf_s("%d%d", &x2, &y2);
	if (check(x1, y1, x2, y2, &slope, &y_intercept) == 0)
		printf("y���� : ����\n���� : ����");
	else
		printf("y���� : %f\n���� : %f", y_intercept, slope);
	return 0;
}
									//����� y������ �μ��� �����Ѵ�.
int check(int x1, int y1, int x2, int y2, float* slope, float* y_intercept) {
	if (x1 == x2)
		return 0;
	else {
		*slope = (float)(y2 - y1) / (float)(x2 - x1);
		//������ �ּҿ� ���⸦ ����� ���� �־��
		*y_intercept = y1 - (*slope) * x1;
		//					 ^       ^
		//					 |       |
		//				  ������*  ���ϱ�*
			return 1;
	}
}