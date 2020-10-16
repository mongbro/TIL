using System;
//형과 열을 바꾸는 메소드 transpose를 작성하고  다음 데이터로 테스트하시오.

namespace cs3._9_11
{
    class Program
    {
        static int[,] transpose(int[,] arr, int row, int col)
        {
            int[,] arr2 = new int[col, row];
            for(int i= 0; i < col; i++)
            {
                for(int j = 0; j < row; j++)
                {
                    arr2[i, j] = arr[j, i];
                }
            }
            return arr2;
        }
        static void printArray(int[,] arr, int row, int col)
        {
            for (int i = 0; i < row; i++)
            {
                for (int j = 0; j < col; j++)
                    Console.Write(arr[i, j] + " ");
                Console.Write("\n");
            }
        }
        static void Main(string[] args)
        {
            int n = 1;
            int[,] arr = new int[2,3], arr2;
            for(int i = 0; i < 2; i++)
            {
                for (int j = 0; j < 3; j++)
                    arr[i,j] = n++;
            }
            printArray(arr, 2, 3);

            Console.Write("\n");
            arr2 = transpose(arr, 2, 3);
            printArray(arr2, 3, 2);
        }
    }
}
