package application;

import java.net.URL;
import java.util.ResourceBundle;

import com.sun.javafx.css.CalculatedValue;

import javafx.event.ActionEvent;
import javafx.fxml.FXML;
import javafx.fxml.Initializable;
import javafx.scene.control.Button;
import javafx.scene.control.TextField;

public class calculatorAction implements Initializable{
	@FXML private Button add, sub, mul, div;
	@FXML private Button num0,num1,num2,num3,num4,num5,num6,num7,num8,num9,CE,result;
	@FXML private TextField input, output;
	@Override
	public void initialize(URL location, ResourceBundle resources) {
		String operand1 = "", operand2 = "", operator = "";
		num0.setOnAction(event -> input.setText(input.getText() + "0"));
		num1.setOnAction(event -> input.setText(input.getText() + "1"));
		num2.setOnAction(event -> input.setText(input.getText() + "2"));
		num3.setOnAction(event -> input.setText(input.getText() + "3"));
		num4.setOnAction(event -> input.setText(input.getText() + "4"));
		num5.setOnAction(event -> input.setText(input.getText() + "5"));
		num6.setOnAction(event -> input.setText(input.getText() + "6"));
		num7.setOnAction(event -> input.setText(input.getText() + "7"));
		num8.setOnAction(event -> input.setText(input.getText() + "8"));
		num9.setOnAction(event -> input.setText(input.getText() + "9"));
		add.setOnAction(event -> input.setText(input.getText() + "+"));
		sub.setOnAction(event -> input.setText(input.getText() + "-"));
		mul.setOnAction(event -> input.setText(input.getText() + "*"));
		div.setOnAction(event -> input.setText(input.getText() + "/"));
		CE.setOnAction(event -> {input.setText(""); output.setText("");});
		result.setOnAction(event -> output.setText(Double.toString(calulating())));
	}

	public double calulating() {
		double result = 0;
		 String[] str = new String[input.getText().length()];
		 String operand1 = "", operand2 = "", operator = "";
		 boolean isfirst = true;
		 str = input.getText().split("");
		 for(int i = 0; i < input.getText().length(); i++) {
			 if(isnum(str[i]) && isfirst)
				 operand1 += str[i];
			 if(isnum(str[i]) && !isfirst)
				 operand2 += str[i];
			 if(!isnum(str[i]))
				 operator += str[i];
		 }
		 switch(operator) {
		 case "+":
			 result = Double.parseDouble(operand1) + Double.parseDouble(operand2);
			 break;
		 case "-":
			 result = Double.parseDouble(operand1) - Double.parseDouble(operand2);
			 break;
		 case "*":
			 result = Double.parseDouble(operand1) * Double.parseDouble(operand2);
			 break;
		 case "/":
			 result = Double.parseDouble(operand1) / Double.parseDouble(operand2);
			 break;
		 }
		 
		return result;
	}
	
	public boolean isnum(String str) {
		for(int i = 0; i < 10; i++) {
			 if(Integer.parseInt(str) == i)
				 return true;
		}
		return false;
	}
}
