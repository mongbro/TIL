#include<stdio.h>
int main()
{
	int n, r, i, result = 1;
	
	printf("n�� ���� �Է��Ͻÿ� : ");
	scanf_s("%d", &n);
	printf("r�� ���� �Է��Ͻÿ� : ");
	scanf_s("%d", &r);

	for (i = n; i >= (n - r - 1); i--)
		result *= i;
	
	printf("������� %d�Դϴ�.", result);
	
	return 0;
}