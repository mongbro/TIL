#include<iostream>
#include<string>
#include<conio.h>
#include<Windows.h>   
#include<cstdlib>
#include<ctime>
#include<cstring>
#include<thread>
#include<ctime>
using namespace std;

//ui
#define sq "��"
#define sp "��"
#define deadline 2
////
string block4[4][4] = { "  ", };
string nextB[4][4] = { "  ", };
int score = 0;
int levelsec = 1000;

string blocks[7][4][4][4] =
{
   {//I
      {   {sp,sp,sp,sp},
         {sq,sq,sq,sq},
         {sp,sp,sp,sp},
         {sp,sp,sp,sp},
      },
      {   {sp,sp,sq,sp},
         {sp,sp,sq,sp},
         {sp,sp,sq,sp},
         {sp,sp,sq,sp},
      },
      {   {sp,sp,sp,sp},
         {sp,sp,sp,sp},
         {sq,sq,sq,sq},
         {sp,sp,sp,sp},
      },
      {   {sp,sq,sp,sp},
         {sp,sq,sp,sp},
         {sp,sq,sp,sp},
         {sp,sq,sp,sp},
      }
   },

   {//J
      {   {sq,sp,sp,sp},
         {sq,sq,sq,sp},
         {sp,sp,sp,sp},
         {sp,sp,sp,sp},
      },
      {   {sp,sq,sq,sp},
         {sp,sq,sp,sp},
         {sp,sq,sp,sp},
         {sp,sp,sp,sp},
      },
      {   {sp,sp,sp,sp},
         {sq,sq,sq,sp},
         {sp,sp,sq,sp},
         {sp,sp,sp,sp},
      },
      {   {sp,sq,sp,sp},
         {sp,sq,sp,sp},
         {sq,sq,sp,sp},
         {sp,sp,sp,sp},
      }
   },
   {//L
      {   {sp,sp,sq,sp},
         {sq,sq,sq,sp},
         {sp,sp,sp,sp},
         {sp,sp,sp,sp},
      },
      {   {sp,sq,sp,sp},
         {sp,sq,sp,sp},
         {sp,sq,sq,sp},
         {sp,sp,sp,sp},
      },
      {   {sp,sp,sp,sp},
         {sq,sq,sq,sp},
         {sq,sp,sp,sp},
         {sp,sp,sp,sp},
      },
      {   {sq,sq,sp,sp},
         {sp,sq,sp,sp},
         {sp,sq,sp,sp},
         {sp,sp,sp,sp},
      }
   },
   {//T
      {   {sp,sq,sp,sp},
         {sq,sq,sq,sp},
         {sp,sp,sp,sp},
         {sp,sp,sp,sp},
      },
      {   {sp,sq,sp,sp},
         {sp,sq,sq,sp},
         {sp,sq,sp,sp},
         {sp,sp,sp,sp},
      },
      {   {sp,sp,sp,sp},
         {sq,sq,sq,sp},
         {sp,sq,sp,sp},
         {sp,sp,sp,sp},
      },
      {   {sp,sq,sp,sp},
         {sq,sq,sp,sp},
         {sp,sq,sp,sp},
         {sp,sp,sp,sp},
      }
   },
   {//O
      {   {sq,sq,sp,sp},
         {sq,sq,sp,sp},
         {sp,sp,sp,sp},
         {sp,sp,sp,sp},
      },
      {   {sq,sq,sp,sp},
         {sq,sq,sp,sp},
         {sp,sp,sp,sp},
         {sp,sp,sp,sp},
      },
      {   {sq,sq,sp,sp},
         {sq,sq,sp,sp},
         {sp,sp,sp,sp},
         {sp,sp,sp,sp},
      },
      {   {sq,sq,sp,sp},
         {sq,sq,sp,sp},
         {sp,sp,sp,sp},
         {sp,sp,sp,sp},
      }
   },
   {//S
      {   {sp,sq,sq,sp},
         {sq,sq,sp,sp},
         {sp,sp,sp,sp},
         {sp,sp,sp,sp},
      },
      {   {sp,sq,sp,sp},
         {sp,sq,sq,sp},
         {sp,sp,sq,sp},
         {sp,sp,sp,sp},
      },
      {   {sp,sp,sp,sp},
         {sp,sq,sq,sp},
         {sq,sq,sp,sp},
         {sp,sp,sp,sp},
      },
      {   {sq,sp,sp,sp},
         {sq,sq,sp,sp},
         {sp,sq,sp,sp},
         {sp,sp,sp,sp},
      }
   },
   {//Z
      {   {sq,sq,sp,sp},
         {sp,sq,sq,sp},
         {sp,sp,sp,sp},
         {sp,sp,sp,sp},
      },
      {   {sp,sp,sq,sp},
         {sp,sq,sq,sp},
         {sp,sq,sp,sp},
         {sp,sp,sp,sp},
      },
      {   {sp,sp,sp,sp},
         {sq,sq,sp,sp},
         {sp,sq,sq,sp},
         {sp,sp,sp,sp},
      },
      {   {sp,sq,sp,sp},
         {sq,sq,sp,sp},
         {sq,sp,sp,sp},
         {sp,sp,sp,sp},
      }
   },
};



class Board
{
private:
    string board[17 + 1 + 1][12 + 2] = { "  ", };
    string remains[17 + 1 + 1][12 + 2] = { "  ", };
    time_t time;
public:
    void init()
    {
        //�ϴ� sq�� ä���
        for (int y = 0; y < 17 + 1 + 1; y++)
        {
            for (int x = 0; x < 12 + 2 + 1; x++)
            {
                board[y][x] = sq;
            }
        }
        //�ĳ���
        for (int y = 0; y < 17; y++)
        {
            for (int x = 1; x < 12 + 1; x++)
            {
                board[y][x] = sp;
            }
        }
        draw_remains();
    }
    Board()
    {
        init();

        /*/
        for (int y = 0; y < 17 + 1; y++)
        {
           for (int x = 0; x < 12 + 2; x++)
           {
              remains[y][x] = sq;
           }
        }
        //*/
        //�ĳ���
        for (int y = 0; y < 17 + 1; y++)
        {
            for (int x = 1; x < 12 + 2 - 1; x++)
            {
                remains[y][x] = sp;
            }
        }
        //deadline ���ϱ�

    }

    //code1
    char XcanMove(string block[4][4], int x, int y)
    {
        for (int i = 0; i < 4; i++)//y�� ������ Ž��
        {
            for (int j = 0; j < 4; j++)//x�� L���� R�� ���鼭
            {
                if (block[i][j] == sq)//�� ó�� ���� sq �߰� ��
                {
                    if (board[y + i][x + j - 1] == sq)//�ٷ� ���� ĭ�� ä���� ������
                    {
                        return 'L';
                    }
                    //�߰��� �����ϱ� ���� ������ ĭ���� �ǳʶٱ�
                    break;
                }
                //break
            }
        }
        for (int i = 0; i < 4; i++)//y�� ������ Ž��
        {
            for (int j = 3; j >= 0; j--)//x�� R���� L�� ���鼭
            {
                if (block[i][j] == sq)//�� ó�� ���� sq �߰� ��
                {
                    if (board[y + i][x + j + 1] == sq)//�ٷ� ������ ĭ�� ä���� ������
                    {
                        return 'R';
                    }
                    //�߰��� �����ϱ� ���� ���� ĭ���� �ǳʶٱ�
                    break;
                }
            }
        }
        //�ƹ��͵� �߰ߵ��� ������
        return 'o';
    }
    bool YcanMove(string block[4][4], int x, int y)
    {
        for (int i = 0; i < 4; i++)//x�� ������� Ž��
        {
            for (int j = 3; j >= 0; j--)//y�� �Ʒ����� �ö󰡸鼭 Ž��
            {
                //y�� �Ʒ����� �ö󰡸鼭 �� ó�� sq�߽߰�(��� �߽߰�)
                if (block[j][i] == sq)
                {
                    //�� �ٷ� �ؿ� ĭ�� ä���� ������
                    if (board[y + j + 1][x + i] == sq)
                    {
                        return false;

                        //Sleep(1000);
                        //cout << "collider detected";

                    }
                    //�߰��� �����ϱ� ���� ���� ĭ���� �ǳʶٱ�
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
                if (block[i][j] == sq)//�� �Ϻκп� ������
                {
                    if (x + j <= 0) //�� ���� �� ������ ����ų� ��ġ��
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
        //�ƹ��͵� �߰ߵ��� ������
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
        //�ؿ� ���ΰ� �׸���
        for (int y = 0; y < 17 + 1; y++)
        {
            for (int x = 0; x < 12 + 1; x++)
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
        //�ʱ�ȭ
        init();
        //�� �׸���
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                if (block[i][j] == sq)
                {
                    board[i + y][j + x] = block[i][j];
                }
            }
        }
        draw_remains();
    }

    void check_line()
    {
        int combo = 0;

        for (int i = 0; i < 17; i++)//y
        {
            for (int j = 1; j < 12 + 2; j++)//x
            {
                //x������ ���鼭 sq �߽߰�
                if (board[i][j] == sq)
                {
                    //1�� ī��Ʈ
                    combo++;
                }
            }
            if (combo >= 13)//x�� ��� ä���� ������(ī��Ʈ�� 12 �̻����� ��������)
            {
                score += ((1000 - levelsec) + (19 - i));

                //�� �Ʒ��� ����
                for (int a = i; a >= 1; a--)
                {
                    for (int b = 0; b < 12 + 2; b++)
                    {
                        //remains[a + 1][b] = remains[a][b];
                        remains[a][b] = remains[a - 1][b];
                    }
                }
                cout << "break!";
                Sleep(500);
            }
            combo = 0;
        }
    }
    bool check_dead()
    {
        for (int i = 1; i < 12 + 2; i++)
        {
            if (remains[0][i] == sq)
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
                cout << board[y][x];
            cout << "  ";
            for (int x = 0; x < 4; x++)
                if (y < 4)
                    cout << nextB[y][x];
            if (y == 4)
                cout << score;
            cout << "\n";
        }
        //*/
    }
};

int main()
{
    srand((unsigned int)time(NULL));
    int type = 0;
    int nexttype = 0;
    int rotnum = 0;
    int x = 2, y = 0;

    Board board;

    time_t time = clock();

    bool isturnend = false;
    bool is_scr = false;

    nexttype = rand() % 7;
    memcpy(nextB, blocks[type][rotnum], sizeof(block4));

    //�� �������� �� �ٲ�� �ݺ���
    while (true)
    {
        memcpy(block4, nextB, sizeof(block4));
        type = nexttype;

        isturnend = false;

        nexttype = rand() % 7;
        memcpy(nextB, blocks[nexttype][rotnum], sizeof(block4));

        //�� �ϳ��� �ش��ϴ� �ݺ���
        while (isturnend == false)
        {


            //x��ǥ ����
            if ((GetAsyncKeyState(VK_LEFT) & 0X0001))//test2
            {
                char state4 = board.XcanMove(block4, x, y);
                if (state4 != 'L')
                {
                    x--;
                    is_scr = true;
                    board.show();
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
                    is_scr = true;
                    board.show();
                }
            }

            //ȸ�� �ҽ�   
            if ((GetAsyncKeyState(VK_SPACE) & 0X0001))
            {
                {
                    rotnum++;
                    if (rotnum == 4)rotnum = 0;
                    is_scr = true;


                    while (board.rotate_Xadjust(block4, x, y) != 'o')
                    {
                        if (board.rotate_Xadjust(block4, x, y) == 'L')x++;
                        if (board.rotate_Xadjust(block4, x, y) == 'R')x--;
                    }

                    //*/
                    while (board.YcanMove(block4, x, y) == false)
                    {
                        y--;
                    }
                    //*/

                    board.show();
                }
            }
            memcpy(block4, blocks[type][rotnum], sizeof(block4));



            while (board.rotate_Xadjust(block4, x, y) != 'o')
            {
                if (board.rotate_Xadjust(block4, x, y) == 'L')x++;
                if (board.rotate_Xadjust(block4, x, y) == 'R')x--;
            }
            board.blockloc(block4, x, y);//test1

            //�Ʒ��� �̵�
            if ((GetAsyncKeyState(VK_DOWN) & 0X0001) && (board.YcanMove(block4, x, y) == true))
            {
                y++;
                is_scr = true;
                board.blockloc(block4, x, y);//test1
                board.show();
            }

            //y��ǥ ����
            if ((float)(clock() - time) > (float)levelsec)
            {
                levelsec /= 1.000001;
                time = clock();
                if (board.YcanMove(block4, x, y) == true)
                {

                    is_scr = true;
                    y++;
                    board.blockloc(block4, x, y);//test1
                    board.show();
                }
                //�Ʒ��� ������ �� ������
                else if (board.YcanMove(block4, x, y) == false)
                {
                    //remains���忡 ��4 �ֱ�
                    board.add_Remains(block4, x, y);
                    //���� �ø���
                    x = 2;
                    y = 0;
                    //���� �ѹ� ����������

                    board.check_line();


                    isturnend = true;
                }

            }

            //�׾����� üũ
            bool is_dead = board.check_dead();
            if (is_dead)system("pause");

            if (is_scr)
            {
                //ȭ�� ���
                //board.show();
                is_scr = false;
            }
        }

    }


    return 0;
}



//���� �۾����� �ڵ�