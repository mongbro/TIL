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
		
		for(int i = 0; i < input.length(); i++) {	// input�� ���ڿ� ���̸�ŭ �ݺ�
			if(isnum(strspt[i])) {		// strspt[i]�� �����̰� ���� �ǿ������϶�
				operand[operandcount] += strspt[i];				// ���� �ǿ����ڿ� strspt[i]�� �߰�
			}
			else {					// strspt[i]�� ���ڰ� �ƴҶ� ��, �������϶�
				operator[operandcount] += strspt[i];				// �����ڿ� strspt[i]�� �߰�
				operandcount++;
			}
		}
		
		for(int i = 0; i < operandnum * 2 - 1; i++) {
			if(i % 2 == 0) {				// �ǿ�����(����)�� ��� ť�� �߰�
				qu.add(operand[i / 2]);		
			}
			else {							// �������� ���
				if(operator[i / 2].equals("+") || operator[i / 2].equals("-")) {	// +�� -�� ���
					int size = st.size();
					for(int j = 0; j < size; j++)
						qu.add(st.pop());				// ���ÿ� �ִ°� ���� ť�� ������
					st.add(operator[i / 2]);		// �� �Ŀ� +�� - ���ÿ� �ֱ�
				}
				else
					st.add(operator[i / 2]);
			}
		}
		int size = st.size();
		for(int j = 0; j < size; j++)
			qu.add(st.pop());				// ���ÿ� �ִ°� ���� ť�� ������
		
		
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

	public static boolean isnum(String str) {			// �������� �˻��ϴ� �޼ҵ�
		String[] num = {"0","1","2","3","4","5","6","7","8","9"};
		for(int i = 0; i < 10; i++) 
			if(str.equals(num[i]))
				return true;		// 0 ~ 9 �߿��� ���� ���ڿ��� ������ true ��ȯ
		return false;				// ������ false ��ȯ
	}
}
