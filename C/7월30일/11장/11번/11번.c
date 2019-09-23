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
	int n = 0, m = 0, l = 0;		//A, B, C �� �迭�� ��ȣ
	while (n != 4 && m != 4) {		//A�� B�� ��ȣ�� 4���� �Ǹ� �ݺ�Ż��
		if (*(A + n) < *(B + m)) {	//A[n] �� B[m]���� ������
			*(C + l) = *(A + n);	//C[l] = A[n] ����
			n++, l++;				//A�� C�� ��ȣ �ϳ��� ����
		}
		else {						//A[n] �� B[m]���� ũ��
			*(C + l) = *(B + m);	//C[l] = B[n] ����
			m++, l++;				//B�� C�� ��ȣ �ϳ��� ����
		}
	}
									//A �Ǵ� B�� ��ȣ�� 4�� �Ǹ� �ٸ� �迭�� �ϳ� �̻��� ���´�.
									//���� �迭�� ���ҵ��� C�� �������� �ٷ� �Ⱦ��ش�.
	if (m == 4) {					//B�� ���Ҹ� �� ���� ��
		while (n != 4) {
			*(C + l) = *(A + n);
			n++, l++;
		}
	}
	else if (n == 4) {				//A�� ���Ҹ� �� ���� ��
		while (m != 4) {
			*(C + l) = *(B + m);
			m++, l++;
		}
	}
}