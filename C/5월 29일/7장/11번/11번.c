#include<stdio.h>
int main()
{
	int n, mul = 1, sum = 0;
	printf("n�� ���� �Է��Ͻÿ� : ");
	scanf_s("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		mul = i * i;						//mul�� ���� i�� ����
		sum += mul;							//sum�� ���� i�� �������� ��
		mul = 1;							//mul�� ���� �ٽ� �ʱ�ȭ��������Ѵ�.
	}

	printf("��갪�� %d�Դϴ�.", sum);
	return 0;
}