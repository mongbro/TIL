#include<stdio.h>
int main()
{
	int n;
	do
	{
		printf("������ ���̸� �Է��Ͻÿ�(���� : -1) : ");
		scanf_s("%d", &n);
		for (int i = 1; i <= n; i++)								//i�� n�̶� ���� ���� �ɶ������� ������ŭ *�� ��´�.
			printf("*");
		printf("\n");
	} while (n != -1);												//�������� : n�� -1�϶�
	return 0;														//while���� ���ѷ����� ����� ������ ���ǽĿ� break���� �־ Ż���ϴ� ����� �ִ�.
}