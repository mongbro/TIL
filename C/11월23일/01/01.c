#include<stdio.h>

void set_proverb(char** pp, int num);

int main() {
	char* p;	//p는 아직 아무것도 안가르키고있음
	int num;
	printf("몇번째 속담을 선택하시겠습니까? ");
	scanf("%d", &num);
	set_proverb(&p, num);
	printf("selected proverb = %s", p);
}

void set_proverb(char** pp, int num) {
	char* proverb[10] = { "aaaa aaaaa aaaa.", "bbbb bbbbb bbbb.", "ccc ccccccc cc.", "dd ddddddd ddddd ddddd.", "eeeeee eee ee eeeeee.",
	"ffff ffffff fffff fff.", "gggggg ggggggggg ggggggg g.", "hh hhhh hhhhhhh hhhh hh.", "i iiiii iiii.", "jjjjjj jjjjj jjjj." };
	*pp = proverb[num];		//
}