#include<stdio.h>
#include<string.h>

int main() {
	char str[200] = { 0 };
	int count = 0;
	printf("�ؽ�Ʈ�� �Է��Ͻÿ� : ");
	gets_s(str, sizeof(str));
	strcat(str, " ");

	printf("\n\n===================================================\n");

	while (count <= 10) {
		printf("%s", str+count);
		if (strlen(str + count) < strlen(str)) {
			for (int i = 0; i < count; i++) {
				printf("%c", str[i]);
			}
		}
		printf("\n");
		count++;
	}
}