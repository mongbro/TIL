#include<stdio.h>
int main()
{
	int n, sum = 0;

	for (n=1;n <= 100;n++)
	{
		if (n % 3 == 0)															//n�� 3�� ����̸� sum�� ���Ѵ�.
			sum += n;
	}
	printf("1���� 100������ ��� 3�� ����� ���� %d�Դϴ�.", sum);
	
	return 0;
}