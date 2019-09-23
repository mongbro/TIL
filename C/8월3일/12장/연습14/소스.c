#include<stdio.h>
#include<string.h>
int main() {
	char filename[100];		//파일의 이름
	char s[100];						//파일 이름에 붙일 숫자
	
	for (int i = 0; i < 6; i++) {
		strcpy(filename, "image");		//파일이름에 "image"라는 문자열을 넣는다.
		sprintf_s(s, sizeof(s), "%d", i);		//문자열 s에 i에 해당하는 숫자를 넣는다.(2자리 이상이되어도 '10'으로 치지 않고 '1', '0'으로 한다.)
		strcat_s(filename, sizeof(filename), s);		//"image" + "숫자" = filename("image숫자")
		strcat_s(filename, sizeof(filename), ".jpg");		//"image숫자" + ".jpg" = filename("image숫자.jpg")
		printf("%s\n", filename);
	}
}