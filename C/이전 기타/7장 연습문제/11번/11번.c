#include<stdio.h>
int main()
{
	int n, mul=1, result = 0;
	
	printf("������ ���ұ��? ");
	scanf_s("%d", &n);
	
	for (int i = 1; i <= n; i++)
	{
		mul = i * i;
		result += mul;
		mul = 1;
	}
	printf("%d", result);
	return 0;
}