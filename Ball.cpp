/*
 *  Ball.cpp
 *  cpPong
 *
 *  Created by Simon Rouger on 27/08/11.
 *  Copyright 2011 supinfo. All rights reserved.
 *
 */

#include "Ball.h"

Ball::Ball() {
	int positionX= 123;
	int positionY= 456;
	int speed= 1;
	
	sf::Shape circle;
	circle.EnableFill(true);
	circle.EnableOutline(false);
	circle.Circle(400, 300, Color(255, 255, 255));
	
}

int Ball::getPositionX(int positionX) const {
	return positionX;
	
}s

int Ball::getPositionY(int positionY) const {
	return positionY;
	
}

void Ball::moveX() {
	myBall.Move(myReverseX, 0);
	
}

void Ball::moveY() {
	myBall.Move(0, myReverseY);
	
}

void Ball::reverseX() {
	*myReverseX= -1;
	
}

void Ball::reverseY() {
	*myReverseY= -1;
	
}

void Ball::setPosition() {
	
	App.Draw(circle);
	
}

int Ball::getSpeed(int speed()) const {
	return this.speed;
	
}

int Ball::setSpeed(int x) {
	return this.speed= x;
	
}

void Ball:draw() {
	return app.Draw(circle);
	
}
