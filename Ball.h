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
		int getPositionX(int positionX) const;
		int getPositionY(int positionY) const;
		void setPosition();
		int getSpeed(int speed()) const;
		int setSpeed();
		bool Ball::colision(int getPositionX(), int getPositionY(), int Raquette.getPositionX(), int Raquette.getPositionY()) const;
		
}