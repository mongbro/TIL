/*nPr = n * (n-1) * (n-2) * ~ * (n-r-1) �̴�*/
#include<stdio.h>
int main()
{
	int n, r, result = 1;
	printf("n�� �� : ");
	scanf_s("%d", &n);
	printf("r�� �� : ");
	scanf_s("%d", &r);

	for (int m=n; m >= (n - r - 1); m--)	//m�� �� ������ ���ǹ��� (n >= (n - r - 1)) �̶�� ���� ������ �Ѵ� 1�� �۾����� 
	{										//���ѹݺ��� �Ǳ� �����̴�. �׷��� n�� �ʱ� ���ڰ� ���� m���� ���Ѵ�.
		result *= m;
	}
	printf("%d", result);
	return 0;
}