#include<stdio.h>
int main()
{
	int days[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
	for (int i = 7; i < 12;i++) {
		printf("%d���� %d���� �ֽ��ϴ�.\n", i+1, days[i]);
	}
	return 0;
}