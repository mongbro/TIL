#include<stdio.h>
#include<string.h>

int main() {
	char op[5] = { 0 };
	int x, y, result=0;

	printf("������ �Է��Ͻÿ� : ");
	scanf("%s %d %d", op, &x, &y);

	if (strcmp(op, "add") == 0)
		result = x + y;
	if (strcmp(op, "sub") == 0)
		result = x - y;
	if (strcmp(op, "mul") == 0)
		result = x * y;
	if (strcmp(op, "div") == 0)
		result = x / y;
	printf("������ ��� : %d", result);
}