package application;

import java.net.URL;
import java.util.ArrayList;
import java.util.LinkedList;
import java.util.Queue;
import java.util.ResourceBundle;
import java.util.Stack;

import javafx.fxml.FXML;
import javafx.fxml.Initializable;
import javafx.scene.control.Button;
import javafx.scene.control.TextField;
import javafx.scene.input.KeyCode;
import javafx.scene.input.KeyEvent;
import javafx.scene.layout.BorderPane;

public class CalculatorAction implements Initializable{
	@FXML Button btn0,btn1,btn2,btn3,btn4,btn5,btn6,btn7,btn8,btn9;
	@FXML Button btnCE,btnresult,btnadd,btnsub,btnmul,btndiv;
	@FXML TextField input, output;
	@FXML BorderPane pane;
	@Override
	public void initialize(URL location, ResourceBundle resources) {
		btn0.setOnAction(event -> input.setText(input.getText() + "0"));
		btn1.setOnAction(event -> input.setText(input.getText() + "1"));
		btn2.setOnAction(event -> input.setText(input.getText() + "2"));
		btn3.setOnAction(event -> input.setText(input.getText() + "3"));
		btn4.setOnAction(event -> input.setText(input.getText() + "4"));
		btn5.setOnAction(event -> input.setText(input.getText() + "5"));
		btn6.setOnAction(event -> input.setText(input.getText() + "6"));
		btn7.setOnAction(event -> input.setText(input.getText() + "7"));
		btn8.setOnAction(event -> input.setText(input.getText() + "8"));
		btn9.setOnAction(event -> input.setText(input.getText() + "9"));
					// 숫자 버튼이 눌리면 input textfield에 각각의 문자열을 삽입한다.
		
		btnadd.setOnAction(event -> input.setText(input.getText() + "+"));
		btnsub.setOnAction(event -> input.setText(input.getText() + "-"));
		btnmul.setOnAction(event -> input.setText(input.getText() + "*"));
		btndiv.setOnAction(event -> input.setText(input.getText() + "/"));
					// 연산자 버튼이 눌리면 input textfield에 각각의 문자열을 삽입한다.
		
		btnCE.setOnAction(event -> {input.setText(""); output.setText("");});	
					// CE 버튼이 눌리면 input, output textfield에 있는 내용을 모두 지운다.
		
		btnresult.setOnAction(event -> output.setText(result()));
					// 계산 버튼이 눌리면 result메소드를 실행한 결과를 output textfield에 삽입한다.
		
		input.setOnKeyPressed(event -> enterPressed(event));
					// input textfield에서 연산을 입력하고 엔터키를 누르면 계산 버튼과 같은 동작을 한다.
	}
	
	public void enterPressed(KeyEvent e) {		// input textfield에서 키보드 동작이 들어왔을 때 작동하는 이벤트
		KeyCode key = e.getCode();
		if(key == KeyCode.ENTER) 				// 엔터가 입력되면
			output.setText(result());			// result를 도출하는 메소드 실행
		if(key == KeyCode.ESCAPE) {				// ESC가 입력되면
			input.setText("");					// input, output textfield 초기화
			output.setText("");
		}
	}
	
	public String result() {
		String[] strspt = input.getText().split("");	// input textfield에 있는 문자열을 하나씩 잘라서 strspt에 넣기
		String result = "";
		int operandnum = 1;		// 피연산자의 갯수 => 연산자가 들어올 때 마다 1개씩 추가
		int operatornum;		// 연산자의 갯수 => 총 피연산자 - 1개
		Queue<String> qu = new LinkedList<String>();	// input에 있는 수식들을 후위연산식으로 저장할 큐
		
		for(int i = 0; i < input.getText().length(); i++) {	// 피연산자 갯수 계산
			if(strspt[i].equals("+") || strspt[i].equals("-") || strspt[i].equals("*") || strspt[i].equals("/"))
				operandnum++;
		}
		
		qu = toPostfix(operandnum, input.getText());		// 중위연산식 => 후위연산식으로 바꿔주는 메소드
		operatornum = operandnum - 1;
		result = Double.toString(calculpost(qu, operatornum));		// double형 결과를 문자열로 변환
		
		return result;
	}
	
	public boolean isnum(String str) {			// 숫자인지 검사하는 메소드
		String[] num = {"0","1","2","3","4","5","6","7","8","9"};
		for(int i = 0; i < 10; i++) 
			if(str.equals(num[i]))
				return true;		// 0 ~ 9 중에서 같은 문자열이 있으면 true 반환
		return false;				// 없으면 false 반환
	}
	
	public Queue<String> toPostfix(int operandnum, String input) {
		String[] operand = new String[operandnum];		// 피연산자 저장해둘 배열
		String[] operator = new String[operandnum - 1];	// 연산자 저장해둘 배열
		int operandcount = 0;
		String[] strspt = input.split("");			// input에 있는 문자열 하나씩 분리해서 저장
		Stack<String> st = new Stack<String>();		// 연산자 저장해둘 스택
		Queue<String> qu = new LinkedList<String>();// 피연산자와 후위연산자를 후위연산식으로 저장할 큐
		
		for(int i = 0; i < operand.length; i++) 	// 초기화
			operand[i] = "";
		for(int i = 0; i < operator.length; i++) 	// 초기화
			operator[i] = "";
		
		for(int i = 0; i < input.length(); i++) {	// input의 문자열 길이만큼 반복
			if(isnum(strspt[i])) 	// strspt[i]가 숫자이고 왼쪽 피연산자일때
				operand[operandcount] += strspt[i];	// 왼쪽 피연산자에 strspt[i]를 추가
			else {					// strspt[i]가 숫자가 아닐때 즉, 연산자일때
				operator[operandcount] += strspt[i];// 연산자에 strspt[i]를 추가
				operandcount++;
			}
		}
		
		for(int i = 0; i < operandnum * 2 - 1; i++) {// 모든 경우를 끝까지 반복
			if(i % 2 == 0) 				// 피연산자(숫자)일 경우 큐에 추가
				qu.add(operand[i / 2]);	// 큐에 바로 넣기
			else {						// 연산자일 경우
				if(operator[i / 2].equals("+") || operator[i / 2].equals("-")) {// 연산자가 +나 -일 경우
					int size = st.size();
					for(int j = 0; j < size; j++)
						qu.add(st.pop());			// 스택에 있는거 전부 순서대로 큐에 꺼내기
					st.add(operator[i / 2]);		// 그 후에 +나 - 스택에 넣기
				}
				else		// 연산자가 *나 /일 경우
					st.add(operator[i / 2]);// 스택에 연산자 넣기
			}
		}
		int size = st.size();
		for(int j = 0; j < size; j++)
			qu.add(st.pop());				// 스택에 있는거 전부 큐에 꺼내기
		
		return qu;
	}
	
	public double calculpost(Queue<String> qu, int operandcount) {
		double result = 0, num;		// result = 최종 결과    num = 하나씩 계산한 결과
		int size = qu.size();
		ArrayList<String> str = new ArrayList<String>();
		for(int i = 0; i < size; i++) 	// 큐에 있는거 전부 str에 꺼내기
			str.add(qu.poll());
		
		for(int i = 0; i < str.size(); i++) {
			if(str.get(i).equals("+") || str.get(i).equals("-") || str.get(i).equals("*") || str.get(i).equals("/")) {
						// str[i]가 연산자일 경우에만
				switch(str.get(i)) {
				case "+":
					num = Double.parseDouble(str.get(i-2)) + Double.parseDouble(str.get(i-1));	// num 일단 구하기
					str.remove(i);		// 후위연산식이기 때문에 연산자와
					str.remove(i-1);	// 그 뒤에 있는 피연산자와
					str.remove(i-2);	// 그 뒤뒤에 있는 피연산자는 없애고
					str.add(i-2, Double.toString(num));	// 맨 앞에 있던 피연산자 자리에 결과를 추가해준다.
					i -= 2;				// 맴버 2개가 사라졌으므로 i도 2개 줄여준다.
					break;
				case "-":
					num = Double.parseDouble(str.get(i-2)) - Double.parseDouble(str.get(i-1));	// num 일단 구하기
					str.remove(i);		// 후위연산식이기 때문에 연산자와
					str.remove(i-1);	// 그 뒤에 있는 피연산자와
					str.remove(i-2);	// 그 뒤뒤에 있는 피연산자는 없애고
					str.add(i-2, Double.toString(num));	// 맨 앞에 있던 피연산자 자리에 결과를 추가해준다.
					i -= 2;				// 맴버 2개가 사라졌으므로 i도 2개 줄여준다.
					break;
				case "*":
					num = Double.parseDouble(str.get(i-2)) * Double.parseDouble(str.get(i-1));	// num 일단 구하기
					str.remove(i);		// 후위연산식이기 때문에 연산자와
					str.remove(i-1);	// 그 뒤에 있는 피연산자와
					str.remove(i-2);	// 그 뒤뒤에 있는 피연산자는 없애고
					str.add(i-2, Double.toString(num));	// 맨 앞에 있던 피연산자 자리에 결과를 추가해준다.
					i -= 2;				// 맴버 2개가 사라졌으므로 i도 2개 줄여준다.
					break;
				case "/":
					num = Double.parseDouble(str.get(i-2)) / Double.parseDouble(str.get(i-1));	// num 일단 구하기
					str.remove(i);		// 후위연산식이기 때문에 연산자와
					str.remove(i-1);	// 그 뒤에 있는 피연산자와
					str.remove(i-2);	// 그 뒤뒤에 있는 피연산자는 없애고
					str.add(i-2, Double.toString(num));	// 맨 앞에 있던 피연산자 자리에 결과를 추가해준다.
					i -= 2;				// 맴버 2개가 사라졌으므로 i도 2개 줄여준다.
					break;
				}
			}		
		}
		result = Double.parseDouble(str.get(0)); // str은 맨 앞 맴버 하나만 남고  그게 연산 최종 결과
		
		return result;
	}	
}