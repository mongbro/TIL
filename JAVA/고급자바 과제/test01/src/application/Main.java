package application;
	
import javafx.application.Application;
import javafx.fxml.FXMLLoader;
import javafx.geometry.Pos;
import javafx.stage.Stage;
import javafx.scene.Parent;
import javafx.scene.Scene;
import javafx.scene.control.Button;
import javafx.scene.layout.BorderPane;
import javafx.scene.layout.VBox;


public class Main extends Application {
	@Override
	public void start(Stage primaryStage) throws Exception {
		Parent root = FXMLLoader.load(getClass().getResource("test01.fxml"));
		Scene scene = new Scene(root);
		scene.getRoot().requestFocus();
		
		primaryStage.setTitle("Gambling");
		primaryStage.setScene(scene);
		primaryStage.show();
	}


	
	public static void main(String[] args) {
		launch(args);
	}
}
