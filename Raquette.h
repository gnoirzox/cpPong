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
		float getPosition(int positionX, int positionY) const;
		void moveLeft();
		void moveRight();
		bool colision(int getPosition(), int Ball.getPosition()) const;
}