#include<stdio.h>

int main() {
	int a, b;
	a = b = 1;
	if (a = 2)
		b = a + 1;
	else if (a == 1)
		b = b + 1;
	else
		b = 10;
	printf("%d %d", a, b);
}