#include<stdio.h>
int main()
{
	int age, height;
	printf("Ű�� �Է��ϼ��� : ");
	scanf_s("%d", &height);
	printf("���̸� �Է��Ͻÿ� : ");
	scanf_s("%d", &age);
	if (age >= 10 && height >= 140)
		printf("Ÿ�ŵ� �����ϴ�.");
	else
		printf("�˼��մϴ�.");
	return 0;
}