#include<stdio.h>
#include<string.h>

int main() {
	char str[100] = { 0 };
	char c;
	int count;

	puts("���ڿ��� �Է��Ͻÿ� : ");
	scanf("%s", str);

	for (int i = 0; str[i]!=NULL; i++) {
		count = 0;
		int j;
		for (j = 'a'; j == 'z'; j++) {
			if (str[i] == j)
				count++;
		}
		printf("%c : %d", j, count);
	}
}