/*�ѷ��ڽ��� ����, Ű ����*/

#include<stdio.h>
int main()
{
	int age, hight;

	printf("Ű�� �Է��ϼ��� : ");
	scanf_s("%d", &hight);
	printf("���̸� �Է��ϼ��� : ");
	scanf_s("%d", &age);

	if (age >= 10 && hight >= 140)
		printf("Ÿ�� �����ϴ�.");
	else
		printf("�˼��մϴ�.");

	return 0;
}