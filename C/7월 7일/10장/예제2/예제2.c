#include<stdio.h>
int main()
{
	int grade[5];

	for (int i = 0; i < 5; i++)
	{
		grade[i] = (i + 1) * 10;		//�� ��Ҵ� 10���� ���ʷ� 10�� ����
	}
	for (int i = 0; i < 5; i++)
	{
		printf("grade[%d] = %d\n", i, grade[i]);
	}
	return 0;
}