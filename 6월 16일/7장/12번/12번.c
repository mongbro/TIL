#include<stdio.h>
int main()
{
	int pp = 0, p = 1, d, n;				//pp = 0��°��, p = 1��°��, d = d��°��, n = �Է°�
	printf("���° �ױ��� ���ұ��? ");
	scanf_s("%d", &n);
	printf("%d, %d, ", pp, p);
	for (int i = 2; i <= n; i++)			//0��°, 1��° ���� �̹� �־��������Ƿ� 2��°�׺��� ���ϸ� �ȴ�.
	{
		d = pp + p;
		pp = p;
		p = d;
		printf("%d, ", d);
	}
	return 0;
}