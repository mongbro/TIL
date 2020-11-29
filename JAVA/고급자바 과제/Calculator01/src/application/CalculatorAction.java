package application;

import java.net.URL;
import java.util.ResourceBundle;
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
		String result = "", operand1 = "", operand2 = "", operator = "";
			// result = 연산의 결과를 문자열로 바꾼 내용, operand1, 2 = input textfield에 있는 피연산자 2개
			// operator = input textfield에 있는 연산자
		
		String[] strspt = new String[input.getText().length()];
		boolean isfirst = true;		// 왼쪽 피연산자인지 오른쪽 피연산자인지 판단
		double dresult = 0;			// double형 연산의 결과
		strspt = input.getText().split("");
			// input textfield에 있는 문자열을 한개 한개씩 분리해서 각각 배열에 저장한다.
		
		for(int i = 0; i < input.getText().length(); i++) {	// input의 문자열 길이만큼 반복
			if(isnum(strspt[i]) && isfirst) {		// strspt[i]가 숫자이고 왼쪽 피연산자일때
				operand1 += strspt[i];				// 왼쪽 피연산자에 strspt[i]를 추가
			}
			if(isnum(strspt[i]) && !isfirst) {		// strspt[i]가 숫자이고 오른쪽 피연산자일때
				operand2 += strspt[i];				// 오른쪽 피연산자에 strspt[i]를 추가
			}
			if(!isnum(strspt[i])) {					// strspt[i]가 숫자가 아닐때 즉, 연산자일때
				operator += strspt[i];				// 연산자에 strspt[i]를 추가
				isfirst = false;					// 이후에 나올 숫자는 오른쪽 피 연산자로 한다.
			}
		}
		
		switch(operator) {		// 연산자에 따라 double형 결과를 먼저 도출
		case "+":
			dresult = Double.parseDouble(operand1) + Double.parseDouble(operand2);
			break;
		case "-":
			dresult = Double.parseDouble(operand1) - Double.parseDouble(operand2);
			break;
		case "*":
			dresult = Double.parseDouble(operand1) * Double.parseDouble(operand2);
			break;
		case "/":
			if(operand2.equals("0"))		// 0으로 나누기를 할 경우 output textfield에 에러메세지 출력
				return "ERROR! - Divide by Zero";
			else
				dresult = Double.parseDouble(operand1) / Double.parseDouble(operand2);
			break;
		}
		result = Double.toString(dresult);		// double형 결과를 문자열로 변환
		return result;
	}
	public boolean isnum(String str) {			// 숫자인지 검사하는 메소드
		String[] num = {"0","1","2","3","4","5","6","7","8","9"};
		for(int i = 0; i < 10; i++) 
			if(str.equals(num[i]))
				return true;		// 0 ~ 9 중에서 같은 문자열이 있으면 true 반환
		return false;				// 없으면 false 반환
	}
}
