#include<stdio.h>
#define SIZE 10

int search(int* a, int size, int search_value);

int main() {
	int a[SIZE] = { 100,150,200,250,300,350,400,450,500,550 };
	int search_value, result;

	printf("���� �׼��� �Է�(����) : ");
	scanf("%d", &search_value);

	result = search(a, SIZE, search_value);
	if (result == 0)
		printf("�ش��ϴ� ����� ����");
	else
		printf("%d", search(a, SIZE, search_value));

	return 0;
}

int search(int* a, int size, int search_value) {
	for (int i = 0; i < size; i++) {
		if (a[i] == search_value)
			return i+1;
	}
	return 0;
}