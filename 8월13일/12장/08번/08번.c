#include<stdio.h>
#include<string.h>

int main() {
	char str[100] = { 0 };
	char* token;
	char deli[10] = " .,\n";
	int count = 0;

	printf("문자열을 입력하시오 : ");
 	scanf("%[^\n]s", str);

	token = strtok(str, deli);

 	for (int i = 0; token!= NULL; i++) {				//*************for문 중간식은 str[i] != NULL 이 아니라 token != NULL 이 들어가야한다.*************//
		count++;
		token = strtok(NULL, deli);
	}

	printf("단어의 수는 %d입니다.", count);
	return 0;
}