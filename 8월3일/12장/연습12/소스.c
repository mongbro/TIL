#include<stdio.h>
#include<string.h>

int main() {
	char str[] = "Man is immortal, because he has a soul.";
	char seps[] = ",. ";
	char* token;
	char* con;
	int n = 1;

	token = strtok_s(str, seps, &con);		//str에서 seps에 해당하는 문자가 나오기 전까지만 저장한다.

	while (token != NULL) {
		printf("토큰%d : %s\n", n, token);
		token = strtok_s(NULL, seps, &con);		//	strtok에서 seps에 해당하는 문자를 만나면 그 문자를 NULL로 바꿔서 인식한다.
																				//NULL 즉 이전 seps에서 다음 seps에 해당하는 문자가 나오기 전까지 저장한다.
		n++;
	}
}