import java.util.ArrayList;
import java.util.Scanner;
import java.util.Stack;

public class check_bracket {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		Stack<Character> list = new Stack<Character>();
		int n;
		String input, ninput;
		ninput = sc.nextLine();
		n = Integer.parseInt(ninput);
		for(int z = 0; z < n; z++) {
			boolean collect = true;
			input = sc.nextLine();
			char[] arr = new char[input.length()];
			for(int i = 0; i < input.length(); i++)
				arr[i] = input.charAt(i);
			for(int i = 0; i < input.length(); i++) {
				if(arr[i] == '(' || arr[i] == '{'  || arr[i] == '[')
					list.push(arr[i]);
				else {
					if(check(list.pop(), arr[i]))
						continue;
					else {
						System.out.println("NO");
						collect = false;
						break;
					}
				}
			}
			if(collect == true)
				System.out.println("YES");
		}
	}

	static boolean check(char c1, char c2) {
		boolean ch;
		switch(c1) {
			case '(':
				if(c2 == ')')
					ch = true;
				else
					ch = false;
				break;
			case '{':
				if(c2 == '}')
					ch = true;
				else
					ch = false;
				break;
			case '[':
				if(c2 == ']')
					ch = true;
				else
					ch = false;
				break;
			default:
					ch = false;
		}
		return ch;
	}
}
