#include<stdio.h>
int main()
{
	int age, time;
	printf("����ð��� ���̸� �Է��Ͻÿ� : ");
	scanf_s("%d%d", &time, &age);

	if (time > 25)
		printf("�Ϸ�� 24�ð�");
	else if (age < 3)
		printf("3���̸� �Ƶ��� �̿����");
	else if (time > 17)
		printf("����� 10,000 �� �Դϴ�.");
	else if (age < 12 || age>65)
		printf("����� 25,000 ���Դϴ�.");
	else
		printf("����� 34,000�� �Դϴ�.");
	return 0;
}