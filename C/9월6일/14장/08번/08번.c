#include<stdio.h>
#include"mong.h"

int main() {
	int src[3][3] = { 100,30,67,89,50,12,19,60,90 };
	int dst[3][3] = { 0 };

	printf("<���� 2���� �迭>\n");
	print_array(src);
	array_copy(src, dst);
	printf("<���纻 2���� �迭>\n");
	print_array(dst);

	return 0;
}