#include<stdio.h>
#include"mong.h"

int main() {
	int n;
	char* p = NULL;

	printf("몇번째 속담을 선택하시겠습니까? ");
	scanf("%d", &n);

	printf("selected proverb = ");
	set_proverb(&p, n-1);
	printf(p);

	return 0;
}