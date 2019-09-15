#include<stdio.h>
#include"mong.h"

int main() {
	char* s[100] = {
		"mycopy",
		"src",
		"dst"
	};

	sort_strings(s, 3);

	for (int i = 0; i < 3; i++) {
		printf("%s\n", s[i]);
	}

	return 0;
}