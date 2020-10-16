#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand((unsigned)time(NULL));

    char a[16][16];

    for (int i = 0; i < 16; i++)
    {
        for (int j = 0; j < 16; j++)
        {
            a[i][j] = '.';
        }
    }

    a[rand() % 8 + 8][rand() % 16] = 'M';
    a[rand() % 8 + 8][rand() % 16] = 'M';

    a[15][15] = 'G';

    int i, j;
    int* pi = NULL;
    int* pj = NULL;

    i = rand() % 8;
    j = rand() % 15;

    pi = &i;
    pj = &j;

    a[*pi][*pj] = '#';

    for (int i = 0; i < 16; i++)
    {
        for (int j = 0; j < 16; j++)
        {
            printf("%c", a[i][j]);
        }
        printf("\n");
    }

    while ((a[*pi][*pj] != 'G') && (a[*pi][*pj] != 'M')) 
    {
        char input; 
        printf("방향 입력 : ");
        scanf(" %c", &input);

        switch (input)
        {
        case 'w':
            if (a[*pi - 1][*pj] == 'G')
            {
                printf("게임 클리어");
                *pi -= 1;
                return 0;
            }
            else if (a[*pi - 1][*pj] == 'M')
            {
                printf("사망");
                *pi -= 1;
                return 0;
            }
            else if (a[*pi - 1][*pj] == '.')
            {
                a[*pi][*pj] = '.';
                a[*pi - 1][*pj] = '#';
                *pi -= 1;
                system("cls");
                break;
            }

        case 'a':
            if (a[*pi][*pj - 1] == 'G')
            {
                printf("게임 클리어");
                *pj -= 1;
                return 0;
            }
            else if (a[*pi][*pj - 1] == 'M')
            {
                printf("사망");
                *pj -= 1;
                return 0;
            }
            else if (a[*pi][*pj - 1] == '.')
            {
                a[*pi][*pj] = '.';
                a[*pi][*pj - 1] = '#';
                *pj -= 1;
                system("cls");
                break;
            }

        case 's':
            if (a[*pi + 1][*pj] == 'G')
            {
                printf("게임 클리어");
                *pi += 1;
                return 0;
            }
            else if (a[*pi + 1][*pj] == 'M')
            {
                printf("사망");
                *pi += 1;
                return 0;
            }
            else if (a[*pi + 1][*pj] == '.')
            {
                a[*pi][*pj] = '.';
                a[*pi + 1][*pj] = '#';
                *pi += 1;
                system("cls");
                break;
            }


        case 'd':
            if (a[*pi][*pj + 1] == 'G')
            {
                printf("게임 클리어");
                *pj += 1;
                return 0;
            }
            else if (a[*pi][*pj + 1] == 'M')
            {
                printf("사망");
                *pj += 1;
                return 0;
            }
            else if (a[*pi][*pj + 1] == '.')
            {
                a[*pi][*pj] = '.';
                a[*pi][*pj + 1] = '#';
                *pj += 1;
                system("cls");
                break;
            }

        }

        for (int i = 0; i < 16; i++)
        {
            for (int j = 0; j < 16; j++)
            {
                printf("%c", a[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}