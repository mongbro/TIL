#include<stdio.h>

void merge(int* A, int* B, int* C, int size);

int main() {
	int A[4] = { 2,5,7,8 }, B[4] = { 1,3,4,6 }, C[100];
	printf("A[] = ");
	for (int i = 0; i < 4; i++) {
		printf("%d ", A[i]);
	}
	printf("\n");
	printf("B[] = ");
	for (int i = 0; i < 4; i++) {
		printf("%d ", B[i]);
	}
	printf("\n");

	merge(A, B, C, 4);

	printf("C[] = ");
	for (int i = 0; i < 8; i++) {
		printf("%d ", C[i]);
	}
	return 0;
}

void merge(int* A, int* B, int* C, int size) {
	int n = 0, m = 0, l = 0;		//A, B, C 각 배열의 번호
	while (n != 4 && m != 4) {		//A나 B의 번호가 4번이 되면 반복탈출
		if (*(A + n) < *(B + m)) {	//A[n] 이 B[m]보다 작으면
			*(C + l) = *(A + n);	//C[l] = A[n] 대입
			n++, l++;				//A와 C의 번호 하나씩 증가
		}
		else {						//A[n] 이 B[m]보다 크면
			*(C + l) = *(B + m);	//C[l] = B[n] 대입
			m++, l++;				//B와 C의 번호 하나씩 증가
		}
	}
									//A 또는 B의 번호가 4가 되면 다른 배열은 하나 이상이 남는다.
									//남은 배열의 원소들은 C의 나머지에 바로 꽂아준다.
	if (m == 4) {					//B의 원소를 다 썼을 때
		while (n != 4) {
			*(C + l) = *(A + n);
			n++, l++;
		}
	}
	else if (n == 4) {				//A의 원소를 다 썼을 때
		while (m != 4) {
			*(C + l) = *(B + m);
			m++, l++;
		}
	}
}