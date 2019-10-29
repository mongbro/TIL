#include<stdio.h>
#define SIZE 10

void selection_sort(int list[], int n);
void print_list(int list[], int n);

int main() {
	int grade[SIZE] = { 3,2,9,7,1,4,8,0,6,5 };

	printf("원래배열\n");
	print_list(grade, SIZE);
	selection_sort(grade, SIZE);
	printf("정렬된 배열\n");
	print_list(grade, SIZE);
	return 0;
}

void print_list(int list[], int n) {
	int i;
	for (i = 0; i < n; i++)
		printf("%d", list[i]);
	printf("\n");
}

void selection_sort(int list[], int n) {
	int i, j, temp, least;
	for (i = 0; i < n; i++) {
		least = i;
		for (j = i + 1; j < n; j++) {
			if (list[least] > list[j])
				least = j;
		}
		temp = list[i];
		list[i] = list[least];
		list[least] = temp;
	}
}