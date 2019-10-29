#include<stdio.h>

void merge(int A[], int B[], int C[], int size);

int main() {
	int i;
	int a[] = { 2,5,7,8 };
	int b[] = { 1,3,4,6 };
	int c[8];
	merge(a, b, c, 4);
	for (i = 0; i < 8; i++)
		printf("%d ", c[i]);
	printf("\n");
	return 0;
}

void merge(int A[], int B[], int C[], int size) {
	int i, a, b, c;
	for (a = 0, b = 0, c = 0; a < size && b < size;) {
		if (A[a] < B[b])
			C[c++] = A[a++];
		else
			C[c++] = B[b++];
	}
	for(i=a;i<size;i++)
		C[c++] = A[a++];
	for (i = b; i < size; i++)
		C[c++] = B[b++];

}