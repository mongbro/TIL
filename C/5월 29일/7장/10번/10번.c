#include<stdio.h>
int main()
{
	double r, result = 1;						//r�� ����ڰ� �Է��ϴ� �Ǽ�, result�� ������ �����
	int n, m = 1;								//n�� ����ڰ� �Է��ϴ� Ƚ��, m�� result�� r�� ��� ���Ұ����� ���ϴ� ����

	printf("�Ǽ��� ���� �Է��Ͻÿ� : ");
	scanf_s("%lf", &r);
	printf("�ŵ������� Ƚ���� �Է��Ͻÿ� : ");
	scanf_s("%d", &n);

	for (; m <= n; m++)							//m�� 1�϶����� n�� �ɶ����� result�� r�� ���Ѵ�.
	{
		result *= r;
	}

	printf("������� %lf", result);
	return 0;
}