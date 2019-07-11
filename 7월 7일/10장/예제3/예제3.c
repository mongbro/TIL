#include<stdio.h>
#include<stdlib.h>
int main()
{
	int grade[5];
	for (int i = 0; i < 5; i++)
	{
		grade[i] = rand() % 101;			//srand를 사용하지 않은건 어차피 요소가 달라지기 때문에 난수도 달라져서이다.
	}
	for (int i = 0; i < 5; i++)
	{
		printf("grade[%d] = %d\n", i, grade[i]);
	}
	return 0;
}