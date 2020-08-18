#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int even(int n);
int absolute(int n);
int sign(int n);

int main() {
	int d;

	printf("입력 : ");
	scanf("%d", &d);
	
	if(even(d) == 0)
		printf("even()의 결과 : 홀수\n");
	else if(even(d) == 1)
		printf("even()의 결과 : 짝수\n");
	printf("absolute()의 결과 : %d\n", absolute(d));
	if(sign(d) == 0)
		printf("sign()의 결과 : 양수");
	else if (sign(d) == -1)
		printf("sign()의 결과 : 음수");
}

int even(int n) {
	if (n % 2 == 0)
		return 1;
	else
		return 0;
}

int absolute(int n) {
	if (n >= 0)
		return n;
	else
		return -n;
}

int sign(int n) {
	if (n >= 0)
		return 0;
	else
		return -1;
}