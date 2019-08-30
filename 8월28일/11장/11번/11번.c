#include<stdio.h>
#define SIZE 4

void merge(int* a, int* b, int* c, int size);
void print(int* a, int size);

int main() {
	int a[SIZE] = { 2,5,7,8 };
	int b[SIZE] = { 1,3,4,6 };
	int c[8];

	merge(a, b, c, SIZE);

	printf("a[] = ");
	print(a, SIZE);
	printf("b[] = ");
	print(b, SIZE);
	printf("c[] = ");
	print(c, 8);

	return 0;
}

void merge(int* a, int* b, int* c, int size) {
	int copy[10] = { 0 };			//10¥�� �迭 0���� �ʱ�ȭ
	int small, snumber = 0;		//small = �迭�� ���Ұ� ���� ���� �� [     ex) a[0]     ]				snumber = ���Ұ� ���� ���� ���� ������ �ε��� [     ex) a[0] ������ 0     ]

	for (int i = 0; i < size; i++) {
		copy[i] = a[i];
	}

	for (int i = size; i < size * 2; i++) {
		copy[i] = b[i - size];
	}
																							// c[0] ~ c[8]������ a[0], a[1], ... b[0], b[1], ...b[3] �� �ִ´�.						=> c[] = { 2,5,7,8,1,3,4,6 }
	for (int i = 0; i < size * 2; i++) {
		small = _CRT_INT_MAX;				//���� ���� ���� �����ҰŴϱ� �̰ͺ��� ū ���� ������ �����.		 _CRT_INT_MAX = int���� �ִ밪(2147483647)
		int j;
		for (j = 0; j < size * 2; j++) {
			if (small > copy[j]) {
				small = copy[j];						//���� ���� ���� ���Ҹ� ã�Ƽ� ����
				snumber = j;								//�� �ε����� ã�Ƽ� ����
			}
		}
		c[i] = small;										//���� ���� �ͺ��� ���ʷ� c[]�� ����
		copy[snumber] = _CRT_INT_MAX;					//�̹� ����� ���Ҵ� int�� �ִ밪���� �ٲ㼭 �ٽ� ��µǴ°��� ����
	}
}

void print(int* a, int size) {
	for (int i = 0; i < size; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
}