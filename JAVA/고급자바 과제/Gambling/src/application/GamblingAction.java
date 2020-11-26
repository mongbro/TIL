package application;

import java.net.URL;
import java.util.ResourceBundle;
import javafx.fxml.FXML;
import javafx.fxml.Initializable;
import javafx.scene.control.Label;
import javafx.scene.input.KeyCode;
import javafx.scene.input.KeyEvent;
import javafx.scene.layout.Pane;

public class GamblingAction implements Initializable {
	@FXML private Pane pa;
	@FXML private Label label01,label02,label03, textlabel;
	@Override
	public void initialize(URL loc, ResourceBundle res) {
		pa.setOnKeyPressed(event -> enterPress(event));
	}
	
	public void enterPress(KeyEvent e) {
		KeyCode key = e.getCode();
		int a = (int)(Math.random()*5), b = (int)(Math.random()*5), c = (int)(Math.random()*5);
		if(key == KeyCode.ENTER) {
			label01.setText(""+a);
			label02.setText(""+b);
			label03.setText(""+c);
		}  
		if(a == b && b == c)
			textlabel.setText("축하합니다.");
		else
			textlabel.setText("실패하셨습니다.");
	}
}