#include<stdio.h>
#include<string.h>
#include<ctype.h>

int check(char* str);

int main() {
	char str[100] = { 0 };

	printf("문자열을 입력하시오 : ");
	gets_s(str, sizeof(str));				//scanf()를 사용할거면 %[^\n]s를 입력해야하는데 귀찬으니까 생소하더라고 gets_s를 생활화 하자

	if (check(str) == 1)
		printf("회문입니다.");
	else
		printf("회문이 아닙니다.");
}

int check(char* str) {
	for (int i = 0; str[i] != NULL; i++) {			//전부 소문자로 바꾸기
		if (isupper(str[i]))
			str[i] = tolower(str[i]);
	}

	for (int i = 0; i < strlen(str); i++) {
		if (str[i] == str[strlen(str) - i-1])						//문자열 맨 앞에서부터와 맨 뒤에서부터 하나씩 늘이고 줄여가면서 비교한다.
																						//str[i]는 0부터 하나씩 증가	
																						//	str[strlen(str) - i - 1]은 끝부터 하나씩 감소(str[strlen(str) - 1]이 맨 마지막이니까 - i 를 추가한다.) *************
			continue;				//비교한 두개가 같으면 계속
		else
			return 0;				//다르면 0반환
	}
	return 1;							//끝까지 다 같았으면 1반환
}