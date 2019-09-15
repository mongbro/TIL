#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int n;
	srand((unsigned)time(NULL));			//for문 안에 넣으면 6개 난수가 다 같은수로 출력된다.
	for (int i = 1; i <= 6; i++)
	{
		n = rand() % 45 + 1;
		printf("%d ", n);
	}
	return 0;
}