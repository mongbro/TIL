#pragma once
#include<stdio.h>

void square(int a[], int size);
void print(int a[], int size);

void square(int a[], int size)
{
	for (int i = 0; i < size; i++)
	{
		a[i] *= a[i];
	}
}
void print(int a[], int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%d\t", a[i]);
	}
}