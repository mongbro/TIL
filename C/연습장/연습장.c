#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<Windows.h>

int main() {
	int a;
	scanf("%d", &a);
	for (int i = a; i >= 0; i--) {
		printf("%d\t", i);
		Sleep(1000);
	}
}