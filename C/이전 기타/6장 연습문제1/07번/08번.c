#include<stdio.h>
int main()
{
	int age, time;
	printf("����ð��� ���̸� �Է��ϼ��� : ");
	scanf_s("%d%d", &time, &age);

	if (time > 24)
		printf("�Ϸ�� 24�ð��Դϴ�.");
	else if (time >= 17)
		printf("����� 10,000�� �Դϴ�.");
	else if (age < 3)
		printf("3�� �̸� �Ƶ��� ���̰��� ����");
	else if (age >= 65 || age <= 12)
		printf("����� 25,000�� �Դϴ�.");
	else
		printf("����� 34,000�� �Դϴ�.");
	return 0;
}