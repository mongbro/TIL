#include<stdio.h>
int main()
{
	int n, r, i, result = 1;
	printf("n�ǰ� : ");
	scanf_s("%d", &n);
	printf("r�ǰ� : ");
	scanf_s("%d", &r);
	for (i = n; i >= n - r - 1; i--)			// *����*  i�� n���� �����ؼ� �� ������ n���� ������ �ɸ� ���ǽİ���� �ٲ�⶧���̴�.
	{
		result *= i;
	}
	printf("������ ���� %d�Դϴ�.", result);
	return 0;
}