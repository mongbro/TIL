#include<stdio.h>
#include"mong.h"

int main() {
	int n;
	char* p = NULL;

	printf("���° �Ӵ��� �����Ͻðڽ��ϱ�? ");
	scanf("%d", &n);

	printf("selected proverb = ");
	set_proverb(&p, n-1);
	printf(p);

	return 0;
}