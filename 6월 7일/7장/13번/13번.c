#include<stdio.h>
int main()
{
	int n, r, mul=1;
	printf("n�� ���� �Է��Ͻÿ� : ");
	scanf_s("%d", &n);
	printf("r�� ���� �Է��Ͻÿ� : ");
	scanf_s("%d", &r);
	for (int i = n; i >= n - r - 1; i--)
		mul *= i;
	printf("������ ���� %d�Դϴ�.", mul);
	return 0;
}