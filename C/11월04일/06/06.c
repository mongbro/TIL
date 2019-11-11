#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main() {
	char str[100] = { 0 };
	printf("¹®ÀÚ¿­ : ");
	scanf("%s", str);

	for (int i = 0; i < strlen(str); i++) {
		if (islower(*(str + i)))
			printf("%c", toupper(*(str + i)));
		else
			printf("%c", *(str + i));
	}
	return 0;
}