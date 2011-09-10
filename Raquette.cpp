/*
 *  Raquette.cpp
 *  cpPong
 *
 *  Created by Simon Rouger on 27/08/11.
 *  Copyright 2011 supinfo. All rights reserved.
 *
 */

#include "Raquette.h"

Raquette::Raquette() {
	int positionY;
	int positionX;
	
	sf::Shape rectangle;
	rectangle.EnableFill(true);
	rectangle.EnableOutline(false);	
}

int Raquette::getPositionX(int positionX) const {
	return positionX;
}

int Raquette::getPositionY(int positionY) const {
	return positionY;

}
					   
void Raquette::setPosition() {
	switch (Player::name) {
		case player1:
			rectangle= sf::Shape::Rectangle(10, 275, 20, 325, Color(255, 255, 255));
			break;
		case player2:
			rectangle= sf::Shape::Rectangle(780, 275,790, 325, Color(255, 255, 255));
			break
		case computer:
			rectangle= sf::Shape::Rectangle(780, 275,790, 325, Color(255, 255, 255));
			break;
	}
	App.Draw(rectangle);

}
void Raquette::moveLeft() {
	rectangle.Move(0, +1);
	App.Draw(rectangle);
}

void Raquette::moveRight() {
	rectangle.Move(0, -1);
	App.Draw(rectangle);

}