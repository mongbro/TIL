#include<stdio.h>
int main()
{
	int x = 0, sum = 0;

	for (; x <= 100; x += 3)
	{
		sum += x;
	}

	printf("1���� 100 ������ ��� 3�� ����� ���� %d �Դϴ�.", sum);
	return 0;
}