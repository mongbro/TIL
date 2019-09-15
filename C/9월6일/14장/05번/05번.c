#include<stdio.h>
#include"mong.h"

int main() {
	int m[6] = { 5,6,1,3,7,9 };
	int* pmax;

	set_max_ptr(m, 6, &pmax);
	return 0;
}