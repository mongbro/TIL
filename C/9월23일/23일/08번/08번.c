#include<stdio.h>

int abc(int a);

int main() {
	int n = 1;
	printf("%d", abc(n));
	return 0;
}

int abc(int a) {
	if (a == 1) {
		printf("1");
		return 1;
	}
	else {
		printf("0");
		return 0;
	}
}