#include<stdio.h>
int main()
{
	int seat[] = { 1,2,3,4,5,6,7,8,9,10 };		//�¼���ȣ
	int res[10] = { 0 }, want;					//���డ�ɿ���
	char yon;									//yes or no
	while (1)
	{
		printf("�¼��� �����Ͻðڽ��ϱ�?(y �Ǵ� n)");
		scanf_s("\n%c", &yon, 1);
		if (yon == 'n')
			break;								//no�϶� while������ ������.

		printf("----------------------\n");
		for (int i = 0; i < 10; i++)
		{
			printf("%d ", seat[i]);				//�¼���ȣ ����
		}
		printf("\n----------------------\n");
		for (int i = 0; i < 10; i++)
		{
			printf("%d ", res[i]);				//�¼����� ����� �¼� ����
		}

		printf("\n���° �¼��� �����Ͻðڽ��ϱ�? ");
		scanf_s("%d", &want);
		if (want > 10 || want < 1) 
		{
			printf("�ش� �¼��� �������� �ʽ��ϴ�.\n");
			continue;
		}

		if (res[want-1] == 1)					//�ش� �¼���ȣ(�迭�� 0���� �����ϴϱ� �ϳ� ���̰� �˻�)�� ������ ��������
			printf("�̹� ����� �ڸ��Դϴ�. �ٸ� �¼��� �����ϼ���.\n");
		else
		{
			printf("����Ǿ����ϴ�.\n");
			res[want-1] = 1;					//�ش� �¼���ȣ ���డ�ɿ��� �ٲٱ�
		}
	}
}