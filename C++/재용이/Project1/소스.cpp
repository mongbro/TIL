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
#define sq "��"
#define space "��"

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
            for (int x = 1; x < 12 + 2 - 1; x++)
            {
                board[y][x] = space;
            }
        }
        //deadline ���ϱ�
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
        //�ĳ���
        for (int y = 0; y < 17; y++)
        {
            for (int x = 1; x < 12 + 2 - 1; x++)
            {
                remains[y][x] = space;
            }
        }
        //deadline ���ϱ�
        for (int x = 1; x < 12 + 2 - 1; x++)
        {
            remains[2][x] = "--";
        }
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
        //�ʱ�ȭ
        init();
        //�� �׸���
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
                //x������ ���鼭 sq �߽߰�
                if (board[i][j] == sq)
                {
                    //1�� ī��Ʈ
                    combo++;
                }
            }
            if (combo >= 12)//x�� ��� ä���� ������(ī��Ʈ�� 12 �̻����� ��������)
            {
                //�� ä�� �ش� �� ���ֱ�
                //for (int k = 0; k < 12 + 1; k++)
                {
                    //remains[i][k] = space;
                }
                //Sleep(200);

                //�� �Ʒ��� ����
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

    //�� �������� �� �ٲ�� �ݺ���
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



        //�� �ϳ��� �ش��ϴ� �ݺ���
        while (isturnend == false)
            //while(true)
        {





            //x��ǥ ����
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



            //ȸ�� �ҽ�   
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



            //�Ʒ��� �̵�
            if ((GetAsyncKeyState(VK_DOWN) & 0X0001) && (board.YcanMove(block4, x, y) == true))
            {
                y++;
                is_scr = true;
            }




            //y��ǥ ����



            timer--;
            if (timer < 0)
            {
                timer = timerV;
                //�������� ���� ���� �κ� - Ÿ�̸� �б⸶�� �ѹ��� y��ǥ 1�� ������
                if (board.YcanMove(block4, x, y) == true)
                {
                    is_scr = true;
                    y++;
                }
                //�Ʒ��� ������ �� ������
                else if (board.YcanMove(block4, x, y) == false)
                {

                    //remains���忡 ��4 �ֱ�
                    board.add_Remains(block4, x, y);
                    //��4 ���� (�ʱ�ȭ)
                    for (int i = 0; i < 4; i++)
                    {
                        for (int j = 0; j < 4; j++)
                        {
                            block4[i][j] = space;
                        }
                    }
                    //���� �ø���
                    x = 2;
                    y = 0;
                    //���� �ѹ� ����������
                    isturnend = true;
                }

            }


            //�׾����� üũ
            bool is_dead = board.check_dead();
            if (is_dead)system("pause");



            if (is_scr)
            {
                //ȭ�� ���
                board.show();
                is_scr = false;
            }




        }

    }




    return 0;
}



//���� �۾����� �ڵ�