#include<stdio.h>

int main() {
	int arr[] = { 1,1,2,2,3,3,4,4,5,5 };
	int input, output;

	printf("��ǰ�� ��ȣ�� �Է��Ͻÿ� : ");
	scanf("%d", &input);

	for (int i = 0; i < 10; i++) {
		if (i + 1 == input)
			output = arr[i];
	}
	printf("��ǰ��ȣ %d�� ��ġ�� %d�Դϴ�.", input, output);
	return 0;
}