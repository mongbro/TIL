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
		String[] strspt = input.getText().split("");	// input textfield�� �ִ� ���ڿ��� �ϳ��� �߶� strspt�� �ֱ�
		String result = "";
		int operandnum = 1;		// �ǿ������� ���� => �����ڰ� ���� �� ���� 1���� �߰�
		int operatornum;		// �������� ���� => �� �ǿ����� - 1��
		Queue<String> qu = new LinkedList<String>();	// input�� �ִ� ���ĵ��� ������������� ������ ť
		
		for(int i = 0; i < input.getText().length(); i++) {	// �ǿ����� ���� ���
			if(strspt[i].equals("+") || strspt[i].equals("-") || strspt[i].equals("*") || strspt[i].equals("/"))
				operandnum++;
		}
		
		qu = toPostfix(operandnum, input.getText());		// ��������� => ������������� �ٲ��ִ� �޼ҵ�
		operatornum = operandnum - 1;
		result = Double.toString(calculpost(qu, operatornum));		// double�� ����� ���ڿ��� ��ȯ
		
		return result;
	}
	
	public boolean isnum(String str) {			// �������� �˻��ϴ� �޼ҵ�
		String[] num = {"0","1","2","3","4","5","6","7","8","9"};
		for(int i = 0; i < 10; i++) 
			if(str.equals(num[i]))
				return true;		// 0 ~ 9 �߿��� ���� ���ڿ��� ������ true ��ȯ
		return false;				// ������ false ��ȯ
	}
	
	public Queue<String> toPostfix(int operandnum, String input) {
		String[] operand = new String[operandnum];		// �ǿ����� �����ص� �迭
		String[] operator = new String[operandnum - 1];	// ������ �����ص� �迭
		int operandcount = 0;
		String[] strspt = input.split("");			// input�� �ִ� ���ڿ� �ϳ��� �и��ؼ� ����
		Stack<String> st = new Stack<String>();		// ������ �����ص� ����
		Queue<String> qu = new LinkedList<String>();// �ǿ����ڿ� ���������ڸ� ������������� ������ ť
		
		for(int i = 0; i < operand.length; i++) 	// �ʱ�ȭ
			operand[i] = "";
		for(int i = 0; i < operator.length; i++) 	// �ʱ�ȭ
			operator[i] = "";
		
		for(int i = 0; i < input.length(); i++) {	// input�� ���ڿ� ���̸�ŭ �ݺ�
			if(isnum(strspt[i])) 	// strspt[i]�� �����̰� ���� �ǿ������϶�
				operand[operandcount] += strspt[i];	// ���� �ǿ����ڿ� strspt[i]�� �߰�
			else {					// strspt[i]�� ���ڰ� �ƴҶ� ��, �������϶�
				operator[operandcount] += strspt[i];// �����ڿ� strspt[i]�� �߰�
				operandcount++;
			}
		}
		
		for(int i = 0; i < operandnum * 2 - 1; i++) {// ��� ��츦 ������ �ݺ�
			if(i % 2 == 0) 				// �ǿ�����(����)�� ��� ť�� �߰�
				qu.add(operand[i / 2]);	// ť�� �ٷ� �ֱ�
			else {						// �������� ���
				if(operator[i / 2].equals("+") || operator[i / 2].equals("-")) {// �����ڰ� +�� -�� ���
					int size = st.size();
					for(int j = 0; j < size; j++)
						qu.add(st.pop());			// ���ÿ� �ִ°� ���� ������� ť�� ������
					st.add(operator[i / 2]);		// �� �Ŀ� +�� - ���ÿ� �ֱ�
				}
				else		// �����ڰ� *�� /�� ���
					st.add(operator[i / 2]);// ���ÿ� ������ �ֱ�
			}
		}
		int size = st.size();
		for(int j = 0; j < size; j++)
			qu.add(st.pop());				// ���ÿ� �ִ°� ���� ť�� ������
		
		return qu;
	}
	
	public double calculpost(Queue<String> qu, int operandcount) {
		double result = 0, num;		// result = ���� ���    num = �ϳ��� ����� ���
		int size = qu.size();
		ArrayList<String> str = new ArrayList<String>();
		for(int i = 0; i < size; i++) 	// ť�� �ִ°� ���� str�� ������
			str.add(qu.poll());
		
		for(int i = 0; i < str.size(); i++) {
			if(str.get(i).equals("+") || str.get(i).equals("-") || str.get(i).equals("*") || str.get(i).equals("/")) {
						// str[i]�� �������� ��쿡��
				switch(str.get(i)) {
				case "+":
					num = Double.parseDouble(str.get(i-2)) + Double.parseDouble(str.get(i-1));	// num �ϴ� ���ϱ�
					str.remove(i);		// ����������̱� ������ �����ڿ�
					str.remove(i-1);	// �� �ڿ� �ִ� �ǿ����ڿ�
					str.remove(i-2);	// �� �ڵڿ� �ִ� �ǿ����ڴ� ���ְ�
					str.add(i-2, Double.toString(num));	// �� �տ� �ִ� �ǿ����� �ڸ��� ����� �߰����ش�.
					i -= 2;				// �ɹ� 2���� ��������Ƿ� i�� 2�� �ٿ��ش�.
					break;
				case "-":
					num = Double.parseDouble(str.get(i-2)) - Double.parseDouble(str.get(i-1));	// num �ϴ� ���ϱ�
					str.remove(i);		// ����������̱� ������ �����ڿ�
					str.remove(i-1);	// �� �ڿ� �ִ� �ǿ����ڿ�
					str.remove(i-2);	// �� �ڵڿ� �ִ� �ǿ����ڴ� ���ְ�
					str.add(i-2, Double.toString(num));	// �� �տ� �ִ� �ǿ����� �ڸ��� ����� �߰����ش�.
					i -= 2;				// �ɹ� 2���� ��������Ƿ� i�� 2�� �ٿ��ش�.
					break;
				case "*":
					num = Double.parseDouble(str.get(i-2)) * Double.parseDouble(str.get(i-1));	// num �ϴ� ���ϱ�
					str.remove(i);		// ����������̱� ������ �����ڿ�
					str.remove(i-1);	// �� �ڿ� �ִ� �ǿ����ڿ�
					str.remove(i-2);	// �� �ڵڿ� �ִ� �ǿ����ڴ� ���ְ�
					str.add(i-2, Double.toString(num));	// �� �տ� �ִ� �ǿ����� �ڸ��� ����� �߰����ش�.
					i -= 2;				// �ɹ� 2���� ��������Ƿ� i�� 2�� �ٿ��ش�.
					break;
				case "/":
					num = Double.parseDouble(str.get(i-2)) / Double.parseDouble(str.get(i-1));	// num �ϴ� ���ϱ�
					str.remove(i);		// ����������̱� ������ �����ڿ�
					str.remove(i-1);	// �� �ڿ� �ִ� �ǿ����ڿ�
					str.remove(i-2);	// �� �ڵڿ� �ִ� �ǿ����ڴ� ���ְ�
					str.add(i-2, Double.toString(num));	// �� �տ� �ִ� �ǿ����� �ڸ��� ����� �߰����ش�.
					i -= 2;				// �ɹ� 2���� ��������Ƿ� i�� 2�� �ٿ��ش�.
					break;
				}
			}		
		}
		result = Double.parseDouble(str.get(0)); // str�� �� �� �ɹ� �ϳ��� ����  �װ� ���� ���� ���
		
		return result;
	}	
}