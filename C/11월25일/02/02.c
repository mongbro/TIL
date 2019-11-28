#include<stdio.h>

int main() {
	char buffer1[100], buffer2[100];
	FILE* fp1 = NULL, * fp2 = NULL;
	
	fp1 = fopen("test.txt", "r");
	fp2 = fopen("copy.txt", "w");

	if (fp1 == NULL) {
		printf("����1 ���� ����");
		exit(1);
	}
	if (fp2 == NULL) {
		printf("����2 ���� ����");
		exit(1);
	}
	else
		while (fgets(buffer1, 100, fp1) != NULL) {
			printf("����1 : %s\n", buffer1);
			fputs(buffer1, fp2);
		}

	fclose(fp1);
	fclose(fp2);

	fp2 = fopen("copy.txt", "r");

	if (fp2 == NULL) {
		printf("����2 ���� ����");
		exit(1);
	}
	else
		while (fgets(buffer2, 100, fp2) != NULL)
			printf("����2 : %s\n", buffer2);

	fclose(fp2);
}