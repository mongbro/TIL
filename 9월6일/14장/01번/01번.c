#include<stdio.h>

void set_proverb(char** q, int n);

int main() {
	int n;
	char* p = NULL;

	printf("몇번째 속담을 선택하시겠습니까? ");
	scanf("%d", &n);

	printf("selected proverb = ");
	set_proverb(&p, n-1);
	printf("%s", p);

	return 0;
}

void set_proverb(char** q, int n) {
	char* a[10] = {
		"1. aaaaaaaaaaaa",
		"2. aaaaaaaaaaaa",
		"3. aaaaaaaaaaaa",
		"4. aaaaaaaaaaaa",
		"5. aaaaaaaaaaaa",
		"6. aaaaaaaaaaaa",
		"7. aaaaaaaaaaaa",
		"8. aaaaaaaaaaaa",
		"9. aaaaaaaaaaaa",
		"10. aaaaaaaaaaaa",
	};
	
	*q = a[n];
}