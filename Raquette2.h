/*
 *  Raquette2.h
 *  cpPong
 *
 *  Created by Simon Rouger on 10/09/11.
 *  Copyright 2011 supinfo. All rights reserved.
 *
 */
#include "Raquette.h"

class Raquette2 : public Raquette {
	private:
		int positionX;
	
	public:
		void moveLeft();
		void moveRight();
	
}