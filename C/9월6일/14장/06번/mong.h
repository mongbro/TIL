#pragma once
#include<stdio.h>
#include<string.h>

void sort_strings(char* s[], int size);

void sort_strings(char* s[], int size) {
	int least;
	char* temp;

	for (int i = 0; i < size; i++) {
		least = i;
		for (int j = i + 1; j < size; j++) {
			if (strcmp(s[j], s[least]) < 0)
				least = j;
		}
		temp = s[i];
		s[i] = s[least];
		s[least] = temp;
	}
}