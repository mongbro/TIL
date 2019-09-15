#include<stdio.h>
#include<string.h>
int main() {
	char str[] = "language";
	char* p;
	int loc;

	p = strchr(str, 'g');		//strchr탐색결과 아무것도 없으면 NULL값이 p에 저장된다.
	loc = (p - str + 1);		//str은 배열의 첫번째 주소를 가져오고 p는 찾는 글자의 주소를 가져온다
								//4 - 1 = 3 이되니까 4번째에 있다고 하고싶으면 " n - m + 1 " 로 써야한다

	if (p != NULL) {			
		printf("첫번째 %c가 %d에서 발견됨\n", 'g', loc);
	}
	else
		printf("%c가 별견되지 않았음\n", 'g');
	return 0;
}