#include<stdio.h>
int main()
{
	int age, height;
	printf("Ű�� �Է��Ͻÿ� : ");
	scanf_s("%d", &height);
	printf("���̸� �Է��Ͻÿ� : ");
	scanf_s("%d", &age);
	if (age >= 10 && height >= 140)
		printf("Ÿ�� �����ϴ�.");
	else
		printf("�˼��մϴ�.");
	return 0;
}