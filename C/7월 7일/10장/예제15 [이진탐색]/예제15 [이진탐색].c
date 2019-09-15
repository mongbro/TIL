#include<stdio.h>
#define SIZE 16
int main()
{
	int list[SIZE] = { 2,6,11,13,18,20,22,27,29,30,34,38,41,42,45,47 };
	int key, low, high, middle;
	printf("탐색할 값을 입력 : ");
	scanf_s("%d", &key);
	low = 0, high = SIZE;
	printf("[low high]\n");
	while (1)
	{
		middle = (low + high) / 2;
		printf("[%d  %d]\n", low, high);
		if (key == middle)
		{
			printf("탐색 종료 : %d", middle);
			break;
		}
		if (key < middle)
			high = middle - 1;
		if (key > middle)
			low = middle + 1;
	}
}