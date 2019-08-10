#include<stdio.h>
#include<string.h>
int main() {
	char filename[100];
	char num[100];
	for (int i = 1; i <= 100; i++) {
		strcpy(filename, "image");
		sprintf(num, "%03d", i);
		strcat(filename, num);
		strcat(filename, ".jpg");
		printf("%s\n", filename);
	}
	return 0;
}