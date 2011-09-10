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
		sf::Shape circle;

	public:
		Ball();
		
		int getPositionX(int positionX) const;
		int getPositionY(int positionY) const;
		void setPosition();
		void moveX();
		void moveY();
		void reverseX();
		void reverseY();
		int getSpeed(int speed()) const;
		int setSpeed();
		void draw();
}