/*
 *  Player.cpp
 *  cpPong
 *
 *  Created by Simon Rouger on 05/09/11.
 *  Copyright 2011 supinfo. All rights reserved.
 *
 */

#include "Player.h"

Player::Player() {
	std::string name = "";
	int score= 0;
}

int Player::incScore(int score) {
	return score++;
	
}

int getScore() {
	return score;
}

void Player::showScore(int score) const {
	
	sf::String scoreText= "score:";
	sf::String scorePlayer;
	
	std::ostringstream oss; 
	oss << getScore();
	sf::String scorePlayer;
	scorePlayer.SetText(oss.str());
	
}