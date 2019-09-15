#include<stdio.h>

typedef struct point {
	int x;
	int y;
}POINT;			/*새로 정의한 타입의 이름은 POINT, 멤버 수는 x, y 두가지*/

POINT translate(POINT p, POINT delta);				/*반환값은 point의 멤버 x, y 두가지*/

/*    int sum(int a, int b);    <-    이거랑 비슷함!! int라는 타입대신 새로 만든 
														POINT라는 타입을 사용해서 2가지의 반환값을 가진다.				*/
int main() {
	POINT p = { 2,3 };
	POINT delta = { 10,10 };
	POINT result;

	result = translate(p, delta);
	printf("새로운 점의 좌표는 (%d, %d)입니다.\n", result.x, result.y);
	
	return 0;
}

POINT translate(POINT p, POINT delta) {
	POINT new_p;

	new_p.x = p.x + delta.x;
	new_p.y = p.y + delta.y;

	return new_p;
}