package application;

import java.net.URL;
import java.util.ResourceBundle;

import javafx.fxml.FXML;
import javafx.fxml.Initializable;
import javafx.scene.control.Label;
import javafx.scene.input.KeyCode;
import javafx.scene.input.KeyEvent;
import javafx.scene.layout.AnchorPane;

public class controller implements Initializable{
	@FXML private AnchorPane pane;
	@FXML private Label la01, la02, la03, latext;
	@Override
	public void initialize(URL loc, ResourceBundle res) {
		pane.setOnKeyPressed(event->eventt(event));
	}
	
	public void eventt(KeyEvent e) {
		int a, b, c;
		a = (int)(Math.random() * 5);
		b = (int)(Math.random() * 5);
		c = (int)(Math.random() * 5);
		KeyCode key = e.getCode();
		if(key == KeyCode.ENTER) {
			la01.setText("" + a);
			la02.setText("" + b);
			la03.setText("" + c);
		}
		if(a == b && b == c)
			latext.setText("축하합니다.");
		else
			latext.setText("실패했습니다.");
	}
}
