#include<iostream>
#include<string>
#include<conio.h>
#include<Windows.h>   
#include<cstdlib>
#include<ctime>
#include<cstring>
#include<thread>
using namespace std;





//ui
#define sq "■"
#define space "　"

///////
#define deadline 2
////




string I[4][4][4] = {
   {{space, space, space, space},
      {sq, sq, sq, sq},
      {space, space, space, space},
      {space, space, space, space},},
   {{space, space, sq, space},
      {space, space, sq, space},
      {space, space, sq, space},
      {space, space, sq, space},},
   {{space, space, space, space},
      {space, space, space, space},
      {sq, sq, sq, sq},
      {space, space, space, space},},
   {{space, sq, space, space},
      {space, sq, space, space},
      {space, sq, space, space},
      {space, sq, space, space}}
};
string J[4][4][4] = {
{sq,space,space,space,
   sq,sq,sq,space,
   space,space,space,space,
   space,space,space,space},
{space,sq,sq,space,
   space,sq,space,space,
   space,sq,space,space,
   space,space,space,space},
{space,space,space,space,
   sq,sq,sq,space,
   space,space,sq,space,
   space,space,space,space},
{space,sq,space,space,
   space,sq,space,space,
   sq,sq,space,space,
   space,space,space,space}
};
string L[4][4][4] = {
{space,space,sq,space,
   sq,sq,sq,space,
   space,space,space,space,
   space,space,space,space},
{space,sq,space,space,
   space,sq,space,space,
   space,sq,sq,space,
   space,space,space,space},
{space,space,space,space,
   sq,sq,sq,space,
   sq,space,space,space,
   space,space,space,space},
{sq,sq,space,space,
   space,sq,space,space,
   space,sq,space,space,
   space,space,space,space}
};
string T[4][4][4] = {
{space,sq,space,space,
   sq,sq,sq,space,
   space,space,space,space,
   space,space,space,space},
{space,sq,space,space,
   space,sq,sq,space,
   space,sq,space,space,
   space,space,space,space},
{space,space,space,space,
   sq,sq,sq,space,
   space,sq,space,space,
   space,space,space,space},
{space,sq,space,space,
   sq,sq,space,space,
   space,sq,space,space,
   space,space,space,space},
};
string O[4][4][4] = {
{sq,sq,space,space,
   sq,sq,space,space,
   space,space,space,space,
   space,space,space,space},
{sq,sq,space,space,
   sq,sq,space,space,
   space,space,space,space,
   space,space,space,space},
{sq,sq,space,space,
   sq,sq,space,space,
   space,space,space,space,
   space,space,space,space},
{sq,sq,space,space,
   sq,sq,space,space,
   space,space,space,space,
   space,space,space,space},
};
string S[4][4][4] = {
{space,sq,sq,space,
   sq,sq,space,space,
   space,space,space,space,
   space,space,space,space},
{space,sq,space,space,
   space,sq,sq,space,
   space,space,sq,space,
   space,space,space,space},
{space,space,space,space,
   space,sq,sq,space,
   sq,sq,space,space,
   space,space,space,space},
{sq,space,space,space,
   sq,sq,space,space,
   space,sq,space,space,
   space,space,space,space},
};
string Z[4][4][4] = {
{sq,sq,space,space,
   space,sq,sq,space,
   space,space,space,space,
   space,space,space,space},
{space,space,sq,space,
   space,sq,sq,space,
   space,sq,space,space,
   space,space,space,space},
{space,space,space,space,
   sq,sq,space,space,
   space,sq,sq,space,
   space,space,space,space},
{space,sq,space,space,
   sq,sq,space,space,
   sq,space,space,space,
   space,space,space,space},
};



class Board
{
private:
    string board[17 + 1 + 1][12 + 2] = { "  ", };
    string remains[17 + 1 + 1][12 + 2] = { "  ", };

public:
    void init()
    {
        //일단 sq로 채우기
        for (int y = 0; y < 17 + 1 + 1; y++)
        {
            for (int x = 0; x < 12 + 2 + 1; x++)
            {
                board[y][x] = sq;
            }
        }
        //파내기
        for (int y = 0; y < 17; y++)
        {
            for (int x = 1; x < 12 + 2 - 1; x++)
            {
                board[y][x] = space;
            }
        }
        //deadline 정하기
        for (int x = 1; x < 12 + 2 - 1; x++)
        {
            board[2][x] = "--";
        }
    }
    Board()
    {
        init();
        for (int y = 0; y < 17 + 1; y++)
        {
            for (int x = 0; x < 12 + 2; x++)
            {
                remains[y][x] = sq;
            }
        }
        //파내기
        for (int y = 0; y < 17; y++)
        {
            for (int x = 1; x < 12 + 2 - 1; x++)
            {
                remains[y][x] = space;
            }
        }
        //deadline 정하기
        for (int x = 1; x < 12 + 2 - 1; x++)
        {
            remains[2][x] = "--";
        }
    }

    //code1
    char XcanMove(string block[4][4], int x, int y)
    {
        for (int i = 0; i < 4; i++)//y축 단위로 탐색
        {
            for (int j = 0; j < 4; j++)//x축 L부터 R로 가면서
            {
                if (block[i][j] == sq)//맨 처음 만난 sq 발견 시
                {
                    if (board[y + i][x + j - 1] == sq)//바로 왼쪽 칸이 채워져 있으면
                    {
                        return 'L';
                    }
                    //발견은 했으니까 남은 오른쪽 칸들은 건너뛰기
                    break;
                }
                //break
            }
        }
        for (int i = 0; i < 4; i++)//y축 단위로 탐색
        {
            for (int j = 3; j >= 0; j--)//x축 R부터 L로 가면서
            {
                if (block[i][j] == sq)//맨 처음 만난 sq 발견 시
                {
                    if (board[y + i][x + j + 1] == sq)//바로 오른쪽 칸이 채워져 있으면
                    {
                        return 'R';
                    }
                    //발견은 했으니까 남은 왼쪽 칸들은 건너뛰기
                    break;
                }
            }
        }
        //아무것도 발견되지 않으면
        return 'o';
    }
    bool YcanMove(string block[4][4], int x, int y)
    {
        for (int i = 0; i < 4; i++)//x축 순서대로 탐색
        {
            for (int j = 3; j >= 0; j--)//y축 아래부터 올라가면서 탐색
            {
                //y축 아래부터 올라가면서 맨 처음 sq발견시(블록 발견시)
                if (block[j][i] == sq)
                {
                    //그 바로 밑에 칸이 채워져 있으면
                    if (board[y + j + 1][x + i] == sq)
                    {
                        return false;

                        //Sleep(1000);
                        //cout << "collider detected";

                    }
                    //발견은 했으니까 위에 남은 칸들은 건너뛰기
                    break;
                }
            }
        }
        return true;
        cout << "block can move";
    }

    char rotate_Xadjust(string block[4][4], int x, int y)
    {
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                if (block[i][j] == sq)//블럭 일부분에 들어갔을때
                {
                    if (x + j <= 0) //그 블럭이 벽 범위를 벗어나거나 겹치면
                    {
                        return 'L';
                    }
                    else if (x + j >= 13)
                    {
                        return 'R';
                    }
                }
            }
        }
        //아무것도 발견되지 않으면
        return 'o';
    }


    void add_Remains(string block[4][4], int x, int y)
    {
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                if (block[i][j] == sq)
                {
                    remains[i + y][j + x] = block[i][j];
                }
            }
        }
    }
    void draw_remains()
    {

        //밑에 쌓인거 그리기
        for (int y = 0; y < 17 + 2; y++)
        {
            for (int x = 0; x < 12 + 2; x++)
            {
                if (board[y][x] != sq)
                {
                    board[y][x] = remains[y][x];
                }
            }
        }
    }

    //code1
    void blockloc(string block[4][4], int x, int y)
    {
        //초기화
        init();
        //블럭 그리기
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                board[i + y][j + x] = block[i][j];

            }
        }
        draw_remains();
    }


    void check_line()
    {
        int combo = 0;

        for (int i = 0; i < 17; i++)//y
        {
            for (int j = 1; j < 12 + 1; j++)//x
            {
                //x축으로 돌면서 sq 발견시
                if (board[i][j] == sq)
                {
                    //1개 카운트
                    combo++;
                }
            }
            if (combo >= 12)//x축 모두 채워져 있으면(카운트가 12 이상으로 세어지면)
            {
                //다 채운 해당 줄 없애기
                //for (int k = 0; k < 12 + 1; k++)
                {
                    //remains[i][k] = space;
                }
                //Sleep(200);

                //블럭 아래로 당기기
                for (int a = i; a >= 0; a--)
                {
                    for (int b = 0; b < 12 + 1; b++)
                    {
                        remains[a + 1][b] = remains[a][b];
                        remains[a][b] = space;
                    }
                }


                cout << "break!";
                Sleep(500);
            }
            else combo = 0;
        }

    }
    bool check_dead()
    {
        for (int i = 1; i < 12 + 1; i++)
        {
            if (remains[2][i] == sq)
            {
                cout << "GAME OVER";
                Sleep(1000);
                return true;
            }
        }
        return false;
    }


    void show()
    {
        system("cls");
        //*/
        for (int y = 0; y < 17 + 1; y++)
        {
            for (int x = 0; x < 12 + 2; x++)
            {
                cout << board[y][x];
            }
            cout << "\n";
        }
        //*/
    }
};


int main()
{

    srand((unsigned int)time(NULL));

    Board board;

    char input = 'D';
    int hsp = 0;
    int timerV = 5000;
    int timer = timerV;

    int type = 0;

    bool isI = false;
    int rotnum = 0;
    string block4[4][4] = { "  ", };

    bool is_coll = false;

    int x = 2, y = 0;

    bool isturnend = false;

    bool is_scr = false;

    //다 내려오고 블럭 바뀌는 반복문
    while (true)
    {
        board.check_line();






        isturnend = false;
        type = rand() % 7;
        if (type == 0) { isI = true; }
        else if (type == 1) { isI = false; }
        else if (type == 2) { isI = false; }
        else if (type == 3) { isI = false; }
        else if (type == 4) { isI = false; }
        else if (type == 5) { isI = false; }
        else if (type == 6) { isI = false; }



        //블럭 하나당 해당하는 반복문
        while (isturnend == false)
            //while(true)
        {





            //x좌표 무빙
            if ((GetAsyncKeyState(VK_LEFT) & 0X0001))//test2
            {
                char state4 = board.XcanMove(block4, x, y);
                if (state4 != 'L')
                {
                    x--;
                    cout << "left";
                    is_scr = true;
                }
                //code2
                 //system("pause");
            }
            if ((GetAsyncKeyState(VK_RIGHT) & 0X0001))
            {
                char state4 = board.XcanMove(block4, x, y);
                if (state4 != 'R')
                {
                    x++;
                    cout << "right";
                    is_scr = true;
                }
            }



            //회전 소스   
            if ((GetAsyncKeyState(VK_SPACE) & 0X0001))
            {
                {
                    rotnum++;
                    if (rotnum == 4)rotnum = 0;
                    is_scr = true;
                }
            }
            if (type == 0) { memcpy(block4, I[rotnum], sizeof(block4)); isI = true; }
            else if (type == 1) { memcpy(block4, J[rotnum], sizeof(block4)); isI = false; }
            else if (type == 2) { memcpy(block4, L[rotnum], sizeof(block4)); isI = false; }
            else if (type == 3) { memcpy(block4, S[rotnum], sizeof(block4)); isI = false; }
            else if (type == 4) { memcpy(block4, Z[rotnum], sizeof(block4)); isI = false; }
            else if (type == 5) { memcpy(block4, O[rotnum], sizeof(block4)); isI = false; }
            else if (type == 6) { memcpy(block4, T[rotnum], sizeof(block4)); isI = false; }
            //
            while (board.rotate_Xadjust(block4, x, y) != 'o')
            {
                if (board.rotate_Xadjust(block4, x, y) == 'L')x++;
                if (board.rotate_Xadjust(block4, x, y) == 'R')x--;
            }

            board.blockloc(block4, x, y);//test1



            //아래로 이동
            if ((GetAsyncKeyState(VK_DOWN) & 0X0001) && (board.YcanMove(block4, x, y) == true))
            {
                y++;
                is_scr = true;
            }




            //y좌표 무빙



            timer--;
            if (timer < 0)
            {
                timer = timerV;
                //내려가는 동작 실행 부분 - 타이머 분기마다 한번씩 y좌표 1씩 내려감
                if (board.YcanMove(block4, x, y) == true)
                {
                    is_scr = true;
                    y++;
                }
                //아래로 움직일 수 없으면
                else if (board.YcanMove(block4, x, y) == false)
                {

                    //remains보드에 블럭4 넣기
                    board.add_Remains(block4, x, y);
                    //블럭4 비우기 (초기화)
                    for (int i = 0; i < 4; i++)
                    {
                        for (int j = 0; j < 4; j++)
                        {
                            block4[i][j] = space;
                        }
                    }
                    //위로 올리기
                    x = 2;
                    y = 0;
                    //루프 한번 빠져나오기
                    isturnend = true;
                }

            }


            //죽었는지 체크
            bool is_dead = board.check_dead();
            if (is_dead)system("pause");



            if (is_scr)
            {
                //화면 출력
                board.show();
                is_scr = false;
            }




        }

    }




    return 0;
}



//실제 작업중인 코드