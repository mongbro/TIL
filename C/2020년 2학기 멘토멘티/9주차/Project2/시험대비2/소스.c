#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void remove_string(char* s, int start, int n);

int main()
{
    char str[100];

    printf("input : ");
    scanf("%[^\n]s", str);

    remove_string(str, 0, 4);

    printf("%s\n", str);

    return 0;
}

void remove_string(char* s, int start, int n)
{
    int i, k = 0;
    char tmp[100];

    for (i = 0; i < strlen(s); i++)
        if (i < start || i >= (start + n))
            tmp[k++] = *(s + i);

    tmp[k] = '\0';
    strcpy(s, tmp);
}