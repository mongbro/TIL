#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int n;
	srand((unsigned)time(NULL));			//for�� �ȿ� ������ 6�� ������ �� �������� ��µȴ�.
	for (int i = 1; i <= 6; i++)
	{
		n = rand() % 45 + 1;
		printf("%d ", n);
	}
	return 0;
}