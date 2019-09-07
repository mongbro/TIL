#include<stdio.h>

void set_proverb(char** q, int n);

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

void set_proverb(char** q, int n) {
	char* a[10] = {
		"01. aaaaaaaaaaa",
		"02. aaaaaaaaaaa",
		"03. aaaaaaaaaaa",
		"04. aaaaaaaaaaa",
		"05. aaaaaaaaaaa",
		"06. aaaaaaaaaaa",
		"07. aaaaaaaaaaa",
		"08. aaaaaaaaaaa",
		"09. aaaaaaaaaaa",
		"10. aaaaaaaaaaa",
	};

	*q = a[n];
}