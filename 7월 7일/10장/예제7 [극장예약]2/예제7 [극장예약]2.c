#include<stdio.h>
int main()
{
	int seat[] = { 1,2,3,4,5,6,7,8,9,10 };				//�¼���ȣ
	int res[10] = { 0 }, want1, want2;		//���డ�ɿ���
	int check;
	char yon;											//yes or no
	while (1)
	{
		check = 0;
		for (int i = 0; i < 10; i++)
		{
			if (res[i] == 0)
			{
				check++;
			}
		}
		if (check == 0)
		{
			printf("\n���� ���� ������ �¼��� �����ϴ�.\n");
			break;
		}
		else
		{
			printf("���� ���� ������ �¼��� %d�� �Դϴ�.\n", check);
		}

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
		scanf_s("%d %d", &want1, &want2);

		if (want1 > 10 || want1 < 1)
		{
			printf("1�� �մ��� �����Ͻ� �¼��� �������� �ʽ��ϴ�.\n");
			continue;
		}
		if (want2 > 10 || want2 < 1)
		{
			printf("2�� �մ��� �����Ͻ� �¼��� �������� �ʽ��ϴ�.\n");
			continue;
		}

		if (res[want1 - 1] == 1)					//�ش� �¼���ȣ(�迭�� 0���� �����ϴϱ� �ϳ� ���̰� �˻�)�� ������ ��������
		{
			printf("1�� �մ��� ���ϴ� �ڸ��� �̹� ����� �ڸ��Դϴ�. �ٸ� �¼��� �����ϼ���.\n");
			continue;
		}
		if (res[want2 - 1] == 1)					//�ش� �¼���ȣ(�迭�� 0���� �����ϴϱ� �ϳ� ���̰� �˻�)�� ������ ��������
		{
			printf("2�� �մ��� ���ϴ� �ڸ��� �̹� ����� �ڸ��Դϴ�. �ٸ� �¼��� �����ϼ���.\n");
			continue;
		}
		else
		{
			if (want2 == ' ')
			{
				printf("����Ǿ����ϴ�.\n");
				res[want1 - 1] = 1;					//�ش� �¼���ȣ ���డ�ɿ��� �ٲٱ�
			}
			else
			{
				printf("����Ǿ����ϴ�.\n");
				res[want1 - 1] = 1;					//�ش� �¼���ȣ ���డ�ɿ��� �ٲٱ�
				res[want2 - 1] = 1;
			}
		}
	}
}