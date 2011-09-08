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

void Ball::setPosition() {
	
	
	App.Draw(circle);
}

int Ball::getSpeed(int speed()) const {
	return Ball::speed;
	
}

int Ball::setSpeed(int x) {
	int x;
	return Ball::speed= x;
}

bool Ball::colision(int getPositionX(), int getPositionY(), int Raquette::getPositionX(), int Raquette::getPositionY()) const {
	
}

void Ball:draw() {
	return app.Draw(circle);
}
