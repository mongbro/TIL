#include<stdio.h>

int main()
{
	int x, y;				//x = reinforcement_standerd, y = reinforcement_breath
	int a, b;				//a = money_standerd, b = money_breath
	double  expected_standerd, expected_breath;

	printf("��ȭ Ȯ���� �Է��Ͻÿ�(�⺻, �����߰�) : ");
	scanf_s("%d%d", &x, &y);

	printf("��ȭ ����� �Է��Ͻÿ�(�⺻, �����߰�) : ");
	scanf_s("%d%d", &a, &b);
	expected_standerd = y / 0.01 / x;
	expected_breath = (y + b) / 0.01 / (x + a);
	printf("�⺻ ��ȭ ��� : %lf\n", expected_standerd);
	printf("���� ��ȭ ��� : %lf\n", expected_breath);

	if (expected_breath < expected_standerd)
		printf("���� �߰��Ѱ� �̵�");
	else if (expected_breath == expected_standerd)
		printf("���� ȿ��");
	else
		printf("�߰� ���Ѱ� �̵�");

}