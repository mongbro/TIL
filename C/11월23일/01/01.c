#include<stdio.h>

void set_proverb(char** pp, int num);

int main() {
	char* p;	//p�� ���� �ƹ��͵� �Ȱ���Ű������
	int num;
	printf("���° �Ӵ��� �����Ͻðڽ��ϱ�? ");
	scanf("%d", &num);
	set_proverb(&p, num);
	printf("selected proverb = %s", p);
}

void set_proverb(char** pp, int num) {
	char* proverb[10] = { "aaaa aaaaa aaaa.", "bbbb bbbbb bbbb.", "ccc ccccccc cc.", "dd ddddddd ddddd ddddd.", "eeeeee eee ee eeeeee.",
	"ffff ffffff fffff fff.", "gggggg ggggggggg ggggggg g.", "hh hhhh hhhhhhh hhhh hh.", "i iiiii iiii.", "jjjjjj jjjjj jjjj." };
	*pp = proverb[num];		//
}