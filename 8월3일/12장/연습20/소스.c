#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main() {
	char dic[100][2][50] = {
		{ "book", "책" },
		{ "apple","사과" },
		{ "school","학교" },
		{ "computer","컴퓨터" },
		{ "boy","소년" },
		{ "lanuguage","언어" },
		{ "rain","비" } };
	
	char word[50];
	printf("영문단어를 입력하시오 : ");
	scanf("%s", word);

	for (int i = 0; i < 100; i++) {
		if (strcmp(dic[i][0], word) == 0) {
			printf("%s : %s", word, dic[i][1]);
			return 0;
		}
	}
	printf("사전에서 발견되지 않았습니다.");
}