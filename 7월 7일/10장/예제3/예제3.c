#include<stdio.h>
#include<stdlib.h>
int main()
{
	int grade[5];
	for (int i = 0; i < 5; i++)
	{
		grade[i] = rand() % 101;			//srand�� ������� ������ ������ ��Ұ� �޶����� ������ ������ �޶������̴�.
	}
	for (int i = 0; i < 5; i++)
	{
		printf("grade[%d] = %d\n", i, grade[i]);
	}
	return 0;
}