#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void binary(int n);

int main() {
    int n;;
    while (1) {
        scanf("%d", &n);
        binary(n);
        printf("\n");
    }
}

void binary(int n) {
    if (n <= 1)
        printf("%d", n);
    else {
        binary(n / 2);
        printf("%d", n % 2);
    }
}