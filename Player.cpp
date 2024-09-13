#include "Player.h"
#include <string>
#include "Moves.h"

Player::Player(std::string name) : name(name) 
{
	wins = 0;
	losses = 0;
	score = 0;
}

std::string Player::playMove() {
	return moves.getMove();
}

int Player::getScore() const {
	return score;
}

void Player::increaseScore() {
	score += 1;
}

int Player::getWins() const {
	return wins;
}

int Player::getLosses() const {
	return losses;
}