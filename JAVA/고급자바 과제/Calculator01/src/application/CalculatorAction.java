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
					// ���� ��ư�� ������ input textfield�� ������ ���ڿ��� �����Ѵ�.
		
		btnadd.setOnAction(event -> input.setText(input.getText() + "+"));
		btnsub.setOnAction(event -> input.setText(input.getText() + "-"));
		btnmul.setOnAction(event -> input.setText(input.getText() + "*"));
		btndiv.setOnAction(event -> input.setText(input.getText() + "/"));
					// ������ ��ư�� ������ input textfield�� ������ ���ڿ��� �����Ѵ�.
		
		btnCE.setOnAction(event -> {input.setText(""); output.setText("");});	
					// CE ��ư�� ������ input, output textfield�� �ִ� ������ ��� �����.
		
		btnresult.setOnAction(event -> output.setText(result()));
					// ��� ��ư�� ������ result�޼ҵ带 ������ ����� output textfield�� �����Ѵ�.
		
		input.setOnKeyPressed(event -> enterPressed(event));
					// input textfield���� ������ �Է��ϰ� ����Ű�� ������ ��� ��ư�� ���� ������ �Ѵ�.
	}
	public void enterPressed(KeyEvent e) {		// input textfield���� Ű���� ������ ������ �� �۵��ϴ� �̺�Ʈ
		KeyCode key = e.getCode();
		if(key == KeyCode.ENTER) 				// ���Ͱ� �ԷµǸ�
			output.setText(result());			// result�� �����ϴ� �޼ҵ� ����
		if(key == KeyCode.ESCAPE) {				// ESC�� �ԷµǸ�
			input.setText("");					// input, output textfield �ʱ�ȭ
			output.setText("");
		}
	}
	public String result() {
		String result = "", operand1 = "", operand2 = "", operator = "";
			// result = ������ ����� ���ڿ��� �ٲ� ����, operand1, 2 = input textfield�� �ִ� �ǿ����� 2��
			// operator = input textfield�� �ִ� ������
		
		String[] strspt = new String[input.getText().length()];
		boolean isfirst = true;		// ���� �ǿ��������� ������ �ǿ��������� �Ǵ�
		double dresult = 0;			// double�� ������ ���
		strspt = input.getText().split("");
			// input textfield�� �ִ� ���ڿ��� �Ѱ� �Ѱ��� �и��ؼ� ���� �迭�� �����Ѵ�.
		
		for(int i = 0; i < input.getText().length(); i++) {	// input�� ���ڿ� ���̸�ŭ �ݺ�
			if(isnum(strspt[i]) && isfirst) {		// strspt[i]�� �����̰� ���� �ǿ������϶�
				operand1 += strspt[i];				// ���� �ǿ����ڿ� strspt[i]�� �߰�
			}
			if(isnum(strspt[i]) && !isfirst) {		// strspt[i]�� �����̰� ������ �ǿ������϶�
				operand2 += strspt[i];				// ������ �ǿ����ڿ� strspt[i]�� �߰�
			}
			if(!isnum(strspt[i])) {					// strspt[i]�� ���ڰ� �ƴҶ� ��, �������϶�
				operator += strspt[i];				// �����ڿ� strspt[i]�� �߰�
				isfirst = false;					// ���Ŀ� ���� ���ڴ� ������ �� �����ڷ� �Ѵ�.
			}
		}
		
		switch(operator) {		// �����ڿ� ���� double�� ����� ���� ����
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
			if(operand2.equals("0"))		// 0���� �����⸦ �� ��� output textfield�� �����޼��� ���
				return "ERROR! - Divide by Zero";
			else
				dresult = Double.parseDouble(operand1) / Double.parseDouble(operand2);
			break;
		}
		result = Double.toString(dresult);		// double�� ����� ���ڿ��� ��ȯ
		return result;
	}
	public boolean isnum(String str) {			// �������� �˻��ϴ� �޼ҵ�
		String[] num = {"0","1","2","3","4","5","6","7","8","9"};
		for(int i = 0; i < 10; i++) 
			if(str.equals(num[i]))
				return true;		// 0 ~ 9 �߿��� ���� ���ڿ��� ������ true ��ȯ
		return false;				// ������ false ��ȯ
	}
}
