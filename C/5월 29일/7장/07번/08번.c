#include<stdio.h>
int main()
{
	int n;

	printf("������ ����(���� : -1) : ");				//�̰Ÿ� ���� ���� ������ do~while������ ���� ó�� �����ϴ� ���� �����̰� �����ٺ��� ��µǱ⶧��
	scanf_s("%d", &n);
	for (int j = 1; j <= n; j++)
		printf("*");

	while (n != -1)										//n�� -1�϶� ���α׷� ����
	{
		printf("\n������ ����(���� : -1) : ");
		scanf_s("%d", &n);
		for (int j = 1; j <= n; j++)					//n�� Ƚ����ŭ *�� ���
			printf("*");
	}
	return 0;
}