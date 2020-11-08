#include<stdio.h>

struct account {
	int number;
	char name[20];
	int balance;
};

int main() {
	struct account a = { 1, "ȫ�浿", 10000 };
	printf("{ %d, %s, %d }", a.number, a.name, a.balance);
}