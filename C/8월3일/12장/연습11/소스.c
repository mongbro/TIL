#include<stdio.h>
#include<string.h>
int main() {
	char str[] = "I am a hero!!";
	char search[] = "hero";
	int loc;
	char* p;

	p = strstr(str, search);		//strstr탐색결과 아무것도 없으면 NULL값이 p에 저장된다.
	loc = (int)(p - str + 1);
	if (p != NULL)
		printf("%s는 %d번째에 있습니다.\n", search, loc);
	else
		printf("%s는 없습니다.\n", search);
	return 0;
}