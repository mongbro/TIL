#include<stdio.h>
int main()
{
	double r, result = 1;
	int n;
	printf("�Ǽ��� �Է��Ͻÿ� : ");
	scanf_s("%lf", &r);
	printf("�ŵ������� Ƚ���� �Է��Ͻÿ� : ");
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++)				//i�� 1���� n�� �ɶ������� Ƚ����ŭ r�� �ݺ��ؼ� ���Ѵ�.
	{
		result *= r;
	}
	printf("������� %lf�Դϴ�.", result);
	return 0;
}