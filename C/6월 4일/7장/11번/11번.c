#include<stdio.h>
int main()
{
	int d, sum = 0, result=0;
	printf("n���� �Է��Ͻÿ� : ");
	scanf_s("%d", &d);
	for (int i = 1; i <= d; i++)
	{
		sum = i * i;
		result += sum;
	}
	printf("��갪�� %d�Դϴ�.", result);
	return 0;
}