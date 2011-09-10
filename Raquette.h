/*
 *  Raquette.h
 *  cpPong
 *
 *  Created by Simon Rouger on 27/08/11.
 *  Copyright 2011 supinfo. All rights reserved.
 *
 */

class Raquette() {
	private:
		int positionX;
		int positionY;
			
	public:
		sf::Shape rectangle;
	
		Raquette();
	
		int getPositionX(int positionX) const;
		int getPositionY(int positionY) const;
		void setPosition();
	
		void moveLeft();
		void moveRight();
}