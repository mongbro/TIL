#include<stdio.h>
int main()
{
	int p=1, pp=0, n, d=0;					//p = �� ���� ��, pp = ���� ���� ��, d = ���ϴ� ���� ��
	printf("���° �ױ��� ���ұ��?");
	scanf_s("%d", &n);
	printf("0, 1, ");						//0��°�� = 0, 1��°�� = 1
	for (int i = 2; i <= n; i++)			//i = ���° ���ΰ�
	{
		d = p + pp;
		pp = p;
		p = d;
		printf("%d, ", d);
	}
	return 0;
}