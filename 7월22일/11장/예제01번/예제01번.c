#include<stdio.h>

int main() {
	int arr[] = { 10,20,30,40,50 };

	printf("arr = %u\n", arr);
	printf("&arr[0] = %u\n", &arr[0]);
	printf("arr[0]  = %u\n", arr[0]);
	printf("&arr[1] = %u\n", &arr[1]);
	printf("arr[1]  = %u\n", arr[1]);
	printf("&arr[2] = %u\n", &arr[2]);
	printf("arr[2]  = %u\n", arr[2]);
}