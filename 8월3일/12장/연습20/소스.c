#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main() {
	char dic[100][2][50] = {
		{ "book", "å" },
		{ "apple","���" },
		{ "school","�б�" },
		{ "computer","��ǻ��" },
		{ "boy","�ҳ�" },
		{ "lanuguage","���" },
		{ "rain","��" } };
	
	char word[50];
	printf("�����ܾ �Է��Ͻÿ� : ");
	scanf("%s", word);

	for (int i = 0; i < 100; i++) {
		if (strcmp(dic[i][0], word) == 0) {
			printf("%s : %s", word, dic[i][1]);
			return 0;
		}
	}
	printf("�������� �߰ߵ��� �ʾҽ��ϴ�.");
}