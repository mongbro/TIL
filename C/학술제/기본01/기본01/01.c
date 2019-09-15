#include<stdio.h>
#include"charac4.h"
#include"damage.h"

int main() {
	int num;						//파티 인원
	printf("파티의 인원을 선택하세요(3 or 4) : ");
	scanf("%d", &num);

	if (num == 3) {
		initial_party();
	}
	else if (num == 4) {
		initial_party();
	}
}