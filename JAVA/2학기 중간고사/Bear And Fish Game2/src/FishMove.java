import java.util.Random;

import javax.swing.JLabel;

class FishMove extends Thread {
	JLabel fish;
	public FishMove(JLabel fish) {
		this.fish = fish;
	}
	@Override
	public void run() {
		
		while(true) {
			try {
				sleep(250);
			}catch(InterruptedException e) {
				fish.setText("");
				break;
			}
			Random rn = new Random();
			int direction = rn.nextInt() % 4;
			switch(direction) {
			case 0:		//up
				if(fish.getY() - 20 >= 0)
					fish.setLocation(fish.getX(), fish.getY() - 20);
				break;
			case 1:		//down
				if(fish.getY() + 20 <= 400)
					fish.setLocation(fish.getX(), fish.getY() + 20);
				break;
			case 2:		//left
				if(fish.getX() - 20 >= 0)
					fish.setLocation(fish.getX() - 20, fish.getY());
				break;
			case 3:		// right
				if(fish.getX() + 20 <= 400)
					fish.setLocation(fish.getX() + 20, fish.getY());
				break;
			}
		}
	}
}
