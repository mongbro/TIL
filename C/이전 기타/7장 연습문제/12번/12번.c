#include<stdio.h>
int main()
{
	int a = 0, b = 1, c = 1, n1, n2 = 2;
	printf("���° �ױ��� ���ұ�� ? ");
	scanf_s("%d", &n1);

	printf("0, 1, ");

	for (; n2 <= n1; n2++)
	{
		c = a + b;
		printf("%d, ", c);
		a = b;
		b = c;
	}
	return 0;
}
