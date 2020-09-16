#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>

void judge(int user, int com);

int main()
{
    for (int i = 0; i < 6; i++)
    {
        int user;
        printf("(1:가위 2:바위 3:보자기) 입력:  ");
        scanf("%d", &user);

        if (user <= 3 && user > 0)
        {
            srand((unsigned)time(NULL));
            int com = rand() % 3;

            judge(user, com);

        }

    }



    return 0;
}




void judge(int user, int com)
{
    if (user == 1 - 1 && com == 3 - 1) printf("userwin\n user:%d  com:%d\n\n", user, com + 1);
    else if (user == 2 - 1 && com == 1 - 1) printf("userwin\n user:%d  com:%d\n\n", user, com + 1);
    else if (user == 3 - 1 && com == 2 - 1) printf("userwin\n user:%d  com:%d\n\n", user, com + 1);

    else if (user == com)printf("same\n user:%d  com:%d\n\n", use, com + 1);

    else printf("comwin\n user:%d  com:%d\n\n", user, com + 1);


}