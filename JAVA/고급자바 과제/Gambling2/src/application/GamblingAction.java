package application;

import java.net.URL;
import java.util.ResourceBundle;

import javafx.fxml.FXML;
import javafx.fxml.Initializable;
import javafx.scene.control.Label;
import javafx.scene.input.KeyCode;
import javafx.scene.input.KeyEvent;
import javafx.scene.layout.AnchorPane;

public class GamblingAction implements Initializable{
	@FXML Label label1, label2, label3, textlabel, checklabel;
	@FXML AnchorPane pane;
	@Override
	public void initialize(URL location, ResourceBundle resources) {
		pane.setOnKeyPressed(event -> enterPressed(event));
	}
	public void enterPressed(KeyEvent e) {
		int a, b, c;
		a = (int)(Math.random()*5);
		b = (int)(Math.random()*5);
		c = (int)(Math.random()*5);
		if(checklabel.getText().equals("true")) {
			KeyCode key = e.getCode();
			if(key == KeyCode.ENTER) {
				label1.setText(Integer.toString(a));
				label2.setText(Integer.toString(b));
				label3.setText(Integer.toString(c));
			}
			if(a == b && b == c) {
				textlabel.setText("축하합니다!");
				checklabel.setText("false");
			}
			else
				textlabel.setText("아쉽군요");
		}
	}
}
