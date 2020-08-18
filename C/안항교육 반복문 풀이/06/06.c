#include<stdio.h>

int main() {
	int a, b, result;
	char op;

	do {
		printf("============\n");
		printf("A --- Add\n");
		printf("S --- Subtract\n");
		printf("M --- Multiply\n");
		printf("D --- Divide\n");
		printf("Q --- Quit\n");
		printf("============\n");
		printf("연산을 선택하세요 >> ");
		scanf("\n%c", &op);
		if (op != 'A' && op != 'S' && op != 'M' && op != 'D' && op != 'Q' && op != 'a' && op != 's' && op != 'm' && op != 'd' && op != 'q')
			continue;
		if (op == 'Q' || op == 'q')
			break;
		printf("두 수를 공백으로 분리하여 입력하시오 >> ");
		scanf("\n%d %d", &a, &b);
		switch (op) {
		case 'A':
		case 'a':
			result = a + b;
			break;
		case 'S':
		case 's':
			result = a - b;
			break;
		case 'M':
		case 'm':
			result = a * b;
			break;
		case 'D':
		case 'd':
			result = a / b;
			break;
		}
		printf("%d\n", result);
	} while (1);
	return 0;
}