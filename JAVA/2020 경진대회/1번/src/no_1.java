import java.util.ArrayList;
import java.util.Scanner;
import java.util.Stack;

public class no_1 {

	public static void main(String[] args) {
		String input;
		String prefix = "", infix, postfix = "";
		ArrayList<Character> post = new ArrayList<Character>();
		ArrayList<Character> pre = new ArrayList<Character>();
		Scanner sc = new Scanner(System.in);
		System.out.print("input >> ");
		input = sc.nextLine();
		if (!isright(input)) {
			System.out.println("ERROR");
			System.exit(0);
		}
		else {
			infix = input;
			post = topost(input);
			pre = topre(input);
			for (Character str : post)
				postfix += str;
			for (Character str : pre)
				prefix += str;
			System.out.println("prefix : " + prefix);
			System.out.println("infix : " + infix);
			System.out.println("postfix : " + postfix);
		}
	}
	private static boolean isright(String input) {
		int len = input.length();
		char[] array = input.toCharArray();
		for (int i = 0; i < len; i++) {
			if (i % 2 == 0) {
				if(!isalpha(array[i]))
					return false;
			}
			else {
				if(isalpha(array[i]))
					return false;
			}
		}
		return true;
	}
	private static boolean isalpha(char a) {
		if (a >= 65 && a <= 122)
			return true;
		else
			return false;
	}
	private static ArrayList<Character> topost(String input) {
		ArrayList<Character> qu = new ArrayList<Character>();
		Stack<Character> st = new Stack<Character>();
		char[] str = input.toCharArray();
		int len = input.length();
		for (int i = 0; i < len; i++) {
			if(isalpha(str[i]))
				qu.add(str[i]);
			else {
				if(str[i] != '+' && str[i] != '-') {
					st.push(str[i]);
				}
				else {
					for(int j = 0; j < st.size(); j++)
						while(!st.empty())
							qu.add(st.pop());
					st.push(str[i]);
				}
			}
		}
		while(!st.empty())
			qu.add(st.pop());
		return qu;
	}
	private static ArrayList<Character> topre(String input){
		ArrayList<Character> qu1 = new ArrayList<Character>();		// 알파벳만 있는 큐
		ArrayList<Character> qu2 = new ArrayList<Character>();		// 수식 전체 큐
		Stack<Character> st = new Stack<Character>();
		char[] str = input.toCharArray();
		char[] tmp2;
		String tmp = "";
		int len = input.length();
		
		for(int i = 0; i < len; i++) {
			if(isalpha(str[i]))
				qu1.add(str[i]);
			else {
				if (str[i] != '+' && str[i] != '-') 
					st.push(str[i]);
				else {
					st.push(str[i]);
					while(!st.isEmpty())
						qu2.add(st.pop());
					for (Character string : qu1)
						tmp += string;
					qu1.clear();
					tmp2 = tmp.toCharArray();
					tmp = "";
					for(int j = 0; j < tmp2.length; j++)
						qu2.add(tmp2[j]);
				}
			}
		}
		while(!st.isEmpty())
			qu2.add(st.pop());
		for (Character string : qu1)
			tmp += string;
		qu1.clear();
		tmp2 = tmp.toCharArray();
		for(int j = 0; j < tmp2.length; j++)
			qu2.add(tmp2[j]);
		
		return qu2;
	}
}