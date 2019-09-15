#include<stdio.h>
int main()
{
	int n, m;
	do 
	{
		printf("입력값을 넣어주세요(종료 : -1) : ");
		scanf_s("%d", &n);
		
		for (int i = 0; i < n; i++)
		{
			for (int j = n; j > i; j--)
				printf(" ");
			for (int k = 0; k < i * 2 + 1; k++)
			{
				m = k - ((i * 2 + 1) / 2);
				if (m >= 0)
					printf("%d", m+1);
				else
					printf("%d", -m +1);

			}
			printf("\n");
		}
	} while (n != -1);
	return 0;
}