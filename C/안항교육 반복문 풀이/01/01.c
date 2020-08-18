#include<stdio.h>

int main() {
	int input;
	printf("카운터의 초기값을 입력하시오 >> ");
	scanf("%d", &input);

	for (int i = input; i > 0; i--) {
		printf("%d ", i);
	}
	printf("\a");
}