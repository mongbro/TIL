package application;

import javafx.fxml.FXML;
import javafx.fxml.Initializable;
import javafx.scene.control.Button;
import javafx.scene.control.Label;
import javafx.scene.layout.BorderPane;
import javafx.event.*;
import java.net.URL;
import java.util.ResourceBundle;
import javafx.event.ActionEvent;
import javafx.event.EventHandler;
import javafx.scene.control.TextField;
import java.util.StringTokenizer;

public class Calculator implements Initializable {

	@FXML
	private Button NUM1, NUM2, NUM3, NUM4, NUM5, NUM6, NUM7, NUM8, NUM9, NUM0;
	@FXML
	private BorderPane MAIN;
	@FXML
	private Button DIVISION, MULTIPLY, CONTRACT, CE, RESULT, PLUS;
	@FXML
	private Label TEXT1, TEXT2;

	public void initialize(URL location, ResourceBundle resources) {

		//NUM? 을 누르면 ?가 TEXT1에 ?를 덧붙입니다
		NUM0.setOnAction(event -> TEXT1.setText(TEXT1.getText() + "0")); 
		NUM1.setOnAction(event -> TEXT1.setText(TEXT1.getText() + "1")); 
		NUM2.setOnAction(event -> TEXT1.setText(TEXT1.getText() + "2")); 
		NUM3.setOnAction(event -> TEXT1.setText(TEXT1.getText() + "3")); 
		NUM4.setOnAction(event -> TEXT1.setText(TEXT1.getText() + "4")); 
		NUM5.setOnAction(event -> TEXT1.setText(TEXT1.getText() + "5")); 
		NUM6.setOnAction(event -> TEXT1.setText(TEXT1.getText() + "6")); 
		NUM7.setOnAction(event -> TEXT1.setText(TEXT1.getText() + "7")); 
		NUM8.setOnAction(event -> TEXT1.setText(TEXT1.getText() + "8")); 
		NUM9.setOnAction(event -> TEXT1.setText(TEXT1.getText() + "9")); 

		PLUS.setOnAction(event -> TEXT1.setText(TEXT1.getText()+operator("+")));// +을 클릭하면 수식 label에 + 추가
		CONTRACT.setOnAction(event -> TEXT1.setText(TEXT1.getText() + operator("-"))); // -을 클릭하면 수식 label에 - 추가
		MULTIPLY.setOnAction(event -> TEXT1.setText(TEXT1.getText() + operator("*"))); // *을 클릭하면 수식 label에 * 추가
		DIVISION.setOnAction(event -> TEXT1.setText(TEXT1.getText() + operator("/"))); // /을 클릭하면 수식 label에 / 추가
		

		CE.setOnAction(event -> {TEXT1.setText("");TEXT2.setText("");});

		
		
		RESULT.setOnAction(event -> TEXT2.setText(result())); // 수식값 결과창에 복사

	}
	String result() {
		String expression = TEXT1.getText();// 수식값 문자열저장
		String number[] = new String[4];
		int count = 0;
		double result = 0;	
		
		String error="다시입력해주세요";
		
		StringTokenizer st = new StringTokenizer(expression, "+-*/ ", true);
		while (st.hasMoreTokens()) {
			String token = st.nextToken();
			number[count] = token;
			count++;
		}
		
		int c= st.countTokens();
		if (expression == null) {return error;};
		
		if (number[1]==null ||number[2].equals("+") || number[2].equals("-") || number[2].equals("*") || number[2].equals("/") ) {
			return error;
		}
		else {
			if (number[1].equals("+")) {
				result = Double.parseDouble(number[0]) +  Double.parseDouble(number[2]);
			} else if (number[1].equals("-")) {
				result = Double.parseDouble(number[0]) - Double.parseDouble(number[2]);
			} else if (number[1].equals("*")) {
				result = Double.parseDouble(number[0]) * Double.parseDouble(number[2]);
			} else if (number[1].equals("/")) {
				result = Double.parseDouble(number[0]) / Double.parseDouble(number[2]);
			}	
		}
		
		String toStringResult = Double.toString(result);
		return toStringResult;
	}
	
	public String operator(String operator) {
		String Operator= operator;
		String none = "";
		if(TEXT1.getText().equals("")) {
			return none;
		}
		else {
			return Operator;
		}
	}
}
