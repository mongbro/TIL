/*�¾翡�� ������ ���� �����ϴ� �ð� ���ϱ�*/
#include<stdio.h>
void main()
{
	double LS = 300000, D = 149600000, time, s;
	int m;
	printf("���� �ӵ��� %lfkm/s�̰� �¾�� ������ �Ÿ��� %lfkm�Դϴ�.\n", LS, D);
	time = (D / LS) / 60;
	m = time;
	s = (time - m) * 60;
	printf("�¾翡�� ������ ���� �����ϴµ� �ɸ��� �ð��� %d�� %.3lf�� �Դϴ�.", m, s);
	return 0;
}
