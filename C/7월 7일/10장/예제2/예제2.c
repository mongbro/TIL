#include<stdio.h>
int main()
{
	int grade[5];

	for (int i = 0; i < 5; i++)
	{
		grade[i] = (i + 1) * 10;		//각 요소는 10부터 차례로 10씩 증가
	}
	for (int i = 0; i < 5; i++)
	{
		printf("grade[%d] = %d\n", i, grade[i]);
	}
	return 0;
}