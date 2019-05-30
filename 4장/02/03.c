#include<stdio.h>
int main()
{
	int x = 10, y = 20, z;
	printf("x=%d  y=%d\n", x, y);
	z = x;
	x = y;
	y = z;
	printf("x=%d  y=%d", x, y);
	return 0;
}