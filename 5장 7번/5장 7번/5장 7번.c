/*x와 y값을 입력받아 x << y의 값을 출력하는 프로그램*/
#include<stdio.h>
void main()
{
	int x, y, x_to_y;
	printf("정수를 입력하시오 : ");
	scanf("%d", &x);
	printf("2를 곱하고 싶은 횟수 : ");
	scanf("%d", &y);

	x_to_y = x << y;

	printf("%d<%d의 값 : %d", x, y, x_to_y);
	return 0;
}