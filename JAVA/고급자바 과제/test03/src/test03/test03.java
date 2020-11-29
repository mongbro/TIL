package test03;

import java.util.ArrayList;
import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;
import java.util.Stack;

public class test03 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String input = sc.nextLine();
		String[] strspt = input.split("");
		int operandnum = 1;
		int operatornum;
		Queue<String> qu = new LinkedList<String>();
		for(int i = 0; i < input.length(); i++) {
			if(strspt[i].equals("+") || strspt[i].equals("-") || strspt[i].equals("*") || strspt[i].equals("/"))
				operandnum++;
		}

		qu = toPostfix(operandnum, input);
		operatornum = operandnum - 1;
		System.out.println(calculpost(qu, operatornum));
	}

	public static Queue<String> toPostfix(int operandnum, String input) {
		String[] operand = new String[operandnum];
		String[] operator = new String[operandnum - 1];
		int operandcount = 0;
		String[] strspt = input.split("");
		Stack<String> st = new Stack<String>();
		Queue<String> qu = new LinkedList<String>();
		for(int i = 0; i < operand.length; i++) {
			operand[i] = "";
		}
		for(int i = 0; i < operator.length; i++) {
			operator[i] = "";
		}
		
		for(int i = 0; i < input.length(); i++) {	// input의 문자열 길이만큼 반복
			if(isnum(strspt[i])) {		// strspt[i]가 숫자이고 왼쪽 피연산자일때
				operand[operandcount] += strspt[i];				// 왼쪽 피연산자에 strspt[i]를 추가
			}
			else {					// strspt[i]가 숫자가 아닐때 즉, 연산자일때
				operator[operandcount] += strspt[i];				// 연산자에 strspt[i]를 추가
				operandcount++;
			}
		}
		
		for(int i = 0; i < operandnum * 2 - 1; i++) {
			if(i % 2 == 0) {				// 피연산자(숫자)일 경우 큐에 추가
				qu.add(operand[i / 2]);		
			}
			else {							// 연산자일 경우
				if(operator[i / 2].equals("+") || operator[i / 2].equals("-")) {	// +나 -일 경우
					int size = st.size();
					for(int j = 0; j < size; j++)
						qu.add(st.pop());				// 스택에 있는거 전부 큐에 꺼내기
					st.add(operator[i / 2]);		// 그 후에 +나 - 스택에 넣기
				}
				else
					st.add(operator[i / 2]);
			}
		}
		int size = st.size();
		for(int j = 0; j < size; j++)
			qu.add(st.pop());				// 스택에 있는거 전부 큐에 꺼내기
		
		
		return qu;
	}
	
	public static double calculpost(Queue<String> qu, int operandcount) {
		double result = 0, a;
		int size = qu.size();
		ArrayList<String> str = new ArrayList<String>();
		for(int i = 0; i < size; i++) {
			str.add(qu.poll());
		}
		for(int i = 0; i < str.size(); i++) {
			if(str.get(i).equals("+") || str.get(i).equals("-") || str.get(i).equals("*") || str.get(i).equals("/")) {
				switch(str.get(i)) {
				case "+":
					a = Double.parseDouble(str.get(i-2)) + Double.parseDouble(str.get(i-1));
					str.remove(i);
					str.remove(i-1);
					str.remove(i-2);
					str.add(i-2, Double.toString(a));
					i -= 2;
					break;
				case "-":
					a = Double.parseDouble(str.get(i-2)) - Double.parseDouble(str.get(i-1));
					str.remove(i);
					str.remove(i-1);
					str.remove(i-2);
					str.add(i-2, Double.toString(a));
					i -= 2;
					break;
				case "*":
					a = Double.parseDouble(str.get(i-2)) * Double.parseDouble(str.get(i-1));
					str.remove(i);
					str.remove(i-1);
					str.remove(i-2);
					str.add(i-2, Double.toString(a));
					i -= 2;
					break;
				case "/":
					a = Double.parseDouble(str.get(i-2)) / Double.parseDouble(str.get(i-1));
					str.remove(i);
					str.remove(i-1);
					str.remove(i-2);
					str.add(i-2, Double.toString(a));
					i -= 2;
					break;
				}
			}		
		}
		result = Double.parseDouble(str.get(0));
		
		return result;
	}

	public static boolean isnum(String str) {			// 숫자인지 검사하는 메소드
		String[] num = {"0","1","2","3","4","5","6","7","8","9"};
		for(int i = 0; i < 10; i++) 
			if(str.equals(num[i]))
				return true;		// 0 ~ 9 중에서 같은 문자열이 있으면 true 반환
		return false;				// 없으면 false 반환
	}
}
