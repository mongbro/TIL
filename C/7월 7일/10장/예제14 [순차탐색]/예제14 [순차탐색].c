#include<stdio.h>
#define SIZE 10
int main()
{
	int list[SIZE] = { 1,2,3,4,5,6,7,8,9,10 };
	int key;
	printf("Ž���� ���� �Է� : ");
	scanf_s("%d", &key);
	for (int i = 0; i < SIZE; i++)
	{
		if (key == list[i])
			printf("Ž�� ���� �ε��� : %d\n", list[i]);
	}
	printf("Ž�� ����");
}