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
	public void enterPressed(KeyEvent e) {		// 엔터입력이 들어왔을 때 작동하는 이벤트
		int a, b, c;
		a = (int)(Math.random()*5);		// 0~4까지의 난수 생성
		b = (int)(Math.random()*5);		// 0~4까지의 난수 생성
		c = (int)(Math.random()*5);		// 0~4까지의 난수 생성
		if(checklabel.getText().equals("true")) {	// 아직 세 수가 동일한 적이 없을 때
			KeyCode key = e.getCode();
			if(key == KeyCode.ENTER) {				// 엔터가 입력되면
				label1.setText(Integer.toString(a));	// 각각 라벨에 a, b, c 난수를 삽입
				label2.setText(Integer.toString(b));
				label3.setText(Integer.toString(c));
			}
			if(a == b && b == c) {				// 세 수가 동일하면
				textlabel.setText("축하합니다!");	// textlabel에 "축하합니다"를 출력
				checklabel.setText("false");	// checklabel의 텍스트를 false로 바꾼다
			}
			else
				textlabel.setText("아쉽군요");
		}
	}
}
