#include<stdio.h>
#include<string.h>
#include<ctype.h>

void cipher(char* input, char* output);				//암호화 함수
void decipher(char* input, char* output);			//복호화 함수
void menu();		//메뉴

int n;			//암호화 or 복호화 선택하는 변수

int main() {
	char input[100];
	char output[100] = { 0 };

	menu();
	printf("문자열을 입력하시오 : ");
	scanf("\n%[^\n]s", input);
	
	if (n == 1)
		cipher(input, output);
	else
		decipher(input, output);
	return 0;
}

void cipher(char* input, char* output) {
	for (int i = 0; input[i] != NULL; i++) {				//문자열이 끝날때까지 반복
		if (input[i] >= 'A' && input[i] <= 'z') {			//해당 문자가 A부터 z사이에 있을때
			if (input[i] == 'x')			//소문자xyz의 아스키코드 + 3은 알파벳이 아니므로 각각 대문자의 첫번째, 두번째, 세번째로 바꾼다.
				output[i] = 'A';
			if (input[i] == 'y')
				output[i] = 'B';
			if (input[i] == 'z')
				output[i] = 'C';
			output[i] = input[i] + 3;			//A부터 w가지의 알파벳들은 해당 알파벳의 아스키코드 + 3으로 바꾼다.
		}
		else
			output[i] = input[i];			//알파벳이 아닌 문자는 원본 그대로 가지고간다.
	}
	printf("암호화된 문자열 : %s", output);
}

void decipher(char* input, char* output) {
	for (int i = 0; input[i] != NULL; i++) {
		if (input[i] >= 'A'+3 && input[i] <= 'z'+3) {
			if (input[i] == 'A')			//대문자ABC는 암호화될때 소문자 xyz였으므로 각각 x,y,z로 바군다.
				output[i] = 'x';
			if (input[i] == 'B')
				output[i] = 'y';
			if (input[i] == 'C')
				output[i] = 'z';
			output[i] = input[i] - 3;			//알파벳이 아닌 문자는 원복 그대로 가지고간다.
		}
		else
			output[i] = input[i];
	}
	printf("복호화된 문자열 : %s", output);
}

void menu() {
	while (1) {
		printf("1. 암호화        2. 복호화       ");
		scanf("%d", &n);
		if (n == 1 || n == 2)					//선택한게 1이나 2가 아니면 무한반복한다.
			break;
		else
			printf("\n잘못된 번호입니다.\n\n\n");
	}
}