#include<stdio.h>
#include<string.h>

int main() {
	char str[100] = { 0 };				//입력받는 문자열
	char alpha[100] = { 0 };			//알파벳 하나하나
	int count[100] = { 0 };			//빈도

	printf("문자열을 입력하시오 : ");
	scanf("%[^\n]s", str);
	
	alpha[0] = 'a';

	for (int i = 1; i<=25 ;i++) {
		alpha[i] = alpha[i - 1] + 1;			//alpha[0] = a, [1] = b, [3] = c ... [25] = z
	}
	
	for (int i = 0; str[i] != NULL; i++) {
		for (int j = 0; alpha[j] != NULL; j++) {
			if (str[i] == alpha[j])			//str중에서 alpha에 겹치는 인덱스를 찾아서
				count[j]++;						//해당 인덱스의 빈도수를 증가
		}
	}

	for (int i = 0; alpha[i] != NULL; i++) {
		printf("%c : %d\n", alpha[i], count[i]);
	}
}