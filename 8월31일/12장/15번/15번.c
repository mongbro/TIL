#include<stdio.h>
#include<string.h>

int operation(char* op, int x, int y);

int main() {
	char op[5] = { 0 };
	int x, y;

	printf("������ �Է��Ͻÿ� : ");
	scanf("%s %d %d", op, &x, &y);

	printf("������ ��� : %d", operation(op, x, y));

	return 0;
}

int operation(char* op, int x, int y) {
	for (int i = 0; i < strlen(op); i++) {
		if (strcmp(op, "sum") == 0)
			return x + y;
		if (strcmp(op, "sub") == 0)
			return x - y;
		if (strcmp(op, "mul") == 0)
			return x * y;
		if (strcmp(op, "div") == 0)
			return x / y;
	}
}