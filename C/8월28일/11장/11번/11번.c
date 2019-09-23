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
	int copy[10] = { 0 };			//10짜리 배열 0으로 초기화
	int small, snumber = 0;		//small = 배열의 원소가 가장 작은 수 [     ex) a[0]     ]				snumber = 원소가 가장 작은 수를 가지는 인덱스 [     ex) a[0] 에서의 0     ]

	for (int i = 0; i < size; i++) {
		copy[i] = a[i];
	}

	for (int i = size; i < size * 2; i++) {
		copy[i] = b[i - size];
	}
																							// c[0] ~ c[8]까지에 a[0], a[1], ... b[0], b[1], ...b[3] 을 넣는다.						=> c[] = { 2,5,7,8,1,3,4,6 }
	for (int i = 0; i < size * 2; i++) {
		small = _CRT_INT_MAX;				//가장 작은 수를 대입할거니까 이것보다 큰 수가 없도록 만든다.		 _CRT_INT_MAX = int형의 최대값(2147483647)
		int j;
		for (j = 0; j < size * 2; j++) {
			if (small > copy[j]) {
				small = copy[j];						//가장 작은 값의 원소를 찾아서 저장
				snumber = j;								//그 인덱스를 찾아서 저장
			}
		}
		c[i] = small;										//가장 작은 것부터 차례로 c[]에 저장
		copy[snumber] = _CRT_INT_MAX;					//이미 사용한 원소는 int형 최대값으로 바꿔서 다시 출력되는것을 방지
	}
}

void print(int* a, int size) {
	for (int i = 0; i < size; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
}