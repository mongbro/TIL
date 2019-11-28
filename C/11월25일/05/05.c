#include<stdio.h>

int main() {
	char* s[3], buffer[100];
	FILE* test;
	test = fopen("test.bin", "wb");
	s[0] = "I love you!";
	s[1] = "Sorry.";
	s[2] = "Fuck!";

	if (test == NULL) {
		fprintf(stderr, "파일 열기 실패", test);
		exit(1);
	}
	for (int i = 0; i < 3; i++) {
		fprintf(test, "%s\n", s[i]);
	}
	fclose(test);
	test = fopen("test.dat", "rb");

	if (test == NULL) {
		fprintf(stderr, "파일 열기 실패", test);
		exit(1);
	}
	while (fgets(buffer, 100, test) != NULL) {
		printf("%s", buffer);
	}

	fclose(test);
	return 0;
}