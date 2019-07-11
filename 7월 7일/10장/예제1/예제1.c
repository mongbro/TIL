#include<stdio.h>
int main()
{
	int grade[5];
	grade[0] = 10;		//0번째 요소 = 10
	grade[1] = 20;		//1번째 요소 = 20
	grade[2] = 30;		//2번째 요소 = 30
	grade[3] = 40;		//3번째 요소 = 40
	grade[4] = 50;		//4번째 요소 = 50

	for (int i = 0; i < 5; i++)
	{
		printf("grade[%d] = %d\n", i, grade[i]);
	}
	return 0;
}