#include<stdio.h>
#include<string.h>

int main() {
	char str[] = "Man is immortal, because he has a soul.";
	char seps[] = ",. ";
	char* token;
	char* con;
	int n = 1;

	token = strtok_s(str, seps, &con);		//str���� seps�� �ش��ϴ� ���ڰ� ������ �������� �����Ѵ�.

	while (token != NULL) {
		printf("��ū%d : %s\n", n, token);
		token = strtok_s(NULL, seps, &con);		//	strtok���� seps�� �ش��ϴ� ���ڸ� ������ �� ���ڸ� NULL�� �ٲ㼭 �ν��Ѵ�.
																				//NULL �� ���� seps���� ���� seps�� �ش��ϴ� ���ڰ� ������ ������ �����Ѵ�.
		n++;
	}
}