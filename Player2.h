/*
 *  Player2.h
 *  cpPong
 *
 *  Created by Simon Rouger on 10/09/11.
 *  Copyright 2011 supinfo. All rights reserved.
 *
 */
#include "Player.h"

class Player2 : public Player {
	private:
		Raquette2 myRaquette2;
	
	public:
		void showScore();
	
}