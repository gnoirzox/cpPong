/*
 *  Player.h
 *  cpPong
 *
 *  Created by Simon Rouger on 05/09/11.
 *  Copyright 2011 supinfo. All rights reserved.
 *
 */

class Player {
	private:
		std::string name = enum(player1, player2, computer);
		int score;

	public:
		int incScore();
		void showScore();
}