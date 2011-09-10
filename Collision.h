/*
 *  Collision.h
 *  cpPong
 *
 *  Created by Simon Rouger on 09/09/11.
 *  Copyright 2011 supinfo. All rights reserved.
 *
 */

class Collision {
	private:
		Ball& myBall;
		Raquette& myRaquette, & myRaquette2;
	
		sf::Vector2f windowSize;
	
	public:
		void manageX;
		void manageY;
	
		Collision(Ball& myBall, Raquette& myRaquette, Raquette& myRaquette2, sf::Vector2f windowSize);
	
}

