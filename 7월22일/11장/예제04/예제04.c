#include<stdio.h>

void sub1(int a, int b, int c);
void sub2(int arr[3]);

int main() {
	int a, b, c;
	int arr[] = { 1,2,3 };
	a = 1, b = 2, c = 3;
	printf("%d%d%d\n", a, b, c);
	printf("%d%d%d\n\n", arr[0], arr[1], arr[2]);
	sub1(a, b, c);
	sub2(arr);
	printf("%d%d%d\n", a, b, c);
	printf("%d%d%d\n\n", arr[0], arr[1], arr[2]);
	return 0;
}

void sub1(int a, int b, int c) {
	a += 1;
	b += 1;
	c += 1;
}

void sub2(int arr[3]) {
	arr[0] += 1;
	arr[1] += 1;
	arr[2] += 1;
}