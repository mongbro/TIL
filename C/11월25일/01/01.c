#include<stdio.h>

int main() {
	char buffer[100];
	FILE* fp = fopen("test.txt", "r");

	if (fp != NULL) {
		while(fgets(buffer, 100, fp) != NULL)
			printf("%s\n", buffer);
	}
	else {
		printf("파일 열기 실패\n");
		exit(1);
	}
	return 0;
}