#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void sorting(int arr[], int size);

int main() {
	int arr[10];
	srand((unsigned)time(NULL));
	for (int i = 0; i < 10; i++) {
		arr[i] = rand() % 100 + 1;
		printf("%d ", arr[i]);
	}
	
	printf("\n");
	sorting(arr, 10);
	for (int i = 0; i < 10; i++)
		printf("%d ", arr[i]);
}

void sorting(int arr[], int size) {
	int least, temp;
	for (int i = 0; i < size; i++) {
		least = i;
		for (int j = i + 1; j < size; j++)
			if (arr[least] > arr[j])
				least = j;
		temp = arr[i];
		arr[i] = arr[least];
		arr[least] = temp;
	}
}