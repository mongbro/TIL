#include<stdio.h>

int main() {
	int input;
	int arr[32] = { 0 };

	printf("ют╥б : ");
	scanf("%d", &input);

	printf("%d => ", input);

	for (int i = 0; i < 32 && input>0; i++) {
		arr[i] = input % 2;
		input = input / 2;
	}
	int i;
	for (i=31; i >= 0; i--) {
		if (arr[i] == 1)
			break;
	}
	for (; i >= 0; i--) {
		printf("%d", arr[i]);
	}

	return 0;
}