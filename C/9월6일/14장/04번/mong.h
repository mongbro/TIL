#pragma once
#include<stdio.h>

void pr_str_array(char** dp);

void pr_str_array(char** dp) {
	for (int i = 0; i < 5; i++) {
		printf("%s\n", dp[i]);
	}
}