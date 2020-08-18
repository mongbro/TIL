import java.util.Scanner;

abstract class Calculator {
   protected int a, b;

   abstract protected int calc();

   protected void input() {
      Scanner sc = new Scanner(System.in);
      System.out.print("정수를 입력하세여 >> ");
      a = sc.nextInt();
      b = sc.nextInt();
      if(a == -1 && b == -1)
    	  System.exit(0);
   }

   public int end() {
      return 0;
   }.

   public void run() {
      input();
      int res = calc();
      System.out.println("계산된 값은 " + res);
   }
}

class Adder extends Calculator {
   protected int calc() {
      return a + b;
   }
}

class Subtracter extends Calculator {
   protected int calc() {
      return a - b;
   }
}

public class practice0301_4 {

   public static void main(String[] args) {
      Adder add = new Adder();
      Subtracter sub = new Subtracter();
      while (true) {
         add.run();
         sub.run();
      }
   }

}