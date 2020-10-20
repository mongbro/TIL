using System;

namespace Stack
{
    class Stack
    {
        private int[] stack;            // 스텍
        int sp = -1;                    // 스텍포인터(인덱스)
        public Stack()                  // 디폴트 생성자
        {
            stack = new int[100];
        }
        public Stack(int size)
        {
            stack = new int[size];
        }
        public void Push(int data)      // 삽입
        {
            stack[++sp] = data;         // sp(인덱스) 하나 증가하고 스텍 배열에 
                                        //입력된 데이터 삽입
        }
        public int Pop()                // 출력
        {
            return stack[sp--];         // 해당 인덱스에 있는 데이터를 
                                        //반환하고 sp(인덱스) 하나 감소
        }
        static void Main(string[] args)
        {
            Stack s = new Stack();      // 디폴트 생성자로 객체 생성
            string input;
            int data;
            while (true)
            {
                Console.Write("입력 >> ");
                input = Console.ReadLine();
                data = int.Parse(input);    // 문자열로 입력받은 데이터 
                                            //정수형으로 형변환
                if (data == 0)
                    break;
                s.Push(data);               // 데이터 푸시
            }
            Console.Write("출력 >> ");
            while (true)
            {
                data = s.Pop();                 // 데이터 팝
                Console.Write("{0} ", data);
                if (s.sp == -1)                 // sp(인덱스)가 -1, 즉 스텍 배열에 
                                                //아무것도 없으면
                    break;                     // 빠져나온다.
            }
        }
    }
}