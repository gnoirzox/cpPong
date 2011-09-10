/*
 *  Collision.cpp
 *  cpPong
 *
 *  Created by Simon Rouger on 09/09/11.
 *  Copyright 2011 supinfo. All rights reserved.
 *
 */

#include "Collision.h"
#include "Ball.h"
#include "Raquette.h"

Collision(Ball& myBall, Raquette& myRaquette, Raquette& myRaquette2, sf::Vector2f windowSize) {
	Ball& myBall(ball);
	Raquette& myRaquette(raquette);
	Raquette& myRaquette2(raquette2);
	
	sf::Vector2f windowSize(myWindowSize);
	
}

Collision::manageX {

	
	if collision() {
		myBall.reverseX();
		myBall.moveX();
		
	}
}

Collision::manageY {

	
	if collision() {
		myBall.reverseY();
		myBall.moveY();
		
	}
}

