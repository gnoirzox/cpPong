/*
 *  Ball.h
 *  cpPong
 *
 *  Created by Simon Rouger on 27/08/11.
 *  Copyright 2011 supinfo. All rights reserved.
 *
 */
class Ball() {
	private:
		int speed;
		int positionX;
		int positionY;

	public:
		float getPosition(int positionX, int positionY) const;
		void setPosition();
		int getSpeed(int speed()) const;
		int setSpeed();
		bool colision(int getPosition(), int Raquette.getPosition()) const;
		
}