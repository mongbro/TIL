#include<stdio.h>
int main()
{
	int i;
	
	printf("������ �Է��Ͻÿ� : ");
	scanf_s("%d", &i);

	for (int n = 1; n <= i; n++)			//i�� ����鸸 �̾Ƽ� ���
	{
		if (i%n == 0)
			printf("%d ", n);
	}
	return 0;
}