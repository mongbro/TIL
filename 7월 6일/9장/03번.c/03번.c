#include<stdio.h>
#include"mong.h"
int check(int n);

int main()
{
	int pw, result, try = 0;

	while (try<=2)
	{
		printf("��й�ȣ : ");
		scanf_s("%d", &pw);
		try++;
		result = check(pw);
		if (result == 1)
			break;
	}
	if (try == 3)
		printf("�α��� �õ� Ƚ�� �ʰ�");
	if (result == 1)
		printf("�α��� ����");
	return 0;
}