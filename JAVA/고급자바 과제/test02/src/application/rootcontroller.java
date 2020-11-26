package application;

import java.net.URL;
import java.util.ResourceBundle;

import javafx.application.Platform;
import javafx.event.ActionEvent;
import javafx.fxml.FXML;
import javafx.fxml.Initializable;
import javafx.scene.control.Button;

public class rootcontroller implements Initializable {
	@FXML private Button btn;
	@Override
	public void initialize(URL loc, ResourceBundle res) {
		btn.setOnAction(event->handleBtnAction(event));
	}
	public void handleBtnAction(ActionEvent event) {
		Platform.exit();
	}
}
