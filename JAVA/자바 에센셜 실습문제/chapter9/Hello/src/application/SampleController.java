package application;

import java.util.ResourceBundle;
import javax.print.DocFlavor.URL;
import javafx.application.Platform;
import javafx.event.ActionEvent;

public class SampleController implements Initializable {
	@Override
	
	@FXML private Button btn;
	public void initialize(URL loc, ResourceBundle res) {
		btn.setOnAction(event->handleBtnAction(event));	
	}
	public void handleBtnAction(ActionEvent event) {
		Platform.exit();
	}
}