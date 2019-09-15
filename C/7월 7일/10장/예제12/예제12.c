#include<stdio.h>
#define SIZE 7
void square(const int a[], int size);
void print(int a[], int size);

int main()
{
	int list[SIZE] = { 1,2,3,4,5,6,7 };
	print(list, SIZE);
	printf("\n");
	square(list, SIZE);
	print(list, SIZE);
	return 0;
}

void square(int a[], int size)
{
	for (int i = 0; i < size; i++)
	{
		a[i] *= a[i];
	}
}
void print(int a[], int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%d\t", a[i]);
	}
}