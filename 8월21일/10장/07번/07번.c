#include<stdio.h>
#include<math.h>

int main() {
	int arr[10][3];
	int input, find;

	for (int i = 0; i < 10; i++) {
		arr[i][0] = i + 1;
		for (int j = 1; j < 3; j++) {
			arr[i][j] = arr[i][j-1];
			arr[i][j] *= arr[i][0];
		}
		printf("%d %d %d\n", arr[i][0], arr[i][1], arr[i][2]);
	}

	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &input);

	for (int i = 0; i < 10; i++) {
		if (arr[i][2] == input)
			find = i+1;
	}
	printf("%d�� ���������� %d", input, find);
}