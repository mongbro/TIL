#include<stdio.h>
#define SIZE 10
int main()
{
	int list[SIZE] = { 1,2,3,4,5,6,7,8,9,10 };
	int key;
	printf("탐색할 값을 입력 : ");
	scanf_s("%d", &key);
	for (int i = 0; i < SIZE; i++)
	{
		if (key == list[i])
			printf("탐색 성공 인덱스 : %d\n", list[i]);
	}
	printf("탐색 종료");
}