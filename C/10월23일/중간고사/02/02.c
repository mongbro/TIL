#include<stdio.h>

void f();
int x = 1;
int main() {
	int x = 2;
	printf("%d\n", x);
	{
		int x = 3;
		printf("%d\n", x);
	}
	printf("%d\n", x);
	return 0;
}