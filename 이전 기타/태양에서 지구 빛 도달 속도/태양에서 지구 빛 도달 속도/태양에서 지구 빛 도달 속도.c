#include<stdio.h>
int main()
{
	double LS = 300000, D = 149600000, s;										//LS = ���� �ӵ�, D = �¾�� ������ �Ÿ�, s = �¾翡�� ������ ���� �����ϴµ� �ɸ��� �ӵ�(��)
	int m;
	printf("���� �ӵ��� %lfkm/s\n", LS);
	printf("�¾�� �������� �Ÿ� %lfkm\n", D);
	s = D / LS;
	m = s / 60;
	s = s - m * 60;
	printf("���� �ð��� %d�� %lf�� �Դϴ�.", m, s);
	return 0;
}